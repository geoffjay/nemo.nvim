#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 143
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 78
#define ALIAS_COUNT 0
#define TOKEN_COUNT 39
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  sym_comment = 1,
  sym_cdata = 2,
  anon_sym_LT = 3,
  anon_sym_GT = 4,
  anon_sym_SLASH_GT = 5,
  anon_sym_LT_SLASH = 6,
  sym_tag_name = 7,
  anon_sym_script = 8,
  anon_sym_style = 9,
  anon_sym_EQ = 10,
  sym_binding_name = 11,
  sym_handler_name = 12,
  sym_attribute_name = 13,
  anon_sym_DQUOTE = 14,
  anon_sym_DOLLAR = 15,
  anon_sym_SQUOTE = 16,
  sym__attr_fragment_d = 17,
  sym__attr_fragment_s = 18,
  sym_unquoted_value = 19,
  sym_directive_name = 20,
  sym_keyword_in = 21,
  anon_sym_LBRACK = 22,
  anon_sym_COMMA = 23,
  anon_sym_RBRACK = 24,
  aux_sym_dir_string_token1 = 25,
  aux_sym_dir_number_token1 = 26,
  anon_sym_DOT = 27,
  aux_sym_dir_identifier_token1 = 28,
  sym_dir_op = 29,
  anon_sym_DOLLAR_LBRACE = 30,
  anon_sym_RBRACE = 31,
  anon_sym_LPAREN = 32,
  anon_sym_RPAREN = 33,
  aux_sym_interp_string_token1 = 34,
  sym_interp_op = 35,
  sym_text = 36,
  sym__raw_text_script = 37,
  sym__raw_text_style = 38,
  sym_document = 39,
  sym__node = 40,
  sym_element = 41,
  sym_start_tag = 42,
  sym_self_closing_tag = 43,
  sym_end_tag = 44,
  sym_script_element = 45,
  sym_style_element = 46,
  sym_attribute = 47,
  sym_regular_attribute = 48,
  sym__attribute_value = 49,
  sym_quoted_value_double = 50,
  sym_quoted_value_single = 51,
  sym_directive_attribute = 52,
  sym_directive_value = 53,
  sym_directive_expression = 54,
  sym_dir_array = 55,
  sym__dir_atom = 56,
  sym_dir_string = 57,
  sym_dir_number = 58,
  sym_dir_path = 59,
  sym_dir_identifier = 60,
  sym_interpolation = 61,
  sym__interp_item = 62,
  sym_interp_call = 63,
  sym_interp_path = 64,
  sym_interp_identifier = 65,
  sym_interp_string = 66,
  sym_interp_number = 67,
  aux_sym_document_repeat1 = 68,
  aux_sym_start_tag_repeat1 = 69,
  aux_sym_quoted_value_double_repeat1 = 70,
  aux_sym_quoted_value_single_repeat1 = 71,
  aux_sym_directive_expression_repeat1 = 72,
  aux_sym_dir_array_repeat1 = 73,
  aux_sym_dir_path_repeat1 = 74,
  aux_sym_interpolation_repeat1 = 75,
  aux_sym_interp_call_repeat1 = 76,
  aux_sym_interp_path_repeat1 = 77,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym_cdata] = "cdata",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_LT_SLASH] = "</",
  [sym_tag_name] = "tag_name",
  [anon_sym_script] = "tag_name",
  [anon_sym_style] = "tag_name",
  [anon_sym_EQ] = "=",
  [sym_binding_name] = "binding_name",
  [sym_handler_name] = "handler_name",
  [sym_attribute_name] = "attribute_name",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_DOLLAR] = "attribute_value",
  [anon_sym_SQUOTE] = "'",
  [sym__attr_fragment_d] = "attribute_value",
  [sym__attr_fragment_s] = "attribute_value",
  [sym_unquoted_value] = "unquoted_value",
  [sym_directive_name] = "directive_name",
  [sym_keyword_in] = "keyword_in",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [aux_sym_dir_string_token1] = "dir_string_token1",
  [aux_sym_dir_number_token1] = "dir_number_token1",
  [anon_sym_DOT] = ".",
  [aux_sym_dir_identifier_token1] = "dir_identifier_token1",
  [sym_dir_op] = "dir_op",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_interp_string_token1] = "interp_string_token1",
  [sym_interp_op] = "interp_op",
  [sym_text] = "text",
  [sym__raw_text_script] = "raw_text",
  [sym__raw_text_style] = "raw_text",
  [sym_document] = "document",
  [sym__node] = "_node",
  [sym_element] = "element",
  [sym_start_tag] = "start_tag",
  [sym_self_closing_tag] = "self_closing_tag",
  [sym_end_tag] = "end_tag",
  [sym_script_element] = "script_element",
  [sym_style_element] = "style_element",
  [sym_attribute] = "attribute",
  [sym_regular_attribute] = "regular_attribute",
  [sym__attribute_value] = "_attribute_value",
  [sym_quoted_value_double] = "quoted_value_double",
  [sym_quoted_value_single] = "quoted_value_single",
  [sym_directive_attribute] = "directive_attribute",
  [sym_directive_value] = "directive_value",
  [sym_directive_expression] = "directive_expression",
  [sym_dir_array] = "dir_array",
  [sym__dir_atom] = "_dir_atom",
  [sym_dir_string] = "dir_string",
  [sym_dir_number] = "dir_number",
  [sym_dir_path] = "dir_path",
  [sym_dir_identifier] = "dir_identifier",
  [sym_interpolation] = "interpolation",
  [sym__interp_item] = "_interp_item",
  [sym_interp_call] = "interp_call",
  [sym_interp_path] = "interp_path",
  [sym_interp_identifier] = "interp_identifier",
  [sym_interp_string] = "interp_string",
  [sym_interp_number] = "interp_number",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_start_tag_repeat1] = "start_tag_repeat1",
  [aux_sym_quoted_value_double_repeat1] = "quoted_value_double_repeat1",
  [aux_sym_quoted_value_single_repeat1] = "quoted_value_single_repeat1",
  [aux_sym_directive_expression_repeat1] = "directive_expression_repeat1",
  [aux_sym_dir_array_repeat1] = "dir_array_repeat1",
  [aux_sym_dir_path_repeat1] = "dir_path_repeat1",
  [aux_sym_interpolation_repeat1] = "interpolation_repeat1",
  [aux_sym_interp_call_repeat1] = "interp_call_repeat1",
  [aux_sym_interp_path_repeat1] = "interp_path_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [sym_cdata] = sym_cdata,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [sym_tag_name] = sym_tag_name,
  [anon_sym_script] = sym_tag_name,
  [anon_sym_style] = sym_tag_name,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_binding_name] = sym_binding_name,
  [sym_handler_name] = sym_handler_name,
  [sym_attribute_name] = sym_attribute_name,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym__attr_fragment_d] = anon_sym_DOLLAR,
  [sym__attr_fragment_s] = anon_sym_DOLLAR,
  [sym_unquoted_value] = sym_unquoted_value,
  [sym_directive_name] = sym_directive_name,
  [sym_keyword_in] = sym_keyword_in,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_dir_string_token1] = aux_sym_dir_string_token1,
  [aux_sym_dir_number_token1] = aux_sym_dir_number_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_dir_identifier_token1] = aux_sym_dir_identifier_token1,
  [sym_dir_op] = sym_dir_op,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_interp_string_token1] = aux_sym_interp_string_token1,
  [sym_interp_op] = sym_interp_op,
  [sym_text] = sym_text,
  [sym__raw_text_script] = sym__raw_text_script,
  [sym__raw_text_style] = sym__raw_text_script,
  [sym_document] = sym_document,
  [sym__node] = sym__node,
  [sym_element] = sym_element,
  [sym_start_tag] = sym_start_tag,
  [sym_self_closing_tag] = sym_self_closing_tag,
  [sym_end_tag] = sym_end_tag,
  [sym_script_element] = sym_script_element,
  [sym_style_element] = sym_style_element,
  [sym_attribute] = sym_attribute,
  [sym_regular_attribute] = sym_regular_attribute,
  [sym__attribute_value] = sym__attribute_value,
  [sym_quoted_value_double] = sym_quoted_value_double,
  [sym_quoted_value_single] = sym_quoted_value_single,
  [sym_directive_attribute] = sym_directive_attribute,
  [sym_directive_value] = sym_directive_value,
  [sym_directive_expression] = sym_directive_expression,
  [sym_dir_array] = sym_dir_array,
  [sym__dir_atom] = sym__dir_atom,
  [sym_dir_string] = sym_dir_string,
  [sym_dir_number] = sym_dir_number,
  [sym_dir_path] = sym_dir_path,
  [sym_dir_identifier] = sym_dir_identifier,
  [sym_interpolation] = sym_interpolation,
  [sym__interp_item] = sym__interp_item,
  [sym_interp_call] = sym_interp_call,
  [sym_interp_path] = sym_interp_path,
  [sym_interp_identifier] = sym_interp_identifier,
  [sym_interp_string] = sym_interp_string,
  [sym_interp_number] = sym_interp_number,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_start_tag_repeat1] = aux_sym_start_tag_repeat1,
  [aux_sym_quoted_value_double_repeat1] = aux_sym_quoted_value_double_repeat1,
  [aux_sym_quoted_value_single_repeat1] = aux_sym_quoted_value_single_repeat1,
  [aux_sym_directive_expression_repeat1] = aux_sym_directive_expression_repeat1,
  [aux_sym_dir_array_repeat1] = aux_sym_dir_array_repeat1,
  [aux_sym_dir_path_repeat1] = aux_sym_dir_path_repeat1,
  [aux_sym_interpolation_repeat1] = aux_sym_interpolation_repeat1,
  [aux_sym_interp_call_repeat1] = aux_sym_interp_call_repeat1,
  [aux_sym_interp_path_repeat1] = aux_sym_interp_path_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_cdata] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_tag_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_script] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_style] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_binding_name] = {
    .visible = true,
    .named = true,
  },
  [sym_handler_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__attr_fragment_d] = {
    .visible = true,
    .named = true,
  },
  [sym__attr_fragment_s] = {
    .visible = true,
    .named = true,
  },
  [sym_unquoted_value] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_name] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_in] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_dir_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dir_number_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_dir_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_dir_op] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_interp_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_interp_op] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym__raw_text_script] = {
    .visible = true,
    .named = true,
  },
  [sym__raw_text_style] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_element] = {
    .visible = true,
    .named = true,
  },
  [sym_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_self_closing_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_script_element] = {
    .visible = true,
    .named = true,
  },
  [sym_style_element] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_regular_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__attribute_value] = {
    .visible = false,
    .named = true,
  },
  [sym_quoted_value_double] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_value_single] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_value] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_dir_array] = {
    .visible = true,
    .named = true,
  },
  [sym__dir_atom] = {
    .visible = false,
    .named = true,
  },
  [sym_dir_string] = {
    .visible = true,
    .named = true,
  },
  [sym_dir_number] = {
    .visible = true,
    .named = true,
  },
  [sym_dir_path] = {
    .visible = true,
    .named = true,
  },
  [sym_dir_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym__interp_item] = {
    .visible = false,
    .named = true,
  },
  [sym_interp_call] = {
    .visible = true,
    .named = true,
  },
  [sym_interp_path] = {
    .visible = true,
    .named = true,
  },
  [sym_interp_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_interp_string] = {
    .visible = true,
    .named = true,
  },
  [sym_interp_number] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_start_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_value_double_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_value_single_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dir_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dir_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interpolation_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interp_call_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interp_path_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_name = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 10,
  [12] = 12,
  [13] = 13,
  [14] = 12,
  [15] = 12,
  [16] = 10,
  [17] = 17,
  [18] = 18,
  [19] = 18,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 37,
  [88] = 34,
  [89] = 36,
  [90] = 39,
  [91] = 60,
  [92] = 38,
  [93] = 63,
  [94] = 60,
  [95] = 63,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 49,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 97,
  [105] = 105,
  [106] = 105,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 72,
  [112] = 73,
  [113] = 113,
  [114] = 109,
  [115] = 81,
  [116] = 116,
  [117] = 65,
  [118] = 74,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(50);
      ADVANCE_MAP(
        '"', 83,
        '$', 84,
        '\'', 85,
        '(', 109,
        ')', 110,
        ',', 96,
        '.', 102,
        '<', 53,
        '=', 70,
        '>', 54,
        '[', 95,
        ']', 97,
        'i', 119,
        'n', 114,
        's', 115,
        '}', 108,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(126);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '!', 17,
        '"', 83,
        '&', 10,
        '\'', 86,
        '(', 109,
        ')', 110,
        ',', 96,
        '.', 102,
        '<', 106,
        '=', 17,
        '>', 106,
        '[', 95,
        ']', 97,
        'i', 103,
        '|', 41,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '!', 17,
        '"', 83,
        '&', 10,
        '\'', 86,
        ')', 110,
        ',', 96,
        '<', 106,
        '=', 17,
        '>', 106,
        '[', 95,
        ']', 97,
        'i', 103,
        '|', 41,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '!', 18,
        '"', 8,
        '&', 11,
        '\'', 12,
        '(', 109,
        ')', 110,
        '.', 102,
        '<', 113,
        '=', 18,
        '>', 113,
        ']', 97,
        '|', 42,
        '}', 108,
      );
      if (('*' <= lookahead && lookahead <= '/')) ADVANCE(112);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '!', 18,
        '"', 8,
        '&', 11,
        '\'', 12,
        ')', 110,
        '<', 113,
        '=', 18,
        '>', 113,
        ']', 97,
        '|', 42,
        '}', 108,
      );
      if (('*' <= lookahead && lookahead <= '-') ||
          lookahead == '/') ADVANCE(112);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(83);
      if (lookahead == '$') ADVANCE(84);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '"', 83,
        '\'', 85,
        '/', 21,
        '=', 70,
        '>', 54,
        'b', 77,
        'n', 75,
        'o', 78,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(83);
      if (lookahead == '\'') ADVANCE(85);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '`') ADVANCE(91);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(111);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '$') ADVANCE(84);
      if (lookahead == '\'') ADVANCE(85);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 10:
      if (lookahead == '&') ADVANCE(105);
      END_STATE();
    case 11:
      if (lookahead == '&') ADVANCE(112);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(98);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '[') ADVANCE(24);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(19);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(15);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(105);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(112);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(51);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(52);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(55);
      END_STATE();
    case 22:
      if (lookahead == 'A') ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == 'A') ADVANCE(27);
      END_STATE();
    case 24:
      if (lookahead == 'C') ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 'D') ADVANCE(22);
      END_STATE();
    case 26:
      if (lookahead == 'T') ADVANCE(23);
      END_STATE();
    case 27:
      if (lookahead == '[') ADVANCE(29);
      END_STATE();
    case 28:
      if (lookahead == ']') ADVANCE(20);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == ']') ADVANCE(28);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(35);
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 34:
      if (lookahead == 'p') ADVANCE(38);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(57);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 37:
      if (lookahead == 's') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(37);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 39:
      if (lookahead == 'y') ADVANCE(33);
      END_STATE();
    case 40:
      if (lookahead == '{') ADVANCE(107);
      END_STATE();
    case 41:
      if (lookahead == '|') ADVANCE(105);
      END_STATE();
    case 42:
      if (lookahead == '|') ADVANCE(112);
      END_STATE();
    case 43:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 45:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 46:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(88);
      END_STATE();
    case 47:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(90);
      END_STATE();
    case 48:
      if (eof) ADVANCE(50);
      ADVANCE_MAP(
        '"', 83,
        '$', 84,
        '\'', 85,
        ')', 110,
        ',', 96,
        '<', 53,
        '=', 70,
        '>', 54,
        '[', 95,
        ']', 97,
        'i', 119,
        'n', 114,
        's', 115,
        '}', 108,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(126);
      END_STATE();
    case 49:
      if (eof) ADVANCE(50);
      if (lookahead == '$') ADVANCE(40);
      if (lookahead == '<') ADVANCE(53);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(49);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(126);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_cdata);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(13);
      if (lookahead == '/') ADVANCE(56);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(62);
      if (lookahead == 't') ADVANCE(64);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(69);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(61);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(58);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(63);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(59);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(67);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(60);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_script);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_style);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_style);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_binding_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_handler_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-') ADVANCE(80);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-') ADVANCE(81);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'd') ADVANCE(74);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'n') ADVANCE(73);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'n') ADVANCE(76);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{') ADVANCE(107);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(98);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__attr_fragment_d);
      if (lookahead == '"') ADVANCE(83);
      if (lookahead == '$') ADVANCE(84);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__attr_fragment_d);
      if (lookahead == '$') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__attr_fragment_s);
      if (lookahead == '$') ADVANCE(84);
      if (lookahead == '\'') ADVANCE(85);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__attr_fragment_s);
      if (lookahead == '$') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_unquoted_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '`') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_directive_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_keyword_in);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_keyword_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_dir_string_token1);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_dir_number_token1);
      if (lookahead == '.') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_dir_number_token1);
      if (lookahead == '.') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_dir_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_dir_identifier_token1);
      if (lookahead == 'n') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_dir_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_dir_op);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_dir_op);
      if (lookahead == '=') ADVANCE(105);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_interp_string_token1);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_interp_op);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_interp_op);
      if (lookahead == '=') ADVANCE(112);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '<' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(126);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(121);
      if (lookahead == 't') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '<' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(126);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '<' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(126);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '<' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(126);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '<' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(126);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '<' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(126);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '<' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(126);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '<' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(126);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '<' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(126);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'y') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '<' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(126);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '<' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(126);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_text);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '<' &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '<' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(126);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 49},
  [2] = {.lex_state = 49},
  [3] = {.lex_state = 49},
  [4] = {.lex_state = 49},
  [5] = {.lex_state = 49},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 49},
  [46] = {.lex_state = 49},
  [47] = {.lex_state = 49},
  [48] = {.lex_state = 49},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 49},
  [51] = {.lex_state = 49},
  [52] = {.lex_state = 49},
  [53] = {.lex_state = 49},
  [54] = {.lex_state = 49},
  [55] = {.lex_state = 49},
  [56] = {.lex_state = 49},
  [57] = {.lex_state = 49},
  [58] = {.lex_state = 49},
  [59] = {.lex_state = 49},
  [60] = {.lex_state = 49},
  [61] = {.lex_state = 49},
  [62] = {.lex_state = 49},
  [63] = {.lex_state = 49},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 9},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 49},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 9},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 49},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 9},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 9},
  [95] = {.lex_state = 9},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 36},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 0, .external_lex_state = 2},
  [108] = {.lex_state = 0, .external_lex_state = 2},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 0, .external_lex_state = 3},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 0, .external_lex_state = 3},
  [121] = {.lex_state = 6},
  [122] = {.lex_state = 6},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 6},
  [125] = {.lex_state = 37},
  [126] = {.lex_state = 43},
  [127] = {.lex_state = 6},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 6},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 6},
  [132] = {.lex_state = 37},
  [133] = {.lex_state = 37},
  [134] = {.lex_state = 6},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 37},
  [138] = {.lex_state = 6},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 37},
  [141] = {.lex_state = 6},
  [142] = {.lex_state = 37},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_cdata] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_script] = ACTIONS(1),
    [anon_sym_style] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_directive_name] = ACTIONS(1),
    [sym_keyword_in] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_dir_number_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_text] = ACTIONS(1),
    [sym__raw_text_script] = ACTIONS(1),
    [sym__raw_text_style] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(135),
    [sym__node] = STATE(5),
    [sym_element] = STATE(5),
    [sym_start_tag] = STATE(4),
    [sym_self_closing_tag] = STATE(58),
    [sym_script_element] = STATE(5),
    [sym_style_element] = STATE(5),
    [sym_interpolation] = STATE(5),
    [aux_sym_document_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_cdata] = ACTIONS(5),
    [anon_sym_LT] = ACTIONS(7),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(9),
    [sym_text] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(16), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(4), 1,
      sym_start_tag,
    STATE(58), 1,
      sym_self_closing_tag,
    ACTIONS(11), 2,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
    ACTIONS(13), 3,
      sym_comment,
      sym_cdata,
      sym_text,
    STATE(2), 6,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_interpolation,
      aux_sym_document_repeat1,
  [30] = 8,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(24), 1,
      anon_sym_LT_SLASH,
    STATE(4), 1,
      sym_start_tag,
    STATE(45), 1,
      sym_end_tag,
    STATE(58), 1,
      sym_self_closing_tag,
    ACTIONS(22), 3,
      sym_comment,
      sym_cdata,
      sym_text,
    STATE(2), 6,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_interpolation,
      aux_sym_document_repeat1,
  [62] = 8,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(24), 1,
      anon_sym_LT_SLASH,
    STATE(4), 1,
      sym_start_tag,
    STATE(58), 1,
      sym_self_closing_tag,
    STATE(61), 1,
      sym_end_tag,
    ACTIONS(26), 3,
      sym_comment,
      sym_cdata,
      sym_text,
    STATE(3), 6,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_interpolation,
      aux_sym_document_repeat1,
  [94] = 7,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_start_tag,
    STATE(58), 1,
      sym_self_closing_tag,
    ACTIONS(22), 3,
      sym_comment,
      sym_cdata,
      sym_text,
    STATE(2), 6,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_interpolation,
      aux_sym_document_repeat1,
  [123] = 10,
    ACTIONS(30), 1,
      anon_sym_SQUOTE,
    ACTIONS(32), 1,
      sym_keyword_in,
    ACTIONS(34), 1,
      anon_sym_LBRACK,
    ACTIONS(36), 1,
      aux_sym_dir_string_token1,
    ACTIONS(38), 1,
      aux_sym_dir_number_token1,
    ACTIONS(40), 1,
      aux_sym_dir_identifier_token1,
    ACTIONS(42), 1,
      sym_dir_op,
    STATE(17), 1,
      sym_dir_identifier,
    STATE(129), 1,
      sym_directive_expression,
    STATE(8), 5,
      sym_dir_array,
      sym_dir_string,
      sym_dir_number,
      sym_dir_path,
      aux_sym_directive_expression_repeat1,
  [158] = 10,
    ACTIONS(32), 1,
      sym_keyword_in,
    ACTIONS(34), 1,
      anon_sym_LBRACK,
    ACTIONS(36), 1,
      aux_sym_dir_string_token1,
    ACTIONS(38), 1,
      aux_sym_dir_number_token1,
    ACTIONS(40), 1,
      aux_sym_dir_identifier_token1,
    ACTIONS(42), 1,
      sym_dir_op,
    ACTIONS(44), 1,
      anon_sym_DQUOTE,
    STATE(17), 1,
      sym_dir_identifier,
    STATE(130), 1,
      sym_directive_expression,
    STATE(8), 5,
      sym_dir_array,
      sym_dir_string,
      sym_dir_number,
      sym_dir_path,
      aux_sym_directive_expression_repeat1,
  [193] = 10,
    ACTIONS(34), 1,
      anon_sym_LBRACK,
    ACTIONS(36), 1,
      aux_sym_dir_string_token1,
    ACTIONS(38), 1,
      aux_sym_dir_number_token1,
    ACTIONS(40), 1,
      aux_sym_dir_identifier_token1,
    ACTIONS(46), 1,
      anon_sym_DQUOTE,
    ACTIONS(48), 1,
      anon_sym_SQUOTE,
    ACTIONS(50), 1,
      sym_keyword_in,
    ACTIONS(52), 1,
      sym_dir_op,
    STATE(17), 1,
      sym_dir_identifier,
    STATE(9), 5,
      sym_dir_array,
      sym_dir_string,
      sym_dir_number,
      sym_dir_path,
      aux_sym_directive_expression_repeat1,
  [228] = 10,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    ACTIONS(56), 1,
      anon_sym_SQUOTE,
    ACTIONS(58), 1,
      sym_keyword_in,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(64), 1,
      aux_sym_dir_string_token1,
    ACTIONS(67), 1,
      aux_sym_dir_number_token1,
    ACTIONS(70), 1,
      aux_sym_dir_identifier_token1,
    ACTIONS(73), 1,
      sym_dir_op,
    STATE(17), 1,
      sym_dir_identifier,
    STATE(9), 5,
      sym_dir_array,
      sym_dir_string,
      sym_dir_number,
      sym_dir_path,
      aux_sym_directive_expression_repeat1,
  [263] = 8,
    ACTIONS(78), 1,
      aux_sym_dir_number_token1,
    ACTIONS(80), 1,
      aux_sym_dir_identifier_token1,
    ACTIONS(82), 1,
      anon_sym_RBRACE,
    ACTIONS(84), 1,
      sym_interp_op,
    STATE(37), 1,
      sym_interp_identifier,
    STATE(49), 1,
      sym_interp_path,
    ACTIONS(76), 2,
      aux_sym_dir_string_token1,
      aux_sym_interp_string_token1,
    STATE(13), 5,
      sym__interp_item,
      sym_interp_call,
      sym_interp_string,
      sym_interp_number,
      aux_sym_interpolation_repeat1,
  [293] = 8,
    ACTIONS(78), 1,
      aux_sym_dir_number_token1,
    ACTIONS(80), 1,
      aux_sym_dir_identifier_token1,
    ACTIONS(84), 1,
      sym_interp_op,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      sym_interp_identifier,
    STATE(49), 1,
      sym_interp_path,
    ACTIONS(76), 2,
      aux_sym_dir_string_token1,
      aux_sym_interp_string_token1,
    STATE(13), 5,
      sym__interp_item,
      sym_interp_call,
      sym_interp_string,
      sym_interp_number,
      aux_sym_interpolation_repeat1,
  [323] = 8,
    ACTIONS(78), 1,
      aux_sym_dir_number_token1,
    ACTIONS(80), 1,
      aux_sym_dir_identifier_token1,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    ACTIONS(90), 1,
      sym_interp_op,
    STATE(37), 1,
      sym_interp_identifier,
    STATE(49), 1,
      sym_interp_path,
    ACTIONS(76), 2,
      aux_sym_dir_string_token1,
      aux_sym_interp_string_token1,
    STATE(10), 5,
      sym__interp_item,
      sym_interp_call,
      sym_interp_string,
      sym_interp_number,
      aux_sym_interpolation_repeat1,
  [353] = 8,
    ACTIONS(95), 1,
      aux_sym_dir_number_token1,
    ACTIONS(98), 1,
      aux_sym_dir_identifier_token1,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    ACTIONS(103), 1,
      sym_interp_op,
    STATE(37), 1,
      sym_interp_identifier,
    STATE(49), 1,
      sym_interp_path,
    ACTIONS(92), 2,
      aux_sym_dir_string_token1,
      aux_sym_interp_string_token1,
    STATE(13), 5,
      sym__interp_item,
      sym_interp_call,
      sym_interp_string,
      sym_interp_number,
      aux_sym_interpolation_repeat1,
  [383] = 8,
    ACTIONS(78), 1,
      aux_sym_dir_number_token1,
    ACTIONS(80), 1,
      aux_sym_dir_identifier_token1,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
    ACTIONS(108), 1,
      sym_interp_op,
    STATE(37), 1,
      sym_interp_identifier,
    STATE(49), 1,
      sym_interp_path,
    ACTIONS(76), 2,
      aux_sym_dir_string_token1,
      aux_sym_interp_string_token1,
    STATE(11), 5,
      sym__interp_item,
      sym_interp_call,
      sym_interp_string,
      sym_interp_number,
      aux_sym_interpolation_repeat1,
  [413] = 8,
    ACTIONS(78), 1,
      aux_sym_dir_number_token1,
    ACTIONS(80), 1,
      aux_sym_dir_identifier_token1,
    ACTIONS(110), 1,
      anon_sym_RBRACE,
    ACTIONS(112), 1,
      sym_interp_op,
    STATE(37), 1,
      sym_interp_identifier,
    STATE(49), 1,
      sym_interp_path,
    ACTIONS(76), 2,
      aux_sym_dir_string_token1,
      aux_sym_interp_string_token1,
    STATE(16), 5,
      sym__interp_item,
      sym_interp_call,
      sym_interp_string,
      sym_interp_number,
      aux_sym_interpolation_repeat1,
  [443] = 8,
    ACTIONS(78), 1,
      aux_sym_dir_number_token1,
    ACTIONS(80), 1,
      aux_sym_dir_identifier_token1,
    ACTIONS(84), 1,
      sym_interp_op,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      sym_interp_identifier,
    STATE(49), 1,
      sym_interp_path,
    ACTIONS(76), 2,
      aux_sym_dir_string_token1,
      aux_sym_interp_string_token1,
    STATE(13), 5,
      sym__interp_item,
      sym_interp_call,
      sym_interp_string,
      sym_interp_number,
      aux_sym_interpolation_repeat1,
  [473] = 4,
    ACTIONS(120), 1,
      anon_sym_DOT,
    STATE(20), 1,
      aux_sym_dir_path_repeat1,
    ACTIONS(118), 3,
      anon_sym_SQUOTE,
      sym_keyword_in,
      aux_sym_dir_identifier_token1,
    ACTIONS(116), 7,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_dir_string_token1,
      aux_sym_dir_number_token1,
      sym_dir_op,
  [494] = 8,
    ACTIONS(124), 1,
      aux_sym_dir_number_token1,
    ACTIONS(126), 1,
      aux_sym_dir_identifier_token1,
    ACTIONS(128), 1,
      anon_sym_RPAREN,
    ACTIONS(130), 1,
      sym_interp_op,
    STATE(87), 1,
      sym_interp_identifier,
    STATE(100), 1,
      sym_interp_path,
    ACTIONS(122), 2,
      aux_sym_dir_string_token1,
      aux_sym_interp_string_token1,
    STATE(97), 4,
      sym__interp_item,
      sym_interp_call,
      sym_interp_string,
      sym_interp_number,
  [523] = 8,
    ACTIONS(124), 1,
      aux_sym_dir_number_token1,
    ACTIONS(126), 1,
      aux_sym_dir_identifier_token1,
    ACTIONS(132), 1,
      anon_sym_RPAREN,
    ACTIONS(134), 1,
      sym_interp_op,
    STATE(87), 1,
      sym_interp_identifier,
    STATE(100), 1,
      sym_interp_path,
    ACTIONS(122), 2,
      aux_sym_dir_string_token1,
      aux_sym_interp_string_token1,
    STATE(104), 4,
      sym__interp_item,
      sym_interp_call,
      sym_interp_string,
      sym_interp_number,
  [552] = 4,
    ACTIONS(120), 1,
      anon_sym_DOT,
    STATE(21), 1,
      aux_sym_dir_path_repeat1,
    ACTIONS(138), 3,
      anon_sym_SQUOTE,
      sym_keyword_in,
      aux_sym_dir_identifier_token1,
    ACTIONS(136), 7,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_dir_string_token1,
      aux_sym_dir_number_token1,
      sym_dir_op,
  [573] = 4,
    ACTIONS(144), 1,
      anon_sym_DOT,
    STATE(21), 1,
      aux_sym_dir_path_repeat1,
    ACTIONS(142), 3,
      anon_sym_SQUOTE,
      sym_keyword_in,
      aux_sym_dir_identifier_token1,
    ACTIONS(140), 7,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_dir_string_token1,
      aux_sym_dir_number_token1,
      sym_dir_op,
  [594] = 2,
    ACTIONS(142), 3,
      anon_sym_SQUOTE,
      sym_keyword_in,
      aux_sym_dir_identifier_token1,
    ACTIONS(140), 8,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_dir_string_token1,
      aux_sym_dir_number_token1,
      anon_sym_DOT,
      sym_dir_op,
  [610] = 7,
    ACTIONS(124), 1,
      aux_sym_dir_number_token1,
    ACTIONS(126), 1,
      aux_sym_dir_identifier_token1,
    ACTIONS(147), 1,
      sym_interp_op,
    STATE(87), 1,
      sym_interp_identifier,
    STATE(100), 1,
      sym_interp_path,
    ACTIONS(122), 2,
      aux_sym_dir_string_token1,
      aux_sym_interp_string_token1,
    STATE(113), 4,
      sym__interp_item,
      sym_interp_call,
      sym_interp_string,
      sym_interp_number,
  [636] = 2,
    ACTIONS(151), 3,
      anon_sym_SQUOTE,
      sym_keyword_in,
      aux_sym_dir_identifier_token1,
    ACTIONS(149), 8,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_dir_string_token1,
      aux_sym_dir_number_token1,
      anon_sym_DOT,
      sym_dir_op,
  [652] = 7,
    ACTIONS(153), 1,
      anon_sym_GT,
    ACTIONS(155), 1,
      anon_sym_SLASH_GT,
    ACTIONS(159), 1,
      sym_attribute_name,
    ACTIONS(161), 1,
      sym_directive_name,
    ACTIONS(157), 2,
      sym_binding_name,
      sym_handler_name,
    STATE(32), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
    STATE(85), 2,
      sym_regular_attribute,
      sym_directive_attribute,
  [677] = 7,
    ACTIONS(159), 1,
      sym_attribute_name,
    ACTIONS(161), 1,
      sym_directive_name,
    ACTIONS(163), 1,
      anon_sym_GT,
    ACTIONS(165), 1,
      anon_sym_SLASH_GT,
    ACTIONS(157), 2,
      sym_binding_name,
      sym_handler_name,
    STATE(33), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
    STATE(85), 2,
      sym_regular_attribute,
      sym_directive_attribute,
  [702] = 6,
    ACTIONS(172), 1,
      sym_attribute_name,
    ACTIONS(175), 1,
      sym_directive_name,
    ACTIONS(167), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    ACTIONS(169), 2,
      sym_binding_name,
      sym_handler_name,
    STATE(27), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
    STATE(85), 2,
      sym_regular_attribute,
      sym_directive_attribute,
  [725] = 7,
    ACTIONS(159), 1,
      sym_attribute_name,
    ACTIONS(161), 1,
      sym_directive_name,
    ACTIONS(178), 1,
      anon_sym_GT,
    ACTIONS(180), 1,
      anon_sym_SLASH_GT,
    ACTIONS(157), 2,
      sym_binding_name,
      sym_handler_name,
    STATE(31), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
    STATE(85), 2,
      sym_regular_attribute,
      sym_directive_attribute,
  [750] = 2,
    ACTIONS(184), 3,
      anon_sym_SQUOTE,
      sym_keyword_in,
      aux_sym_dir_identifier_token1,
    ACTIONS(182), 7,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_dir_string_token1,
      aux_sym_dir_number_token1,
      sym_dir_op,
  [765] = 2,
    ACTIONS(188), 3,
      anon_sym_SQUOTE,
      sym_keyword_in,
      aux_sym_dir_identifier_token1,
    ACTIONS(186), 7,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_dir_string_token1,
      aux_sym_dir_number_token1,
      sym_dir_op,
  [780] = 7,
    ACTIONS(159), 1,
      sym_attribute_name,
    ACTIONS(161), 1,
      sym_directive_name,
    ACTIONS(190), 1,
      anon_sym_GT,
    ACTIONS(192), 1,
      anon_sym_SLASH_GT,
    ACTIONS(157), 2,
      sym_binding_name,
      sym_handler_name,
    STATE(27), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
    STATE(85), 2,
      sym_regular_attribute,
      sym_directive_attribute,
  [805] = 7,
    ACTIONS(159), 1,
      sym_attribute_name,
    ACTIONS(161), 1,
      sym_directive_name,
    ACTIONS(194), 1,
      anon_sym_GT,
    ACTIONS(196), 1,
      anon_sym_SLASH_GT,
    ACTIONS(157), 2,
      sym_binding_name,
      sym_handler_name,
    STATE(27), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
    STATE(85), 2,
      sym_regular_attribute,
      sym_directive_attribute,
  [830] = 7,
    ACTIONS(159), 1,
      sym_attribute_name,
    ACTIONS(161), 1,
      sym_directive_name,
    ACTIONS(198), 1,
      anon_sym_GT,
    ACTIONS(200), 1,
      anon_sym_SLASH_GT,
    ACTIONS(157), 2,
      sym_binding_name,
      sym_handler_name,
    STATE(27), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
    STATE(85), 2,
      sym_regular_attribute,
      sym_directive_attribute,
  [855] = 3,
    ACTIONS(204), 1,
      anon_sym_DOT,
    STATE(36), 1,
      aux_sym_interp_path_repeat1,
    ACTIONS(202), 7,
      aux_sym_dir_string_token1,
      aux_sym_dir_number_token1,
      aux_sym_dir_identifier_token1,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_interp_string_token1,
      sym_interp_op,
  [871] = 6,
    ACTIONS(36), 1,
      aux_sym_dir_string_token1,
    ACTIONS(38), 1,
      aux_sym_dir_number_token1,
    ACTIONS(206), 1,
      anon_sym_RBRACK,
    ACTIONS(208), 1,
      aux_sym_dir_identifier_token1,
    STATE(17), 1,
      sym_dir_identifier,
    STATE(98), 4,
      sym__dir_atom,
      sym_dir_string,
      sym_dir_number,
      sym_dir_path,
  [893] = 3,
    ACTIONS(212), 1,
      anon_sym_DOT,
    STATE(36), 1,
      aux_sym_interp_path_repeat1,
    ACTIONS(210), 7,
      aux_sym_dir_string_token1,
      aux_sym_dir_number_token1,
      aux_sym_dir_identifier_token1,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_interp_string_token1,
      sym_interp_op,
  [909] = 3,
    ACTIONS(204), 1,
      anon_sym_DOT,
    STATE(34), 1,
      aux_sym_interp_path_repeat1,
    ACTIONS(215), 7,
      aux_sym_dir_string_token1,
      aux_sym_dir_number_token1,
      aux_sym_dir_identifier_token1,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_interp_string_token1,
      sym_interp_op,
  [925] = 1,
    ACTIONS(210), 8,
      aux_sym_dir_string_token1,
      aux_sym_dir_number_token1,
      anon_sym_DOT,
      aux_sym_dir_identifier_token1,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_interp_string_token1,
      sym_interp_op,
  [936] = 1,
    ACTIONS(217), 8,
      aux_sym_dir_string_token1,
      aux_sym_dir_number_token1,
      anon_sym_DOT,
      aux_sym_dir_identifier_token1,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_interp_string_token1,
      sym_interp_op,
  [947] = 5,
    ACTIONS(36), 1,
      aux_sym_dir_string_token1,
    ACTIONS(38), 1,
      aux_sym_dir_number_token1,
    ACTIONS(208), 1,
      aux_sym_dir_identifier_token1,
    STATE(17), 1,
      sym_dir_identifier,
    STATE(110), 4,
      sym__dir_atom,
      sym_dir_string,
      sym_dir_number,
      sym_dir_path,
  [966] = 2,
    ACTIONS(221), 3,
      anon_sym_SQUOTE,
      sym_keyword_in,
      aux_sym_dir_identifier_token1,
    ACTIONS(219), 5,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      aux_sym_dir_string_token1,
      aux_sym_dir_number_token1,
      sym_dir_op,
  [979] = 2,
    ACTIONS(225), 3,
      anon_sym_SQUOTE,
      sym_keyword_in,
      aux_sym_dir_identifier_token1,
    ACTIONS(223), 5,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      aux_sym_dir_string_token1,
      aux_sym_dir_number_token1,
      sym_dir_op,
  [992] = 2,
    ACTIONS(229), 3,
      anon_sym_SQUOTE,
      sym_keyword_in,
      aux_sym_dir_identifier_token1,
    ACTIONS(227), 5,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      aux_sym_dir_string_token1,
      aux_sym_dir_number_token1,
      sym_dir_op,
  [1005] = 3,
    ACTIONS(233), 1,
      anon_sym_EQ,
    ACTIONS(235), 1,
      sym_attribute_name,
    ACTIONS(231), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_binding_name,
      sym_handler_name,
      sym_directive_name,
  [1019] = 2,
    ACTIONS(239), 1,
      anon_sym_LT,
    ACTIONS(237), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_cdata,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR_LBRACE,
      sym_text,
  [1031] = 2,
    ACTIONS(243), 1,
      anon_sym_LT,
    ACTIONS(241), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_cdata,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR_LBRACE,
      sym_text,
  [1043] = 2,
    ACTIONS(247), 1,
      anon_sym_LT,
    ACTIONS(245), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_cdata,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR_LBRACE,
      sym_text,
  [1055] = 2,
    ACTIONS(251), 1,
      anon_sym_LT,
    ACTIONS(249), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_cdata,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR_LBRACE,
      sym_text,
  [1067] = 2,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 6,
      aux_sym_dir_string_token1,
      aux_sym_dir_number_token1,
      aux_sym_dir_identifier_token1,
      anon_sym_RBRACE,
      aux_sym_interp_string_token1,
      sym_interp_op,
  [1079] = 2,
    ACTIONS(259), 1,
      anon_sym_LT,
    ACTIONS(257), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_cdata,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR_LBRACE,
      sym_text,
  [1091] = 2,
    ACTIONS(263), 1,
      anon_sym_LT,
    ACTIONS(261), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_cdata,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR_LBRACE,
      sym_text,
  [1103] = 2,
    ACTIONS(267), 1,
      anon_sym_LT,
    ACTIONS(265), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_cdata,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR_LBRACE,
      sym_text,
  [1115] = 2,
    ACTIONS(271), 1,
      anon_sym_LT,
    ACTIONS(269), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_cdata,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR_LBRACE,
      sym_text,
  [1127] = 2,
    ACTIONS(275), 1,
      anon_sym_LT,
    ACTIONS(273), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_cdata,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR_LBRACE,
      sym_text,
  [1139] = 2,
    ACTIONS(279), 1,
      anon_sym_LT,
    ACTIONS(277), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_cdata,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR_LBRACE,
      sym_text,
  [1151] = 2,
    ACTIONS(283), 1,
      anon_sym_LT,
    ACTIONS(281), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_cdata,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR_LBRACE,
      sym_text,
  [1163] = 2,
    ACTIONS(287), 1,
      anon_sym_LT,
    ACTIONS(285), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_cdata,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR_LBRACE,
      sym_text,
  [1175] = 2,
    ACTIONS(291), 1,
      anon_sym_LT,
    ACTIONS(289), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_cdata,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR_LBRACE,
      sym_text,
  [1187] = 2,
    ACTIONS(295), 1,
      anon_sym_LT,
    ACTIONS(293), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_cdata,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR_LBRACE,
      sym_text,
  [1199] = 2,
    ACTIONS(299), 1,
      anon_sym_LT,
    ACTIONS(297), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_cdata,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR_LBRACE,
      sym_text,
  [1211] = 2,
    ACTIONS(303), 1,
      anon_sym_LT,
    ACTIONS(301), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_cdata,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR_LBRACE,
      sym_text,
  [1223] = 2,
    ACTIONS(307), 1,
      anon_sym_LT,
    ACTIONS(305), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_cdata,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR_LBRACE,
      sym_text,
  [1235] = 2,
    ACTIONS(311), 1,
      anon_sym_LT,
    ACTIONS(309), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_cdata,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR_LBRACE,
      sym_text,
  [1247] = 2,
    ACTIONS(315), 1,
      sym_attribute_name,
    ACTIONS(313), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_binding_name,
      sym_handler_name,
      sym_directive_name,
  [1258] = 1,
    ACTIONS(317), 6,
      aux_sym_dir_string_token1,
      aux_sym_dir_number_token1,
      aux_sym_dir_identifier_token1,
      anon_sym_RBRACE,
      aux_sym_interp_string_token1,
      sym_interp_op,
  [1267] = 2,
    ACTIONS(321), 1,
      sym_attribute_name,
    ACTIONS(319), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_binding_name,
      sym_handler_name,
      sym_directive_name,
  [1278] = 4,
    ACTIONS(323), 1,
      anon_sym_DQUOTE,
    ACTIONS(327), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(325), 2,
      anon_sym_DOLLAR,
      sym__attr_fragment_d,
    STATE(76), 2,
      sym_interpolation,
      aux_sym_quoted_value_double_repeat1,
  [1293] = 4,
    ACTIONS(331), 1,
      anon_sym_SQUOTE,
    ACTIONS(333), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(329), 2,
      anon_sym_DOLLAR,
      sym__attr_fragment_s,
    STATE(78), 2,
      sym_interpolation,
      aux_sym_quoted_value_single_repeat1,
  [1308] = 2,
    ACTIONS(337), 1,
      sym_attribute_name,
    ACTIONS(335), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_binding_name,
      sym_handler_name,
      sym_directive_name,
  [1319] = 4,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(343), 1,
      sym_unquoted_value,
    STATE(84), 3,
      sym__attribute_value,
      sym_quoted_value_double,
      sym_quoted_value_single,
  [1334] = 2,
    ACTIONS(347), 1,
      anon_sym_LT,
    ACTIONS(345), 5,
      sym_comment,
      sym_cdata,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR_LBRACE,
      sym_text,
  [1345] = 1,
    ACTIONS(349), 6,
      aux_sym_dir_string_token1,
      aux_sym_dir_number_token1,
      aux_sym_dir_identifier_token1,
      anon_sym_RBRACE,
      aux_sym_interp_string_token1,
      sym_interp_op,
  [1354] = 1,
    ACTIONS(351), 6,
      aux_sym_dir_string_token1,
      aux_sym_dir_number_token1,
      aux_sym_dir_identifier_token1,
      anon_sym_RBRACE,
      aux_sym_interp_string_token1,
      sym_interp_op,
  [1363] = 1,
    ACTIONS(353), 6,
      aux_sym_dir_string_token1,
      aux_sym_dir_number_token1,
      aux_sym_dir_identifier_token1,
      anon_sym_RBRACE,
      aux_sym_interp_string_token1,
      sym_interp_op,
  [1372] = 2,
    ACTIONS(357), 1,
      sym_attribute_name,
    ACTIONS(355), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_binding_name,
      sym_handler_name,
      sym_directive_name,
  [1383] = 4,
    ACTIONS(359), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(361), 2,
      anon_sym_DOLLAR,
      sym__attr_fragment_d,
    STATE(76), 2,
      sym_interpolation,
      aux_sym_quoted_value_double_repeat1,
  [1398] = 2,
    ACTIONS(369), 1,
      sym_attribute_name,
    ACTIONS(367), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_binding_name,
      sym_handler_name,
      sym_directive_name,
  [1409] = 4,
    ACTIONS(374), 1,
      anon_sym_SQUOTE,
    ACTIONS(376), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(371), 2,
      anon_sym_DOLLAR,
      sym__attr_fragment_s,
    STATE(78), 2,
      sym_interpolation,
      aux_sym_quoted_value_single_repeat1,
  [1424] = 2,
    ACTIONS(381), 1,
      sym_attribute_name,
    ACTIONS(379), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_binding_name,
      sym_handler_name,
      sym_directive_name,
  [1435] = 2,
    ACTIONS(385), 1,
      anon_sym_LT,
    ACTIONS(383), 5,
      sym_comment,
      sym_cdata,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR_LBRACE,
      sym_text,
  [1446] = 1,
    ACTIONS(387), 6,
      aux_sym_dir_string_token1,
      aux_sym_dir_number_token1,
      aux_sym_dir_identifier_token1,
      anon_sym_RBRACE,
      aux_sym_interp_string_token1,
      sym_interp_op,
  [1455] = 4,
    ACTIONS(327), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(389), 1,
      anon_sym_DQUOTE,
    ACTIONS(391), 2,
      anon_sym_DOLLAR,
      sym__attr_fragment_d,
    STATE(67), 2,
      sym_interpolation,
      aux_sym_quoted_value_double_repeat1,
  [1470] = 4,
    ACTIONS(333), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(393), 2,
      anon_sym_DOLLAR,
      sym__attr_fragment_s,
    STATE(68), 2,
      sym_interpolation,
      aux_sym_quoted_value_single_repeat1,
  [1485] = 2,
    ACTIONS(399), 1,
      sym_attribute_name,
    ACTIONS(397), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_binding_name,
      sym_handler_name,
      sym_directive_name,
  [1496] = 2,
    ACTIONS(403), 1,
      sym_attribute_name,
    ACTIONS(401), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_binding_name,
      sym_handler_name,
      sym_directive_name,
  [1507] = 2,
    ACTIONS(407), 1,
      sym_attribute_name,
    ACTIONS(405), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_binding_name,
      sym_handler_name,
      sym_directive_name,
  [1518] = 3,
    ACTIONS(409), 1,
      anon_sym_DOT,
    STATE(88), 1,
      aux_sym_interp_path_repeat1,
    ACTIONS(215), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1530] = 3,
    ACTIONS(409), 1,
      anon_sym_DOT,
    STATE(89), 1,
      aux_sym_interp_path_repeat1,
    ACTIONS(202), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1542] = 3,
    ACTIONS(411), 1,
      anon_sym_DOT,
    STATE(89), 1,
      aux_sym_interp_path_repeat1,
    ACTIONS(210), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1554] = 1,
    ACTIONS(217), 4,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1561] = 1,
    ACTIONS(299), 4,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      sym__attr_fragment_d,
      anon_sym_DOLLAR_LBRACE,
  [1568] = 1,
    ACTIONS(210), 4,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1575] = 1,
    ACTIONS(311), 4,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      sym__attr_fragment_d,
      anon_sym_DOLLAR_LBRACE,
  [1582] = 1,
    ACTIONS(299), 4,
      anon_sym_DOLLAR,
      anon_sym_SQUOTE,
      sym__attr_fragment_s,
      anon_sym_DOLLAR_LBRACE,
  [1589] = 1,
    ACTIONS(311), 4,
      anon_sym_DOLLAR,
      anon_sym_SQUOTE,
      sym__attr_fragment_s,
      anon_sym_DOLLAR_LBRACE,
  [1596] = 3,
    ACTIONS(414), 1,
      anon_sym_COMMA,
    ACTIONS(416), 1,
      anon_sym_RBRACK,
    STATE(101), 1,
      aux_sym_dir_array_repeat1,
  [1606] = 3,
    ACTIONS(418), 1,
      anon_sym_COMMA,
    ACTIONS(420), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      aux_sym_interp_call_repeat1,
  [1616] = 3,
    ACTIONS(414), 1,
      anon_sym_COMMA,
    ACTIONS(422), 1,
      anon_sym_RBRACK,
    STATE(96), 1,
      aux_sym_dir_array_repeat1,
  [1626] = 3,
    ACTIONS(424), 1,
      sym_tag_name,
    ACTIONS(426), 1,
      anon_sym_script,
    ACTIONS(428), 1,
      anon_sym_style,
  [1636] = 2,
    ACTIONS(430), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1644] = 3,
    ACTIONS(432), 1,
      anon_sym_COMMA,
    ACTIONS(435), 1,
      anon_sym_RBRACK,
    STATE(101), 1,
      aux_sym_dir_array_repeat1,
  [1654] = 3,
    ACTIONS(437), 1,
      anon_sym_DQUOTE,
    ACTIONS(439), 1,
      anon_sym_SQUOTE,
    STATE(86), 1,
      sym_directive_value,
  [1664] = 3,
    ACTIONS(441), 1,
      anon_sym_COMMA,
    ACTIONS(444), 1,
      anon_sym_RPAREN,
    STATE(103), 1,
      aux_sym_interp_call_repeat1,
  [1674] = 3,
    ACTIONS(418), 1,
      anon_sym_COMMA,
    ACTIONS(446), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_interp_call_repeat1,
  [1684] = 3,
    ACTIONS(418), 1,
      anon_sym_COMMA,
    ACTIONS(448), 1,
      anon_sym_RPAREN,
    STATE(103), 1,
      aux_sym_interp_call_repeat1,
  [1694] = 3,
    ACTIONS(418), 1,
      anon_sym_COMMA,
    ACTIONS(450), 1,
      anon_sym_RPAREN,
    STATE(103), 1,
      aux_sym_interp_call_repeat1,
  [1704] = 2,
    ACTIONS(452), 1,
      anon_sym_LT_SLASH,
    ACTIONS(454), 1,
      sym__raw_text_style,
  [1711] = 2,
    ACTIONS(456), 1,
      anon_sym_LT_SLASH,
    ACTIONS(458), 1,
      sym__raw_text_style,
  [1718] = 2,
    ACTIONS(80), 1,
      aux_sym_dir_identifier_token1,
    STATE(38), 1,
      sym_interp_identifier,
  [1725] = 1,
    ACTIONS(435), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1730] = 1,
    ACTIONS(349), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1735] = 1,
    ACTIONS(351), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1740] = 1,
    ACTIONS(444), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1745] = 2,
    ACTIONS(126), 1,
      aux_sym_dir_identifier_token1,
    STATE(92), 1,
      sym_interp_identifier,
  [1752] = 1,
    ACTIONS(387), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1757] = 2,
    ACTIONS(460), 1,
      anon_sym_LT_SLASH,
    ACTIONS(462), 1,
      sym__raw_text_script,
  [1764] = 1,
    ACTIONS(317), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1769] = 1,
    ACTIONS(353), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1774] = 2,
    ACTIONS(208), 1,
      aux_sym_dir_identifier_token1,
    STATE(22), 1,
      sym_dir_identifier,
  [1781] = 2,
    ACTIONS(464), 1,
      anon_sym_LT_SLASH,
    ACTIONS(466), 1,
      sym__raw_text_script,
  [1788] = 1,
    ACTIONS(468), 1,
      anon_sym_GT,
  [1792] = 1,
    ACTIONS(470), 1,
      anon_sym_GT,
  [1796] = 1,
    ACTIONS(472), 1,
      anon_sym_LT_SLASH,
  [1800] = 1,
    ACTIONS(474), 1,
      anon_sym_GT,
  [1804] = 1,
    ACTIONS(476), 1,
      anon_sym_style,
  [1808] = 1,
    ACTIONS(478), 1,
      sym_tag_name,
  [1812] = 1,
    ACTIONS(480), 1,
      anon_sym_GT,
  [1816] = 1,
    ACTIONS(482), 1,
      anon_sym_LT_SLASH,
  [1820] = 1,
    ACTIONS(484), 1,
      anon_sym_SQUOTE,
  [1824] = 1,
    ACTIONS(484), 1,
      anon_sym_DQUOTE,
  [1828] = 1,
    ACTIONS(486), 1,
      anon_sym_GT,
  [1832] = 1,
    ACTIONS(488), 1,
      anon_sym_script,
  [1836] = 1,
    ACTIONS(490), 1,
      anon_sym_style,
  [1840] = 1,
    ACTIONS(492), 1,
      anon_sym_GT,
  [1844] = 1,
    ACTIONS(494), 1,
      ts_builtin_sym_end,
  [1848] = 1,
    ACTIONS(460), 1,
      anon_sym_LT_SLASH,
  [1852] = 1,
    ACTIONS(496), 1,
      anon_sym_script,
  [1856] = 1,
    ACTIONS(498), 1,
      anon_sym_EQ,
  [1860] = 1,
    ACTIONS(452), 1,
      anon_sym_LT_SLASH,
  [1864] = 1,
    ACTIONS(500), 1,
      anon_sym_style,
  [1868] = 1,
    ACTIONS(502), 1,
      anon_sym_GT,
  [1872] = 1,
    ACTIONS(504), 1,
      anon_sym_script,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 62,
  [SMALL_STATE(5)] = 94,
  [SMALL_STATE(6)] = 123,
  [SMALL_STATE(7)] = 158,
  [SMALL_STATE(8)] = 193,
  [SMALL_STATE(9)] = 228,
  [SMALL_STATE(10)] = 263,
  [SMALL_STATE(11)] = 293,
  [SMALL_STATE(12)] = 323,
  [SMALL_STATE(13)] = 353,
  [SMALL_STATE(14)] = 383,
  [SMALL_STATE(15)] = 413,
  [SMALL_STATE(16)] = 443,
  [SMALL_STATE(17)] = 473,
  [SMALL_STATE(18)] = 494,
  [SMALL_STATE(19)] = 523,
  [SMALL_STATE(20)] = 552,
  [SMALL_STATE(21)] = 573,
  [SMALL_STATE(22)] = 594,
  [SMALL_STATE(23)] = 610,
  [SMALL_STATE(24)] = 636,
  [SMALL_STATE(25)] = 652,
  [SMALL_STATE(26)] = 677,
  [SMALL_STATE(27)] = 702,
  [SMALL_STATE(28)] = 725,
  [SMALL_STATE(29)] = 750,
  [SMALL_STATE(30)] = 765,
  [SMALL_STATE(31)] = 780,
  [SMALL_STATE(32)] = 805,
  [SMALL_STATE(33)] = 830,
  [SMALL_STATE(34)] = 855,
  [SMALL_STATE(35)] = 871,
  [SMALL_STATE(36)] = 893,
  [SMALL_STATE(37)] = 909,
  [SMALL_STATE(38)] = 925,
  [SMALL_STATE(39)] = 936,
  [SMALL_STATE(40)] = 947,
  [SMALL_STATE(41)] = 966,
  [SMALL_STATE(42)] = 979,
  [SMALL_STATE(43)] = 992,
  [SMALL_STATE(44)] = 1005,
  [SMALL_STATE(45)] = 1019,
  [SMALL_STATE(46)] = 1031,
  [SMALL_STATE(47)] = 1043,
  [SMALL_STATE(48)] = 1055,
  [SMALL_STATE(49)] = 1067,
  [SMALL_STATE(50)] = 1079,
  [SMALL_STATE(51)] = 1091,
  [SMALL_STATE(52)] = 1103,
  [SMALL_STATE(53)] = 1115,
  [SMALL_STATE(54)] = 1127,
  [SMALL_STATE(55)] = 1139,
  [SMALL_STATE(56)] = 1151,
  [SMALL_STATE(57)] = 1163,
  [SMALL_STATE(58)] = 1175,
  [SMALL_STATE(59)] = 1187,
  [SMALL_STATE(60)] = 1199,
  [SMALL_STATE(61)] = 1211,
  [SMALL_STATE(62)] = 1223,
  [SMALL_STATE(63)] = 1235,
  [SMALL_STATE(64)] = 1247,
  [SMALL_STATE(65)] = 1258,
  [SMALL_STATE(66)] = 1267,
  [SMALL_STATE(67)] = 1278,
  [SMALL_STATE(68)] = 1293,
  [SMALL_STATE(69)] = 1308,
  [SMALL_STATE(70)] = 1319,
  [SMALL_STATE(71)] = 1334,
  [SMALL_STATE(72)] = 1345,
  [SMALL_STATE(73)] = 1354,
  [SMALL_STATE(74)] = 1363,
  [SMALL_STATE(75)] = 1372,
  [SMALL_STATE(76)] = 1383,
  [SMALL_STATE(77)] = 1398,
  [SMALL_STATE(78)] = 1409,
  [SMALL_STATE(79)] = 1424,
  [SMALL_STATE(80)] = 1435,
  [SMALL_STATE(81)] = 1446,
  [SMALL_STATE(82)] = 1455,
  [SMALL_STATE(83)] = 1470,
  [SMALL_STATE(84)] = 1485,
  [SMALL_STATE(85)] = 1496,
  [SMALL_STATE(86)] = 1507,
  [SMALL_STATE(87)] = 1518,
  [SMALL_STATE(88)] = 1530,
  [SMALL_STATE(89)] = 1542,
  [SMALL_STATE(90)] = 1554,
  [SMALL_STATE(91)] = 1561,
  [SMALL_STATE(92)] = 1568,
  [SMALL_STATE(93)] = 1575,
  [SMALL_STATE(94)] = 1582,
  [SMALL_STATE(95)] = 1589,
  [SMALL_STATE(96)] = 1596,
  [SMALL_STATE(97)] = 1606,
  [SMALL_STATE(98)] = 1616,
  [SMALL_STATE(99)] = 1626,
  [SMALL_STATE(100)] = 1636,
  [SMALL_STATE(101)] = 1644,
  [SMALL_STATE(102)] = 1654,
  [SMALL_STATE(103)] = 1664,
  [SMALL_STATE(104)] = 1674,
  [SMALL_STATE(105)] = 1684,
  [SMALL_STATE(106)] = 1694,
  [SMALL_STATE(107)] = 1704,
  [SMALL_STATE(108)] = 1711,
  [SMALL_STATE(109)] = 1718,
  [SMALL_STATE(110)] = 1725,
  [SMALL_STATE(111)] = 1730,
  [SMALL_STATE(112)] = 1735,
  [SMALL_STATE(113)] = 1740,
  [SMALL_STATE(114)] = 1745,
  [SMALL_STATE(115)] = 1752,
  [SMALL_STATE(116)] = 1757,
  [SMALL_STATE(117)] = 1764,
  [SMALL_STATE(118)] = 1769,
  [SMALL_STATE(119)] = 1774,
  [SMALL_STATE(120)] = 1781,
  [SMALL_STATE(121)] = 1788,
  [SMALL_STATE(122)] = 1792,
  [SMALL_STATE(123)] = 1796,
  [SMALL_STATE(124)] = 1800,
  [SMALL_STATE(125)] = 1804,
  [SMALL_STATE(126)] = 1808,
  [SMALL_STATE(127)] = 1812,
  [SMALL_STATE(128)] = 1816,
  [SMALL_STATE(129)] = 1820,
  [SMALL_STATE(130)] = 1824,
  [SMALL_STATE(131)] = 1828,
  [SMALL_STATE(132)] = 1832,
  [SMALL_STATE(133)] = 1836,
  [SMALL_STATE(134)] = 1840,
  [SMALL_STATE(135)] = 1844,
  [SMALL_STATE(136)] = 1848,
  [SMALL_STATE(137)] = 1852,
  [SMALL_STATE(138)] = 1856,
  [SMALL_STATE(139)] = 1860,
  [SMALL_STATE(140)] = 1864,
  [SMALL_STATE(141)] = 1868,
  [SMALL_STATE(142)] = 1872,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [16] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_expression, 1, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_expression, 1, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_expression_repeat1, 2, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_expression_repeat1, 2, 0, 0),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpolation_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpolation_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpolation_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interpolation_repeat1, 2, 0, 0),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpolation_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dir_path, 1, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dir_path, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dir_path, 2, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dir_path, 2, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dir_path_repeat1, 2, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dir_path_repeat1, 2, 0, 0),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dir_path_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dir_identifier, 1, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dir_identifier, 1, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(138),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dir_string, 1, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dir_string, 1, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dir_number, 1, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dir_number, 1, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interp_path, 2, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interp_path_repeat1, 2, 0, 0),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interp_path_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interp_path, 1, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interp_identifier, 1, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dir_array, 4, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dir_array, 4, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dir_array, 2, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dir_array, 2, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dir_array, 3, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dir_array, 3, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regular_attribute, 1, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regular_attribute, 1, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 6, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 6, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 4, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 4, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 3, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 3, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interp_item, 1, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 7, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 7, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 7, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 7, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 4, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 4, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 3, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 3, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 8, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 8, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 8, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 8, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 2, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 2, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 6, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 6, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_value_single, 2, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_value_single, 2, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interp_call, 4, 0, 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_value_double, 2, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_value_double, 2, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_value, 2, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_value, 2, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interp_string, 1, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interp_number, 1, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interp_call, 5, 0, 1),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_value_double, 3, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_value_double, 3, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_value_double_repeat1, 2, 0, 0),
  [361] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_value_double_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [364] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_value_double_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_value_single, 3, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_value_single, 3, 0, 0),
  [371] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_value_single_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_value_single_repeat1, 2, 0, 0),
  [376] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_value_single_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_value, 3, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_value, 3, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interp_call, 3, 0, 1),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regular_attribute, 3, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regular_attribute, 3, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_attribute, 3, 0, 0),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_attribute, 3, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interp_path_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dir_array_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dir_array_repeat1, 2, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interp_call_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interp_call_repeat1, 2, 0, 0),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [494] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__raw_text_script = 0,
  ts_external_token__raw_text_style = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__raw_text_script] = sym__raw_text_script,
  [ts_external_token__raw_text_style] = sym__raw_text_style,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__raw_text_script] = true,
    [ts_external_token__raw_text_style] = true,
  },
  [2] = {
    [ts_external_token__raw_text_style] = true,
  },
  [3] = {
    [ts_external_token__raw_text_script] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_nemo_external_scanner_create(void);
void tree_sitter_nemo_external_scanner_destroy(void *);
bool tree_sitter_nemo_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_nemo_external_scanner_serialize(void *, char *);
void tree_sitter_nemo_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_nemo(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_nemo_external_scanner_create,
      tree_sitter_nemo_external_scanner_destroy,
      tree_sitter_nemo_external_scanner_scan,
      tree_sitter_nemo_external_scanner_serialize,
      tree_sitter_nemo_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
