; Highlights for Nemo single-file components (.nemo)

; ---- Comments --------------------------------------------------------------

(comment) @comment @spell
(cdata) @comment

; ---- Tags ------------------------------------------------------------------

(tag_name) @tag

; App-level / structural tags render as builtins (this override comes after the
; generic @tag rule so it wins for these names).
((tag_name) @tag.builtin
 (#any-of? @tag.builtin
   "app" "window" "theme" "themes" "theme-set" "extend" "color"
   "header-bar" "menu-item" "template" "props" "prop" "slot"
   "style" "script" "imports" "import" "components" "variable"
   "data" "source" "sink" "plugin" "layout" "binding"
   "router" "route" "nav-link"))

[
  "<"
  ">"
  "</"
  "/>"
] @tag.delimiter

; ---- Attributes ------------------------------------------------------------

(attribute_name) @tag.attribute

; bind-<prop>, on-<event>, and n:<directive> are nemo-special attributes.
(binding_name) @attribute.builtin
(handler_name) @attribute.builtin
(directive_name) @attribute.builtin

"=" @punctuation.delimiter

; Attribute string values (fragments + surrounding quotes); ${...} inside is
; recaptured below.
(attribute_value) @string
(quoted_value_double "\"" @string)
(quoted_value_single "'" @string)
(unquoted_value) @string

; ---- Control-flow directive expressions (n:for / n:if / n:key) -------------

(directive_value ["\"" "'"] @punctuation.delimiter)
(keyword_in) @keyword.repeat
(dir_op) @operator
(dir_string) @string
(dir_number) @number
(dir_identifier) @variable
["[" "]"] @punctuation.bracket

; Leading path segment names a data scope.
(dir_path
  . (dir_identifier) @variable.builtin
  (#any-of? @variable.builtin "data" "var" "env" "route" "item" "loop"))

; ---- {{ var }} template variables ------------------------------------------
;
; A top-level inline <script> `let`/`const` value interpolated at load time.
; Single-token node, so recapture the name inside it.

(template_variable) @variable

; ---- ${ ... } interpolation ------------------------------------------------

[
  "${"
  "}"
] @punctuation.special

(interp_identifier) @variable
(interp_string) @string
(interp_number) @number
(interp_op) @operator

; Function calls: ${upper(var.name)}, ${env("HOME")}
(interp_call
  name: (interp_path (interp_identifier) @function))

((interp_call
   name: (interp_path (interp_identifier) @function.builtin))
 (#any-of? @function.builtin "upper" "lower" "trim" "length" "coalesce" "env"))

; Leading path segment names a data/interpolation scope.
(interp_path
  . (interp_identifier) @variable.builtin
  (#any-of? @variable.builtin "data" "var" "env" "route" "item" "loop"))
