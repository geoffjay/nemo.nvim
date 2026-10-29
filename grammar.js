/**
 * Tree-sitter grammar for Nemo single-file components (`.nemo` SFC).
 *
 * A `.nemo` file is a Vue-like single-file component: an HTML/XML-flavored
 * document whose `<script>` and `<style>` blocks are raw-text (Rhai and a CSS
 * subset respectively), and whose `<template>` (plus app-level blocks like
 * `<app>`, `<data>`, `<props>`, `<imports>`, `<variable>`) hold nemo component
 * markup with `${...}` interpolation and `n:for`/`n:if`/`n:key` directives.
 *
 * Raw-text capture for `<script>`/`<style>` is delegated to an external
 * scanner (src/scanner.c), matching how tree-sitter-html/vue handle raw text.
 */

module.exports = grammar({
  name: 'nemo',

  extras: ($) => [/\s+/],

  externals: ($) => [$._raw_text_script, $._raw_text_style],

  conflicts: ($) => [],

  rules: {
    document: ($) => repeat($._node),

    _node: ($) =>
      choice(
        $.comment,
        $.cdata,
        $.script_element,
        $.style_element,
        $.element,
        $.interpolation,
        $.template_variable,
        $.brace_text,
        $.text,
      ),

    // ---- Comments / CDATA ------------------------------------------------

    comment: ($) => token(seq('<!--', /([^-]|-[^-]|--[^>])*/, '-->')),

    cdata: ($) => token(seq('<![CDATA[', /([^\]]|\][^\]]|\]\][^>])*/, ']]>')),

    // ---- Elements --------------------------------------------------------

    element: ($) =>
      choice(
        seq($.start_tag, repeat($._node), $.end_tag),
        $.self_closing_tag,
      ),

    start_tag: ($) => seq('<', $.tag_name, repeat($.attribute), '>'),

    self_closing_tag: ($) =>
      seq('<', $.tag_name, repeat($.attribute), '/>'),

    end_tag: ($) => seq('</', $.tag_name, '>'),

    tag_name: ($) => /[a-zA-Z_][a-zA-Z0-9_:.-]*/,

    // ---- Raw-text elements: <script> (Rhai) and <style> (CSS) ------------

    script_element: ($) =>
      seq(
        '<',
        alias('script', $.tag_name),
        repeat($.attribute),
        choice(
          '/>',
          seq(
            '>',
            optional(alias($._raw_text_script, $.raw_text)),
            '</',
            alias('script', $.tag_name),
            '>',
          ),
        ),
      ),

    style_element: ($) =>
      seq(
        '<',
        alias('style', $.tag_name),
        repeat($.attribute),
        choice(
          '/>',
          seq(
            '>',
            optional(alias($._raw_text_style, $.raw_text)),
            '</',
            alias('style', $.tag_name),
            '>',
          ),
        ),
      ),

    // ---- Attributes ------------------------------------------------------

    attribute: ($) => choice($.directive_attribute, $.regular_attribute),

    regular_attribute: ($) =>
      seq(
        choice($.binding_name, $.handler_name, $.attribute_name),
        optional(seq('=', $._attribute_value)),
      ),

    binding_name: ($) => token(prec(1, /bind-[a-zA-Z][a-zA-Z0-9-]*/)),
    handler_name: ($) => token(prec(1, /on-[a-zA-Z][a-zA-Z0-9-]*/)),
    attribute_name: ($) => /[a-zA-Z_][a-zA-Z0-9_.-]*/,

    _attribute_value: ($) =>
      choice(
        $.quoted_value_double,
        $.quoted_value_single,
        $.unquoted_value,
      ),

    // Attribute values interleave plain fragments with `${...}`
    // interpolations and `{{ var }}` template variables. Fragments stop at
    // `{` so both variable forms can match inside the value.

    quoted_value_double: ($) =>
      seq(
        '"',
        repeat(
          choice(
            $.interpolation,
            $.template_variable,
            alias($._attr_fragment_d, $.attribute_value),
            alias($._attr_brace_d, $.attribute_value),
            alias('$', $.attribute_value),
          ),
        ),
        '"',
      ),

    quoted_value_single: ($) =>
      seq(
        "'",
        repeat(
          choice(
            $.interpolation,
            $.template_variable,
            alias($._attr_fragment_s, $.attribute_value),
            alias($._attr_brace_s, $.attribute_value),
            alias('$', $.attribute_value),
          ),
        ),
        "'",
      ),

    _attr_fragment_d: ($) => token(prec(-1, /([^"${}]|\$[^{])+/)),
    _attr_fragment_s: ($) => token(prec(-1, /([^'${}]|\$[^{])+/)),

    unquoted_value: ($) => /[^\s"'=<>`]+/,

    // ---- Control-flow directives (n:for / n:if / n:key) ------------------

    directive_attribute: ($) =>
      seq($.directive_name, '=', $.directive_value),

    directive_name: ($) => token(prec(1, /n:[a-zA-Z][a-zA-Z0-9-]*/)),

    directive_value: ($) =>
      choice(
        seq('"', optional($.directive_expression), '"'),
        seq("'", optional($.directive_expression), "'"),
      ),

    directive_expression: ($) =>
      repeat1(
        choice(
          $.keyword_in,
          $.dir_array,
          $.dir_string,
          $.dir_number,
          $.dir_path,
          $.dir_op,
          $.template_variable,
        ),
      ),

    keyword_in: ($) => 'in',

    dir_array: ($) =>
      seq(
        '[',
        optional(
          seq($._dir_atom, repeat(seq(',', $._dir_atom))),
        ),
        ']',
      ),

    _dir_atom: ($) => choice($.dir_string, $.dir_number, $.dir_path),

    dir_string: ($) => /'[^']*'/,
    dir_number: ($) => /[0-9]+(\.[0-9]+)?/,
    dir_path: ($) =>
      seq($.dir_identifier, repeat(seq(token.immediate('.'), $.dir_identifier))),
    dir_identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,
    dir_op: ($) => token(choice('==', '!=', '>=', '<=', '>', '<', '&&', '||')),

    // ---- ${ ... } interpolation ------------------------------------------

    interpolation: ($) =>
      seq('${', repeat($._interp_item), '}'),

    _interp_item: ($) =>
      choice(
        $.interp_call,
        $.interp_path,
        $.interp_string,
        $.interp_number,
        $.interp_op,
      ),

    interp_call: ($) =>
      prec(
        1,
        seq(
          field('name', $.interp_path),
          token.immediate('('),
          optional(seq($._interp_item, repeat(seq(',', $._interp_item)))),
          ')',
        ),
      ),

    interp_path: ($) =>
      seq(
        $.interp_identifier,
        repeat(seq(token.immediate('.'), $.interp_identifier)),
      ),

    interp_identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,
    interp_string: ($) => choice(/'[^']*'/, /"[^"]*"/),
    interp_number: ($) => /[0-9]+(\.[0-9]+)?/,
    interp_op: ($) =>
      token(choice('==', '!=', '>=', '<=', '>', '<', '+', '-', '*', '/', ',', '&&', '||')),

    // ---- {{ var }} template variables ------------------------------------
    //
    // A top-level inline <script> `let`/`const` value interpolated by the
    // nemo runtime into attribute values and inline text bodies at load
    // time (whitespace-insensitive). One whole-match token, mirroring the
    // runtime's `{{ name }}` scan: the lexer only produces this node when a
    // closing `}}` follows, so an unclosed `{{` or an empty `{{ }}` fails
    // the match and degrades to the verbatim brace-text rule below instead
    // of erroring.

    template_variable: ($) =>
      token(prec(1, /\{\{\s*[a-zA-Z_][a-zA-Z0-9_]*\s*\}\}/)),

    // Bare brace runs that are not a `{{ name }}` variable: an unclosed
    // `{{`, an empty `{{ }}`, or lone `{`/`}` (JSON snippets, inline
    // examples). The nemo runtime leaves these verbatim, so they stay
    // plain text. Lexically below `template_variable` (prec 1) and `text`
    // (prec -1) so it only wins when neither matches.

    brace_text: ($) => token(prec(-2, /[{}][^<>${}]*/)),

    // Same, inside quoted attribute values: also stops at quotes so the
    // value's closing delimiter is never eaten. Aliased to attribute_value
    // in quoted_value_* below (the runtime interpolates attribute values
    // verbatim braces the same way).

    _attr_brace_d: ($) => token(prec(-2, /[{}][^"<>${}]*/)),
    _attr_brace_s: ($) => token(prec(-2, /[{}][^'<>${}]*/)),

    // ---- Text ------------------------------------------------------------

    text: ($) => token(prec(-1, /[^<${}\s][^<${}]*/)),
  },
});
