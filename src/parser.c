#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 143
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 82
#define ALIAS_COUNT 0
#define TOKEN_COUNT 43
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
  sym_template_variable = 36,
  sym_brace_text = 37,
  sym__attr_brace_d = 38,
  sym__attr_brace_s = 39,
  sym_text = 40,
  sym__raw_text_script = 41,
  sym__raw_text_style = 42,
  sym_document = 43,
  sym__node = 44,
  sym_element = 45,
  sym_start_tag = 46,
  sym_self_closing_tag = 47,
  sym_end_tag = 48,
  sym_script_element = 49,
  sym_style_element = 50,
  sym_attribute = 51,
  sym_regular_attribute = 52,
  sym__attribute_value = 53,
  sym_quoted_value_double = 54,
  sym_quoted_value_single = 55,
  sym_directive_attribute = 56,
  sym_directive_value = 57,
  sym_directive_expression = 58,
  sym_dir_array = 59,
  sym__dir_atom = 60,
  sym_dir_string = 61,
  sym_dir_number = 62,
  sym_dir_path = 63,
  sym_dir_identifier = 64,
  sym_interpolation = 65,
  sym__interp_item = 66,
  sym_interp_call = 67,
  sym_interp_path = 68,
  sym_interp_identifier = 69,
  sym_interp_string = 70,
  sym_interp_number = 71,
  aux_sym_document_repeat1 = 72,
  aux_sym_start_tag_repeat1 = 73,
  aux_sym_quoted_value_double_repeat1 = 74,
  aux_sym_quoted_value_single_repeat1 = 75,
  aux_sym_directive_expression_repeat1 = 76,
  aux_sym_dir_array_repeat1 = 77,
  aux_sym_dir_path_repeat1 = 78,
  aux_sym_interpolation_repeat1 = 79,
  aux_sym_interp_call_repeat1 = 80,
  aux_sym_interp_path_repeat1 = 81,
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
  [sym_template_variable] = "template_variable",
  [sym_brace_text] = "brace_text",
  [sym__attr_brace_d] = "attribute_value",
  [sym__attr_brace_s] = "attribute_value",
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
  [sym_template_variable] = sym_template_variable,
  [sym_brace_text] = sym_brace_text,
  [sym__attr_brace_d] = anon_sym_DOLLAR,
  [sym__attr_brace_s] = anon_sym_DOLLAR,
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
  [sym_template_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_brace_text] = {
    .visible = true,
    .named = true,
  },
  [sym__attr_brace_d] = {
    .visible = true,
    .named = true,
  },
  [sym__attr_brace_s] = {
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
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 11,
  [16] = 16,
  [17] = 12,
  [18] = 11,
  [19] = 12,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 20,
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
  [86] = 55,
  [87] = 41,
  [88] = 55,
  [89] = 41,
  [90] = 90,
  [91] = 35,
  [92] = 42,
  [93] = 58,
  [94] = 66,
  [95] = 60,
  [96] = 96,
  [97] = 71,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 100,
  [104] = 98,
  [105] = 105,
  [106] = 106,
  [107] = 77,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 81,
  [112] = 83,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 115,
  [118] = 73,
  [119] = 75,
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
      if (eof) ADVANCE(55);
      ADVANCE_MAP(
        '"', 88,
        '$', 89,
        '\'', 90,
        '(', 114,
        ')', 115,
        ',', 101,
        '.', 107,
        '<', 58,
        '=', 75,
        '>', 59,
        '[', 100,
        ']', 102,
        'i', 133,
        'n', 128,
        's', 129,
        '{', 120,
        '}', 113,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '!', 17,
        '"', 88,
        '&', 10,
        '\'', 91,
        '(', 114,
        ')', 115,
        ',', 101,
        '.', 107,
        '<', 111,
        '=', 17,
        '>', 111,
        '[', 100,
        ']', 102,
        'i', 108,
        '{', 41,
        '|', 42,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '!', 17,
        '"', 88,
        '&', 10,
        '\'', 91,
        ')', 115,
        ',', 101,
        '<', 111,
        '=', 17,
        '>', 111,
        '[', 100,
        ']', 102,
        'i', 108,
        '{', 41,
        '|', 42,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '!', 18,
        '"', 8,
        '&', 11,
        '\'', 12,
        '(', 114,
        ')', 115,
        '.', 107,
        '<', 118,
        '=', 18,
        '>', 118,
        ']', 102,
        '|', 43,
        '}', 113,
      );
      if (('*' <= lookahead && lookahead <= '/')) ADVANCE(117);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '!', 18,
        '"', 8,
        '&', 11,
        '\'', 12,
        ')', 115,
        '<', 118,
        '=', 18,
        '>', 118,
        ']', 102,
        '|', 43,
        '}', 113,
      );
      if (('*' <= lookahead && lookahead <= '-') ||
          lookahead == '/') ADVANCE(117);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(88);
      if (lookahead == '$') ADVANCE(89);
      if (lookahead == '{') ADVANCE(124);
      if (lookahead == '}') ADVANCE(125);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(92);
      if (lookahead != 0) ADVANCE(93);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '"', 88,
        '\'', 90,
        '/', 21,
        '=', 75,
        '>', 59,
        'b', 82,
        'n', 80,
        'o', 83,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(88);
      if (lookahead == '\'') ADVANCE(90);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '`') ADVANCE(96);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(116);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '$') ADVANCE(89);
      if (lookahead == '\'') ADVANCE(90);
      if (lookahead == '{') ADVANCE(126);
      if (lookahead == '}') ADVANCE(127);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(94);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 10:
      if (lookahead == '&') ADVANCE(110);
      END_STATE();
    case 11:
      if (lookahead == '&') ADVANCE(117);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(103);
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
      if (lookahead == '=') ADVANCE(110);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(117);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(56);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(57);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(60);
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
      if (lookahead == 'e') ADVANCE(73);
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
      if (lookahead == 's') ADVANCE(62);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 37:
      if (lookahead == 's') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(37);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 39:
      if (lookahead == 'y') ADVANCE(33);
      END_STATE();
    case 40:
      if (lookahead == '{') ADVANCE(112);
      END_STATE();
    case 41:
      if (lookahead == '{') ADVANCE(47);
      END_STATE();
    case 42:
      if (lookahead == '|') ADVANCE(110);
      END_STATE();
    case 43:
      if (lookahead == '|') ADVANCE(117);
      END_STATE();
    case 44:
      if (lookahead == '}') ADVANCE(46);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(44);
      END_STATE();
    case 45:
      if (lookahead == '}') ADVANCE(46);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 46:
      if (lookahead == '}') ADVANCE(119);
      END_STATE();
    case 47:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 48:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 50:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 51:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(95);
      END_STATE();
    case 52:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(93);
      END_STATE();
    case 53:
      if (eof) ADVANCE(55);
      ADVANCE_MAP(
        '"', 88,
        '$', 89,
        '\'', 90,
        ')', 115,
        ',', 101,
        '<', 58,
        '=', 75,
        '>', 59,
        '[', 100,
        ']', 102,
        'i', 133,
        'n', 128,
        's', 129,
        '{', 120,
        '}', 113,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 54:
      if (eof) ADVANCE(55);
      if (lookahead == '$') ADVANCE(40);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == '{') ADVANCE(122);
      if (lookahead == '}') ADVANCE(123);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(54);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_cdata);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(13);
      if (lookahead == '/') ADVANCE(61);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(67);
      if (lookahead == 't') ADVANCE(69);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(66);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(63);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(68);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(64);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(72);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(65);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_script);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_style);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_style);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_binding_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_handler_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-') ADVANCE(85);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'd') ADVANCE(79);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'i') ADVANCE(84);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'n') ADVANCE(78);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'n') ADVANCE(81);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{') ADVANCE(112);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(103);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__attr_fragment_d);
      if (lookahead == '"') ADVANCE(88);
      if (lookahead == '$') ADVANCE(89);
      if (lookahead == '{') ADVANCE(124);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__attr_fragment_d);
      if (lookahead == '$') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__attr_fragment_s);
      if (lookahead == '$') ADVANCE(89);
      if (lookahead == '\'') ADVANCE(90);
      if (lookahead == '{') ADVANCE(126);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__attr_fragment_s);
      if (lookahead == '$') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_unquoted_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '`') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_directive_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_keyword_in);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_keyword_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_dir_string_token1);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_dir_number_token1);
      if (lookahead == '.') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_dir_number_token1);
      if (lookahead == '.') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_dir_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_dir_identifier_token1);
      if (lookahead == 'n') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_dir_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_dir_op);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_dir_op);
      if (lookahead == '=') ADVANCE(110);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_interp_string_token1);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_interp_op);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_interp_op);
      if (lookahead == '=') ADVANCE(117);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_template_variable);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_brace_text);
      if (lookahead == '"') ADVANCE(123);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_brace_text);
      if (lookahead == '"') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_brace_text);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_brace_text);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__attr_brace_d);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__attr_brace_d);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__attr_brace_s);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(127);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__attr_brace_s);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ':') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '<' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(140);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(135);
      if (lookahead == 't') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '<' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(140);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '<' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(140);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '<' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(140);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '<' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(140);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '<' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(140);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '<' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(140);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '<' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(140);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '<' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(140);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'y') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '<' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(140);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '<' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(140);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_text);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '<' &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '<' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(140);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 54},
  [2] = {.lex_state = 54},
  [3] = {.lex_state = 54},
  [4] = {.lex_state = 54},
  [5] = {.lex_state = 54},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 54},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 54},
  [37] = {.lex_state = 54},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 54},
  [40] = {.lex_state = 54},
  [41] = {.lex_state = 54},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 54},
  [44] = {.lex_state = 54},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 54},
  [47] = {.lex_state = 54},
  [48] = {.lex_state = 54},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 54},
  [51] = {.lex_state = 54},
  [52] = {.lex_state = 54},
  [53] = {.lex_state = 54},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 54},
  [56] = {.lex_state = 54},
  [57] = {.lex_state = 54},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 54},
  [62] = {.lex_state = 9},
  [63] = {.lex_state = 54},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 9},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 9},
  [89] = {.lex_state = 9},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 36},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 0, .external_lex_state = 2},
  [109] = {.lex_state = 0, .external_lex_state = 3},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 0, .external_lex_state = 3},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 0, .external_lex_state = 2},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 37},
  [122] = {.lex_state = 6},
  [123] = {.lex_state = 48},
  [124] = {.lex_state = 37},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 6},
  [127] = {.lex_state = 37},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 37},
  [133] = {.lex_state = 37},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 6},
  [136] = {.lex_state = 6},
  [137] = {.lex_state = 6},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 37},
  [140] = {.lex_state = 6},
  [141] = {.lex_state = 6},
  [142] = {.lex_state = 6},
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
    [sym_template_variable] = ACTIONS(1),
    [sym_brace_text] = ACTIONS(1),
    [sym__attr_brace_d] = ACTIONS(1),
    [sym_text] = ACTIONS(1),
    [sym__raw_text_script] = ACTIONS(1),
    [sym__raw_text_style] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(129),
    [sym__node] = STATE(5),
    [sym_element] = STATE(5),
    [sym_start_tag] = STATE(2),
    [sym_self_closing_tag] = STATE(34),
    [sym_script_element] = STATE(5),
    [sym_style_element] = STATE(5),
    [sym_interpolation] = STATE(5),
    [aux_sym_document_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_cdata] = ACTIONS(5),
    [anon_sym_LT] = ACTIONS(7),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(9),
    [sym_template_variable] = ACTIONS(5),
    [sym_brace_text] = ACTIONS(11),
    [sym_text] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LT_SLASH,
    ACTIONS(17), 1,
      sym_brace_text,
    STATE(2), 1,
      sym_start_tag,
    STATE(34), 1,
      sym_self_closing_tag,
    STATE(39), 1,
      sym_end_tag,
    ACTIONS(13), 4,
      sym_comment,
      sym_cdata,
      sym_template_variable,
      sym_text,
    STATE(3), 6,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_interpolation,
      aux_sym_document_repeat1,
  [36] = 9,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LT_SLASH,
    ACTIONS(21), 1,
      sym_brace_text,
    STATE(2), 1,
      sym_start_tag,
    STATE(34), 1,
      sym_self_closing_tag,
    STATE(36), 1,
      sym_end_tag,
    ACTIONS(19), 4,
      sym_comment,
      sym_cdata,
      sym_template_variable,
      sym_text,
    STATE(4), 6,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_interpolation,
      aux_sym_document_repeat1,
  [72] = 8,
    ACTIONS(28), 1,
      anon_sym_LT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(34), 1,
      sym_brace_text,
    STATE(2), 1,
      sym_start_tag,
    STATE(34), 1,
      sym_self_closing_tag,
    ACTIONS(23), 2,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
    ACTIONS(25), 4,
      sym_comment,
      sym_cdata,
      sym_template_variable,
      sym_text,
    STATE(4), 6,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_interpolation,
      aux_sym_document_repeat1,
  [106] = 8,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(21), 1,
      sym_brace_text,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_start_tag,
    STATE(34), 1,
      sym_self_closing_tag,
    ACTIONS(19), 4,
      sym_comment,
      sym_cdata,
      sym_template_variable,
      sym_text,
    STATE(4), 6,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_interpolation,
      aux_sym_document_repeat1,
  [139] = 10,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym_keyword_in,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      aux_sym_dir_string_token1,
    ACTIONS(47), 1,
      aux_sym_dir_number_token1,
    ACTIONS(49), 1,
      aux_sym_dir_identifier_token1,
    STATE(14), 1,
      sym_dir_identifier,
    STATE(140), 1,
      sym_directive_expression,
    ACTIONS(51), 2,
      sym_dir_op,
      sym_template_variable,
    STATE(9), 5,
      sym_dir_array,
      sym_dir_string,
      sym_dir_number,
      sym_dir_path,
      aux_sym_directive_expression_repeat1,
  [175] = 10,
    ACTIONS(41), 1,
      sym_keyword_in,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      aux_sym_dir_string_token1,
    ACTIONS(47), 1,
      aux_sym_dir_number_token1,
    ACTIONS(49), 1,
      aux_sym_dir_identifier_token1,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      sym_dir_identifier,
    STATE(131), 1,
      sym_directive_expression,
    ACTIONS(51), 2,
      sym_dir_op,
      sym_template_variable,
    STATE(9), 5,
      sym_dir_array,
      sym_dir_string,
      sym_dir_number,
      sym_dir_path,
      aux_sym_directive_expression_repeat1,
  [211] = 10,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(57), 1,
      anon_sym_SQUOTE,
    ACTIONS(59), 1,
      sym_keyword_in,
    ACTIONS(62), 1,
      anon_sym_LBRACK,
    ACTIONS(65), 1,
      aux_sym_dir_string_token1,
    ACTIONS(68), 1,
      aux_sym_dir_number_token1,
    ACTIONS(71), 1,
      aux_sym_dir_identifier_token1,
    STATE(14), 1,
      sym_dir_identifier,
    ACTIONS(74), 2,
      sym_dir_op,
      sym_template_variable,
    STATE(8), 5,
      sym_dir_array,
      sym_dir_string,
      sym_dir_number,
      sym_dir_path,
      aux_sym_directive_expression_repeat1,
  [247] = 10,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      aux_sym_dir_string_token1,
    ACTIONS(47), 1,
      aux_sym_dir_number_token1,
    ACTIONS(49), 1,
      aux_sym_dir_identifier_token1,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      anon_sym_SQUOTE,
    ACTIONS(81), 1,
      sym_keyword_in,
    STATE(14), 1,
      sym_dir_identifier,
    ACTIONS(83), 2,
      sym_dir_op,
      sym_template_variable,
    STATE(8), 5,
      sym_dir_array,
      sym_dir_string,
      sym_dir_number,
      sym_dir_path,
      aux_sym_directive_expression_repeat1,
  [283] = 4,
    ACTIONS(89), 1,
      anon_sym_DOT,
    STATE(16), 1,
      aux_sym_dir_path_repeat1,
    ACTIONS(87), 3,
      anon_sym_SQUOTE,
      sym_keyword_in,
      aux_sym_dir_identifier_token1,
    ACTIONS(85), 8,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_dir_string_token1,
      aux_sym_dir_number_token1,
      sym_dir_op,
      sym_template_variable,
  [305] = 8,
    ACTIONS(93), 1,
      aux_sym_dir_number_token1,
    ACTIONS(95), 1,
      aux_sym_dir_identifier_token1,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    ACTIONS(99), 1,
      sym_interp_op,
    STATE(35), 1,
      sym_interp_identifier,
    STATE(71), 1,
      sym_interp_path,
    ACTIONS(91), 2,
      aux_sym_dir_string_token1,
      aux_sym_interp_string_token1,
    STATE(13), 5,
      sym__interp_item,
      sym_interp_call,
      sym_interp_string,
      sym_interp_number,
      aux_sym_interpolation_repeat1,
  [335] = 8,
    ACTIONS(93), 1,
      aux_sym_dir_number_token1,
    ACTIONS(95), 1,
      aux_sym_dir_identifier_token1,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    ACTIONS(103), 1,
      sym_interp_op,
    STATE(35), 1,
      sym_interp_identifier,
    STATE(71), 1,
      sym_interp_path,
    ACTIONS(91), 2,
      aux_sym_dir_string_token1,
      aux_sym_interp_string_token1,
    STATE(15), 5,
      sym__interp_item,
      sym_interp_call,
      sym_interp_string,
      sym_interp_number,
      aux_sym_interpolation_repeat1,
  [365] = 8,
    ACTIONS(108), 1,
      aux_sym_dir_number_token1,
    ACTIONS(111), 1,
      aux_sym_dir_identifier_token1,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
    ACTIONS(116), 1,
      sym_interp_op,
    STATE(35), 1,
      sym_interp_identifier,
    STATE(71), 1,
      sym_interp_path,
    ACTIONS(105), 2,
      aux_sym_dir_string_token1,
      aux_sym_interp_string_token1,
    STATE(13), 5,
      sym__interp_item,
      sym_interp_call,
      sym_interp_string,
      sym_interp_number,
      aux_sym_interpolation_repeat1,
  [395] = 4,
    ACTIONS(89), 1,
      anon_sym_DOT,
    STATE(10), 1,
      aux_sym_dir_path_repeat1,
    ACTIONS(121), 3,
      anon_sym_SQUOTE,
      sym_keyword_in,
      aux_sym_dir_identifier_token1,
    ACTIONS(119), 8,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_dir_string_token1,
      aux_sym_dir_number_token1,
      sym_dir_op,
      sym_template_variable,
  [417] = 8,
    ACTIONS(93), 1,
      aux_sym_dir_number_token1,
    ACTIONS(95), 1,
      aux_sym_dir_identifier_token1,
    ACTIONS(99), 1,
      sym_interp_op,
    ACTIONS(123), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      sym_interp_identifier,
    STATE(71), 1,
      sym_interp_path,
    ACTIONS(91), 2,
      aux_sym_dir_string_token1,
      aux_sym_interp_string_token1,
    STATE(13), 5,
      sym__interp_item,
      sym_interp_call,
      sym_interp_string,
      sym_interp_number,
      aux_sym_interpolation_repeat1,
  [447] = 4,
    ACTIONS(129), 1,
      anon_sym_DOT,
    STATE(16), 1,
      aux_sym_dir_path_repeat1,
    ACTIONS(127), 3,
      anon_sym_SQUOTE,
      sym_keyword_in,
      aux_sym_dir_identifier_token1,
    ACTIONS(125), 8,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_dir_string_token1,
      aux_sym_dir_number_token1,
      sym_dir_op,
      sym_template_variable,
  [469] = 8,
    ACTIONS(93), 1,
      aux_sym_dir_number_token1,
    ACTIONS(95), 1,
      aux_sym_dir_identifier_token1,
    ACTIONS(132), 1,
      anon_sym_RBRACE,
    ACTIONS(134), 1,
      sym_interp_op,
    STATE(35), 1,
      sym_interp_identifier,
    STATE(71), 1,
      sym_interp_path,
    ACTIONS(91), 2,
      aux_sym_dir_string_token1,
      aux_sym_interp_string_token1,
    STATE(18), 5,
      sym__interp_item,
      sym_interp_call,
      sym_interp_string,
      sym_interp_number,
      aux_sym_interpolation_repeat1,
  [499] = 8,
    ACTIONS(93), 1,
      aux_sym_dir_number_token1,
    ACTIONS(95), 1,
      aux_sym_dir_identifier_token1,
    ACTIONS(99), 1,
      sym_interp_op,
    ACTIONS(136), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      sym_interp_identifier,
    STATE(71), 1,
      sym_interp_path,
    ACTIONS(91), 2,
      aux_sym_dir_string_token1,
      aux_sym_interp_string_token1,
    STATE(13), 5,
      sym__interp_item,
      sym_interp_call,
      sym_interp_string,
      sym_interp_number,
      aux_sym_interpolation_repeat1,
  [529] = 8,
    ACTIONS(93), 1,
      aux_sym_dir_number_token1,
    ACTIONS(95), 1,
      aux_sym_dir_identifier_token1,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    ACTIONS(140), 1,
      sym_interp_op,
    STATE(35), 1,
      sym_interp_identifier,
    STATE(71), 1,
      sym_interp_path,
    ACTIONS(91), 2,
      aux_sym_dir_string_token1,
      aux_sym_interp_string_token1,
    STATE(11), 5,
      sym__interp_item,
      sym_interp_call,
      sym_interp_string,
      sym_interp_number,
      aux_sym_interpolation_repeat1,
  [559] = 8,
    ACTIONS(144), 1,
      aux_sym_dir_number_token1,
    ACTIONS(146), 1,
      aux_sym_dir_identifier_token1,
    ACTIONS(148), 1,
      anon_sym_RPAREN,
    ACTIONS(150), 1,
      sym_interp_op,
    STATE(91), 1,
      sym_interp_identifier,
    STATE(97), 1,
      sym_interp_path,
    ACTIONS(142), 2,
      aux_sym_dir_string_token1,
      aux_sym_interp_string_token1,
    STATE(100), 4,
      sym__interp_item,
      sym_interp_call,
      sym_interp_string,
      sym_interp_number,
  [588] = 2,
    ACTIONS(154), 3,
      anon_sym_SQUOTE,
      sym_keyword_in,
      aux_sym_dir_identifier_token1,
    ACTIONS(152), 9,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_dir_string_token1,
      aux_sym_dir_number_token1,
      anon_sym_DOT,
      sym_dir_op,
      sym_template_variable,
  [605] = 2,
    ACTIONS(127), 3,
      anon_sym_SQUOTE,
      sym_keyword_in,
      aux_sym_dir_identifier_token1,
    ACTIONS(125), 9,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_dir_string_token1,
      aux_sym_dir_number_token1,
      anon_sym_DOT,
      sym_dir_op,
      sym_template_variable,
  [622] = 8,
    ACTIONS(144), 1,
      aux_sym_dir_number_token1,
    ACTIONS(146), 1,
      aux_sym_dir_identifier_token1,
    ACTIONS(156), 1,
      anon_sym_RPAREN,
    ACTIONS(158), 1,
      sym_interp_op,
    STATE(91), 1,
      sym_interp_identifier,
    STATE(97), 1,
      sym_interp_path,
    ACTIONS(142), 2,
      aux_sym_dir_string_token1,
      aux_sym_interp_string_token1,
    STATE(103), 4,
      sym__interp_item,
      sym_interp_call,
      sym_interp_string,
      sym_interp_number,
  [651] = 2,
    ACTIONS(162), 3,
      anon_sym_SQUOTE,
      sym_keyword_in,
      aux_sym_dir_identifier_token1,
    ACTIONS(160), 8,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_dir_string_token1,
      aux_sym_dir_number_token1,
      sym_dir_op,
      sym_template_variable,
  [667] = 7,
    ACTIONS(144), 1,
      aux_sym_dir_number_token1,
    ACTIONS(146), 1,
      aux_sym_dir_identifier_token1,
    ACTIONS(164), 1,
      sym_interp_op,
    STATE(91), 1,
      sym_interp_identifier,
    STATE(97), 1,
      sym_interp_path,
    ACTIONS(142), 2,
      aux_sym_dir_string_token1,
      aux_sym_interp_string_token1,
    STATE(113), 4,
      sym__interp_item,
      sym_interp_call,
      sym_interp_string,
      sym_interp_number,
  [693] = 2,
    ACTIONS(168), 3,
      anon_sym_SQUOTE,
      sym_keyword_in,
      aux_sym_dir_identifier_token1,
    ACTIONS(166), 8,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_dir_string_token1,
      aux_sym_dir_number_token1,
      sym_dir_op,
      sym_template_variable,
  [709] = 6,
    ACTIONS(175), 1,
      sym_attribute_name,
    ACTIONS(178), 1,
      sym_directive_name,
    ACTIONS(170), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    ACTIONS(172), 2,
      sym_binding_name,
      sym_handler_name,
    STATE(27), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
    STATE(80), 2,
      sym_regular_attribute,
      sym_directive_attribute,
  [732] = 7,
    ACTIONS(181), 1,
      anon_sym_GT,
    ACTIONS(183), 1,
      anon_sym_SLASH_GT,
    ACTIONS(187), 1,
      sym_attribute_name,
    ACTIONS(189), 1,
      sym_directive_name,
    ACTIONS(185), 2,
      sym_binding_name,
      sym_handler_name,
    STATE(27), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
    STATE(80), 2,
      sym_regular_attribute,
      sym_directive_attribute,
  [757] = 7,
    ACTIONS(187), 1,
      sym_attribute_name,
    ACTIONS(189), 1,
      sym_directive_name,
    ACTIONS(191), 1,
      anon_sym_GT,
    ACTIONS(193), 1,
      anon_sym_SLASH_GT,
    ACTIONS(185), 2,
      sym_binding_name,
      sym_handler_name,
    STATE(28), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
    STATE(80), 2,
      sym_regular_attribute,
      sym_directive_attribute,
  [782] = 7,
    ACTIONS(187), 1,
      sym_attribute_name,
    ACTIONS(189), 1,
      sym_directive_name,
    ACTIONS(195), 1,
      anon_sym_GT,
    ACTIONS(197), 1,
      anon_sym_SLASH_GT,
    ACTIONS(185), 2,
      sym_binding_name,
      sym_handler_name,
    STATE(33), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
    STATE(80), 2,
      sym_regular_attribute,
      sym_directive_attribute,
  [807] = 7,
    ACTIONS(187), 1,
      sym_attribute_name,
    ACTIONS(189), 1,
      sym_directive_name,
    ACTIONS(199), 1,
      anon_sym_GT,
    ACTIONS(201), 1,
      anon_sym_SLASH_GT,
    ACTIONS(185), 2,
      sym_binding_name,
      sym_handler_name,
    STATE(32), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
    STATE(80), 2,
      sym_regular_attribute,
      sym_directive_attribute,
  [832] = 7,
    ACTIONS(187), 1,
      sym_attribute_name,
    ACTIONS(189), 1,
      sym_directive_name,
    ACTIONS(203), 1,
      anon_sym_GT,
    ACTIONS(205), 1,
      anon_sym_SLASH_GT,
    ACTIONS(185), 2,
      sym_binding_name,
      sym_handler_name,
    STATE(27), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
    STATE(80), 2,
      sym_regular_attribute,
      sym_directive_attribute,
  [857] = 7,
    ACTIONS(187), 1,
      sym_attribute_name,
    ACTIONS(189), 1,
      sym_directive_name,
    ACTIONS(207), 1,
      anon_sym_GT,
    ACTIONS(209), 1,
      anon_sym_SLASH_GT,
    ACTIONS(185), 2,
      sym_binding_name,
      sym_handler_name,
    STATE(27), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
    STATE(80), 2,
      sym_regular_attribute,
      sym_directive_attribute,
  [882] = 2,
    ACTIONS(213), 2,
      anon_sym_LT,
      sym_brace_text,
    ACTIONS(211), 7,
      ts_builtin_sym_end,
      sym_comment,
      sym_cdata,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR_LBRACE,
      sym_template_variable,
      sym_text,
  [896] = 3,
    ACTIONS(217), 1,
      anon_sym_DOT,
    STATE(58), 1,
      aux_sym_interp_path_repeat1,
    ACTIONS(215), 7,
      aux_sym_dir_string_token1,
      aux_sym_dir_number_token1,
      aux_sym_dir_identifier_token1,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_interp_string_token1,
      sym_interp_op,
  [912] = 2,
    ACTIONS(221), 2,
      anon_sym_LT,
      sym_brace_text,
    ACTIONS(219), 7,
      ts_builtin_sym_end,
      sym_comment,
      sym_cdata,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR_LBRACE,
      sym_template_variable,
      sym_text,
  [926] = 2,
    ACTIONS(225), 2,
      anon_sym_LT,
      sym_brace_text,
    ACTIONS(223), 7,
      ts_builtin_sym_end,
      sym_comment,
      sym_cdata,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR_LBRACE,
      sym_template_variable,
      sym_text,
  [940] = 6,
    ACTIONS(45), 1,
      aux_sym_dir_string_token1,
    ACTIONS(47), 1,
      aux_sym_dir_number_token1,
    ACTIONS(227), 1,
      anon_sym_RBRACK,
    ACTIONS(229), 1,
      aux_sym_dir_identifier_token1,
    STATE(14), 1,
      sym_dir_identifier,
    STATE(101), 4,
      sym__dir_atom,
      sym_dir_string,
      sym_dir_number,
      sym_dir_path,
  [962] = 2,
    ACTIONS(233), 2,
      anon_sym_LT,
      sym_brace_text,
    ACTIONS(231), 7,
      ts_builtin_sym_end,
      sym_comment,
      sym_cdata,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR_LBRACE,
      sym_template_variable,
      sym_text,
  [976] = 2,
    ACTIONS(237), 2,
      anon_sym_LT,
      sym_brace_text,
    ACTIONS(235), 7,
      ts_builtin_sym_end,
      sym_comment,
      sym_cdata,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR_LBRACE,
      sym_template_variable,
      sym_text,
  [990] = 2,
    ACTIONS(241), 2,
      anon_sym_LT,
      sym_brace_text,
    ACTIONS(239), 7,
      ts_builtin_sym_end,
      sym_comment,
      sym_cdata,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR_LBRACE,
      sym_template_variable,
      sym_text,
  [1004] = 3,
    ACTIONS(245), 1,
      anon_sym_DOT,
    STATE(42), 1,
      aux_sym_interp_path_repeat1,
    ACTIONS(243), 7,
      aux_sym_dir_string_token1,
      aux_sym_dir_number_token1,
      aux_sym_dir_identifier_token1,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_interp_string_token1,
      sym_interp_op,
  [1020] = 2,
    ACTIONS(250), 2,
      anon_sym_LT,
      sym_brace_text,
    ACTIONS(248), 7,
      ts_builtin_sym_end,
      sym_comment,
      sym_cdata,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR_LBRACE,
      sym_template_variable,
      sym_text,
  [1034] = 2,
    ACTIONS(254), 2,
      anon_sym_LT,
      sym_brace_text,
    ACTIONS(252), 7,
      ts_builtin_sym_end,
      sym_comment,
      sym_cdata,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR_LBRACE,
      sym_template_variable,
      sym_text,
  [1048] = 2,
    ACTIONS(258), 3,
      anon_sym_SQUOTE,
      sym_keyword_in,
      aux_sym_dir_identifier_token1,
    ACTIONS(256), 6,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      aux_sym_dir_string_token1,
      aux_sym_dir_number_token1,
      sym_dir_op,
      sym_template_variable,
  [1062] = 2,
    ACTIONS(262), 2,
      anon_sym_LT,
      sym_brace_text,
    ACTIONS(260), 7,
      ts_builtin_sym_end,
      sym_comment,
      sym_cdata,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR_LBRACE,
      sym_template_variable,
      sym_text,
  [1076] = 2,
    ACTIONS(266), 2,
      anon_sym_LT,
      sym_brace_text,
    ACTIONS(264), 7,
      ts_builtin_sym_end,
      sym_comment,
      sym_cdata,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR_LBRACE,
      sym_template_variable,
      sym_text,
  [1090] = 2,
    ACTIONS(270), 2,
      anon_sym_LT,
      sym_brace_text,
    ACTIONS(268), 7,
      ts_builtin_sym_end,
      sym_comment,
      sym_cdata,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR_LBRACE,
      sym_template_variable,
      sym_text,
  [1104] = 2,
    ACTIONS(274), 3,
      anon_sym_SQUOTE,
      sym_keyword_in,
      aux_sym_dir_identifier_token1,
    ACTIONS(272), 6,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      aux_sym_dir_string_token1,
      aux_sym_dir_number_token1,
      sym_dir_op,
      sym_template_variable,
  [1118] = 2,
    ACTIONS(278), 2,
      anon_sym_LT,
      sym_brace_text,
    ACTIONS(276), 7,
      ts_builtin_sym_end,
      sym_comment,
      sym_cdata,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR_LBRACE,
      sym_template_variable,
      sym_text,
  [1132] = 2,
    ACTIONS(282), 2,
      anon_sym_LT,
      sym_brace_text,
    ACTIONS(280), 7,
      ts_builtin_sym_end,
      sym_comment,
      sym_cdata,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR_LBRACE,
      sym_template_variable,
      sym_text,
  [1146] = 2,
    ACTIONS(286), 2,
      anon_sym_LT,
      sym_brace_text,
    ACTIONS(284), 7,
      ts_builtin_sym_end,
      sym_comment,
      sym_cdata,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR_LBRACE,
      sym_template_variable,
      sym_text,
  [1160] = 2,
    ACTIONS(290), 2,
      anon_sym_LT,
      sym_brace_text,
    ACTIONS(288), 7,
      ts_builtin_sym_end,
      sym_comment,
      sym_cdata,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR_LBRACE,
      sym_template_variable,
      sym_text,
  [1174] = 2,
    ACTIONS(294), 3,
      anon_sym_SQUOTE,
      sym_keyword_in,
      aux_sym_dir_identifier_token1,
    ACTIONS(292), 6,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      aux_sym_dir_string_token1,
      aux_sym_dir_number_token1,
      sym_dir_op,
      sym_template_variable,
  [1188] = 2,
    ACTIONS(298), 2,
      anon_sym_LT,
      sym_brace_text,
    ACTIONS(296), 7,
      ts_builtin_sym_end,
      sym_comment,
      sym_cdata,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR_LBRACE,
      sym_template_variable,
      sym_text,
  [1202] = 2,
    ACTIONS(302), 2,
      anon_sym_LT,
      sym_brace_text,
    ACTIONS(300), 7,
      ts_builtin_sym_end,
      sym_comment,
      sym_cdata,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR_LBRACE,
      sym_template_variable,
      sym_text,
  [1216] = 2,
    ACTIONS(306), 2,
      anon_sym_LT,
      sym_brace_text,
    ACTIONS(304), 7,
      ts_builtin_sym_end,
      sym_comment,
      sym_cdata,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR_LBRACE,
      sym_template_variable,
      sym_text,
  [1230] = 3,
    ACTIONS(217), 1,
      anon_sym_DOT,
    STATE(42), 1,
      aux_sym_interp_path_repeat1,
    ACTIONS(308), 7,
      aux_sym_dir_string_token1,
      aux_sym_dir_number_token1,
      aux_sym_dir_identifier_token1,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_interp_string_token1,
      sym_interp_op,
  [1246] = 5,
    ACTIONS(45), 1,
      aux_sym_dir_string_token1,
    ACTIONS(47), 1,
      aux_sym_dir_number_token1,
    ACTIONS(229), 1,
      aux_sym_dir_identifier_token1,
    STATE(14), 1,
      sym_dir_identifier,
    STATE(110), 4,
      sym__dir_atom,
      sym_dir_string,
      sym_dir_number,
      sym_dir_path,
  [1265] = 1,
    ACTIONS(310), 8,
      aux_sym_dir_string_token1,
      aux_sym_dir_number_token1,
      anon_sym_DOT,
      aux_sym_dir_identifier_token1,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_interp_string_token1,
      sym_interp_op,
  [1276] = 2,
    ACTIONS(314), 2,
      anon_sym_LT,
      sym_brace_text,
    ACTIONS(312), 6,
      sym_comment,
      sym_cdata,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR_LBRACE,
      sym_template_variable,
      sym_text,
  [1289] = 4,
    ACTIONS(318), 1,
      anon_sym_SQUOTE,
    ACTIONS(320), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(65), 2,
      sym_interpolation,
      aux_sym_quoted_value_single_repeat1,
    ACTIONS(316), 4,
      anon_sym_DOLLAR,
      sym__attr_fragment_s,
      sym_template_variable,
      sym__attr_brace_s,
  [1306] = 2,
    ACTIONS(324), 2,
      anon_sym_LT,
      sym_brace_text,
    ACTIONS(322), 6,
      sym_comment,
      sym_cdata,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR_LBRACE,
      sym_template_variable,
      sym_text,
  [1319] = 4,
    ACTIONS(326), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(64), 2,
      sym_interpolation,
      aux_sym_quoted_value_double_repeat1,
    ACTIONS(328), 4,
      anon_sym_DOLLAR,
      sym__attr_fragment_d,
      sym_template_variable,
      sym__attr_brace_d,
  [1336] = 4,
    ACTIONS(337), 1,
      anon_sym_SQUOTE,
    ACTIONS(339), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(65), 2,
      sym_interpolation,
      aux_sym_quoted_value_single_repeat1,
    ACTIONS(334), 4,
      anon_sym_DOLLAR,
      sym__attr_fragment_s,
      sym_template_variable,
      sym__attr_brace_s,
  [1353] = 1,
    ACTIONS(243), 8,
      aux_sym_dir_string_token1,
      aux_sym_dir_number_token1,
      anon_sym_DOT,
      aux_sym_dir_identifier_token1,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_interp_string_token1,
      sym_interp_op,
  [1364] = 4,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(68), 2,
      sym_interpolation,
      aux_sym_quoted_value_double_repeat1,
    ACTIONS(344), 4,
      anon_sym_DOLLAR,
      sym__attr_fragment_d,
      sym_template_variable,
      sym__attr_brace_d,
  [1381] = 4,
    ACTIONS(346), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    STATE(64), 2,
      sym_interpolation,
      aux_sym_quoted_value_double_repeat1,
    ACTIONS(350), 4,
      anon_sym_DOLLAR,
      sym__attr_fragment_d,
      sym_template_variable,
      sym__attr_brace_d,
  [1398] = 4,
    ACTIONS(320), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(354), 1,
      anon_sym_SQUOTE,
    STATE(62), 2,
      sym_interpolation,
      aux_sym_quoted_value_single_repeat1,
    ACTIONS(352), 4,
      anon_sym_DOLLAR,
      sym__attr_fragment_s,
      sym_template_variable,
      sym__attr_brace_s,
  [1415] = 3,
    ACTIONS(358), 1,
      anon_sym_EQ,
    ACTIONS(360), 1,
      sym_attribute_name,
    ACTIONS(356), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_binding_name,
      sym_handler_name,
      sym_directive_name,
  [1429] = 2,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(362), 6,
      aux_sym_dir_string_token1,
      aux_sym_dir_number_token1,
      aux_sym_dir_identifier_token1,
      anon_sym_RBRACE,
      aux_sym_interp_string_token1,
      sym_interp_op,
  [1441] = 2,
    ACTIONS(368), 1,
      sym_attribute_name,
    ACTIONS(366), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_binding_name,
      sym_handler_name,
      sym_directive_name,
  [1452] = 1,
    ACTIONS(370), 6,
      aux_sym_dir_string_token1,
      aux_sym_dir_number_token1,
      aux_sym_dir_identifier_token1,
      anon_sym_RBRACE,
      aux_sym_interp_string_token1,
      sym_interp_op,
  [1461] = 2,
    ACTIONS(374), 1,
      sym_attribute_name,
    ACTIONS(372), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_binding_name,
      sym_handler_name,
      sym_directive_name,
  [1472] = 1,
    ACTIONS(376), 6,
      aux_sym_dir_string_token1,
      aux_sym_dir_number_token1,
      aux_sym_dir_identifier_token1,
      anon_sym_RBRACE,
      aux_sym_interp_string_token1,
      sym_interp_op,
  [1481] = 2,
    ACTIONS(380), 1,
      sym_attribute_name,
    ACTIONS(378), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_binding_name,
      sym_handler_name,
      sym_directive_name,
  [1492] = 1,
    ACTIONS(382), 6,
      aux_sym_dir_string_token1,
      aux_sym_dir_number_token1,
      aux_sym_dir_identifier_token1,
      anon_sym_RBRACE,
      aux_sym_interp_string_token1,
      sym_interp_op,
  [1501] = 2,
    ACTIONS(386), 1,
      sym_attribute_name,
    ACTIONS(384), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_binding_name,
      sym_handler_name,
      sym_directive_name,
  [1512] = 2,
    ACTIONS(390), 1,
      sym_attribute_name,
    ACTIONS(388), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_binding_name,
      sym_handler_name,
      sym_directive_name,
  [1523] = 2,
    ACTIONS(394), 1,
      sym_attribute_name,
    ACTIONS(392), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_binding_name,
      sym_handler_name,
      sym_directive_name,
  [1534] = 1,
    ACTIONS(396), 6,
      aux_sym_dir_string_token1,
      aux_sym_dir_number_token1,
      aux_sym_dir_identifier_token1,
      anon_sym_RBRACE,
      aux_sym_interp_string_token1,
      sym_interp_op,
  [1543] = 2,
    ACTIONS(400), 1,
      sym_attribute_name,
    ACTIONS(398), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_binding_name,
      sym_handler_name,
      sym_directive_name,
  [1554] = 1,
    ACTIONS(402), 6,
      aux_sym_dir_string_token1,
      aux_sym_dir_number_token1,
      aux_sym_dir_identifier_token1,
      anon_sym_RBRACE,
      aux_sym_interp_string_token1,
      sym_interp_op,
  [1563] = 2,
    ACTIONS(406), 1,
      sym_attribute_name,
    ACTIONS(404), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_binding_name,
      sym_handler_name,
      sym_directive_name,
  [1574] = 2,
    ACTIONS(410), 1,
      sym_attribute_name,
    ACTIONS(408), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_binding_name,
      sym_handler_name,
      sym_directive_name,
  [1585] = 1,
    ACTIONS(298), 6,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      sym__attr_fragment_d,
      anon_sym_DOLLAR_LBRACE,
      sym_template_variable,
      sym__attr_brace_d,
  [1594] = 1,
    ACTIONS(241), 6,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      sym__attr_fragment_d,
      anon_sym_DOLLAR_LBRACE,
      sym_template_variable,
      sym__attr_brace_d,
  [1603] = 1,
    ACTIONS(298), 6,
      anon_sym_DOLLAR,
      anon_sym_SQUOTE,
      sym__attr_fragment_s,
      anon_sym_DOLLAR_LBRACE,
      sym_template_variable,
      sym__attr_brace_s,
  [1612] = 1,
    ACTIONS(241), 6,
      anon_sym_DOLLAR,
      anon_sym_SQUOTE,
      sym__attr_fragment_s,
      anon_sym_DOLLAR_LBRACE,
      sym_template_variable,
      sym__attr_brace_s,
  [1621] = 4,
    ACTIONS(412), 1,
      anon_sym_DQUOTE,
    ACTIONS(414), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      sym_unquoted_value,
    STATE(82), 3,
      sym__attribute_value,
      sym_quoted_value_double,
      sym_quoted_value_single,
  [1636] = 3,
    ACTIONS(418), 1,
      anon_sym_DOT,
    STATE(93), 1,
      aux_sym_interp_path_repeat1,
    ACTIONS(215), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1648] = 3,
    ACTIONS(420), 1,
      anon_sym_DOT,
    STATE(92), 1,
      aux_sym_interp_path_repeat1,
    ACTIONS(243), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1660] = 3,
    ACTIONS(418), 1,
      anon_sym_DOT,
    STATE(92), 1,
      aux_sym_interp_path_repeat1,
    ACTIONS(308), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1672] = 1,
    ACTIONS(243), 4,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1679] = 1,
    ACTIONS(310), 4,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1686] = 3,
    ACTIONS(423), 1,
      sym_tag_name,
    ACTIONS(425), 1,
      anon_sym_script,
    ACTIONS(427), 1,
      anon_sym_style,
  [1696] = 2,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(362), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1704] = 3,
    ACTIONS(431), 1,
      anon_sym_COMMA,
    ACTIONS(433), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      aux_sym_interp_call_repeat1,
  [1714] = 3,
    ACTIONS(435), 1,
      anon_sym_COMMA,
    ACTIONS(437), 1,
      anon_sym_RBRACK,
    STATE(106), 1,
      aux_sym_dir_array_repeat1,
  [1724] = 3,
    ACTIONS(431), 1,
      anon_sym_COMMA,
    ACTIONS(439), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      aux_sym_interp_call_repeat1,
  [1734] = 3,
    ACTIONS(435), 1,
      anon_sym_COMMA,
    ACTIONS(441), 1,
      anon_sym_RBRACK,
    STATE(99), 1,
      aux_sym_dir_array_repeat1,
  [1744] = 3,
    ACTIONS(443), 1,
      anon_sym_COMMA,
    ACTIONS(446), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      aux_sym_interp_call_repeat1,
  [1754] = 3,
    ACTIONS(431), 1,
      anon_sym_COMMA,
    ACTIONS(448), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      aux_sym_interp_call_repeat1,
  [1764] = 3,
    ACTIONS(431), 1,
      anon_sym_COMMA,
    ACTIONS(450), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      aux_sym_interp_call_repeat1,
  [1774] = 3,
    ACTIONS(452), 1,
      anon_sym_DQUOTE,
    ACTIONS(454), 1,
      anon_sym_SQUOTE,
    STATE(85), 1,
      sym_directive_value,
  [1784] = 3,
    ACTIONS(456), 1,
      anon_sym_COMMA,
    ACTIONS(459), 1,
      anon_sym_RBRACK,
    STATE(106), 1,
      aux_sym_dir_array_repeat1,
  [1794] = 1,
    ACTIONS(382), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1799] = 2,
    ACTIONS(461), 1,
      anon_sym_LT_SLASH,
    ACTIONS(463), 1,
      sym__raw_text_script,
  [1806] = 2,
    ACTIONS(465), 1,
      anon_sym_LT_SLASH,
    ACTIONS(467), 1,
      sym__raw_text_style,
  [1813] = 1,
    ACTIONS(459), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1818] = 1,
    ACTIONS(396), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1823] = 1,
    ACTIONS(402), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1828] = 1,
    ACTIONS(446), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1833] = 2,
    ACTIONS(469), 1,
      anon_sym_LT_SLASH,
    ACTIONS(471), 1,
      sym__raw_text_style,
  [1840] = 2,
    ACTIONS(146), 1,
      aux_sym_dir_identifier_token1,
    STATE(94), 1,
      sym_interp_identifier,
  [1847] = 2,
    ACTIONS(473), 1,
      anon_sym_LT_SLASH,
    ACTIONS(475), 1,
      sym__raw_text_script,
  [1854] = 2,
    ACTIONS(95), 1,
      aux_sym_dir_identifier_token1,
    STATE(66), 1,
      sym_interp_identifier,
  [1861] = 1,
    ACTIONS(370), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1866] = 1,
    ACTIONS(376), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1871] = 2,
    ACTIONS(229), 1,
      aux_sym_dir_identifier_token1,
    STATE(22), 1,
      sym_dir_identifier,
  [1878] = 1,
    ACTIONS(477), 1,
      anon_sym_style,
  [1882] = 1,
    ACTIONS(479), 1,
      anon_sym_GT,
  [1886] = 1,
    ACTIONS(481), 1,
      sym_tag_name,
  [1890] = 1,
    ACTIONS(483), 1,
      anon_sym_script,
  [1894] = 1,
    ACTIONS(473), 1,
      anon_sym_LT_SLASH,
  [1898] = 1,
    ACTIONS(485), 1,
      anon_sym_GT,
  [1902] = 1,
    ACTIONS(487), 1,
      anon_sym_script,
  [1906] = 1,
    ACTIONS(489), 1,
      anon_sym_GT,
  [1910] = 1,
    ACTIONS(491), 1,
      ts_builtin_sym_end,
  [1914] = 1,
    ACTIONS(493), 1,
      anon_sym_LT_SLASH,
  [1918] = 1,
    ACTIONS(495), 1,
      anon_sym_DQUOTE,
  [1922] = 1,
    ACTIONS(497), 1,
      anon_sym_style,
  [1926] = 1,
    ACTIONS(499), 1,
      anon_sym_script,
  [1930] = 1,
    ACTIONS(465), 1,
      anon_sym_LT_SLASH,
  [1934] = 1,
    ACTIONS(501), 1,
      anon_sym_GT,
  [1938] = 1,
    ACTIONS(503), 1,
      anon_sym_GT,
  [1942] = 1,
    ACTIONS(505), 1,
      anon_sym_GT,
  [1946] = 1,
    ACTIONS(507), 1,
      anon_sym_LT_SLASH,
  [1950] = 1,
    ACTIONS(509), 1,
      anon_sym_style,
  [1954] = 1,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
  [1958] = 1,
    ACTIONS(511), 1,
      anon_sym_EQ,
  [1962] = 1,
    ACTIONS(513), 1,
      anon_sym_GT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 72,
  [SMALL_STATE(5)] = 106,
  [SMALL_STATE(6)] = 139,
  [SMALL_STATE(7)] = 175,
  [SMALL_STATE(8)] = 211,
  [SMALL_STATE(9)] = 247,
  [SMALL_STATE(10)] = 283,
  [SMALL_STATE(11)] = 305,
  [SMALL_STATE(12)] = 335,
  [SMALL_STATE(13)] = 365,
  [SMALL_STATE(14)] = 395,
  [SMALL_STATE(15)] = 417,
  [SMALL_STATE(16)] = 447,
  [SMALL_STATE(17)] = 469,
  [SMALL_STATE(18)] = 499,
  [SMALL_STATE(19)] = 529,
  [SMALL_STATE(20)] = 559,
  [SMALL_STATE(21)] = 588,
  [SMALL_STATE(22)] = 605,
  [SMALL_STATE(23)] = 622,
  [SMALL_STATE(24)] = 651,
  [SMALL_STATE(25)] = 667,
  [SMALL_STATE(26)] = 693,
  [SMALL_STATE(27)] = 709,
  [SMALL_STATE(28)] = 732,
  [SMALL_STATE(29)] = 757,
  [SMALL_STATE(30)] = 782,
  [SMALL_STATE(31)] = 807,
  [SMALL_STATE(32)] = 832,
  [SMALL_STATE(33)] = 857,
  [SMALL_STATE(34)] = 882,
  [SMALL_STATE(35)] = 896,
  [SMALL_STATE(36)] = 912,
  [SMALL_STATE(37)] = 926,
  [SMALL_STATE(38)] = 940,
  [SMALL_STATE(39)] = 962,
  [SMALL_STATE(40)] = 976,
  [SMALL_STATE(41)] = 990,
  [SMALL_STATE(42)] = 1004,
  [SMALL_STATE(43)] = 1020,
  [SMALL_STATE(44)] = 1034,
  [SMALL_STATE(45)] = 1048,
  [SMALL_STATE(46)] = 1062,
  [SMALL_STATE(47)] = 1076,
  [SMALL_STATE(48)] = 1090,
  [SMALL_STATE(49)] = 1104,
  [SMALL_STATE(50)] = 1118,
  [SMALL_STATE(51)] = 1132,
  [SMALL_STATE(52)] = 1146,
  [SMALL_STATE(53)] = 1160,
  [SMALL_STATE(54)] = 1174,
  [SMALL_STATE(55)] = 1188,
  [SMALL_STATE(56)] = 1202,
  [SMALL_STATE(57)] = 1216,
  [SMALL_STATE(58)] = 1230,
  [SMALL_STATE(59)] = 1246,
  [SMALL_STATE(60)] = 1265,
  [SMALL_STATE(61)] = 1276,
  [SMALL_STATE(62)] = 1289,
  [SMALL_STATE(63)] = 1306,
  [SMALL_STATE(64)] = 1319,
  [SMALL_STATE(65)] = 1336,
  [SMALL_STATE(66)] = 1353,
  [SMALL_STATE(67)] = 1364,
  [SMALL_STATE(68)] = 1381,
  [SMALL_STATE(69)] = 1398,
  [SMALL_STATE(70)] = 1415,
  [SMALL_STATE(71)] = 1429,
  [SMALL_STATE(72)] = 1441,
  [SMALL_STATE(73)] = 1452,
  [SMALL_STATE(74)] = 1461,
  [SMALL_STATE(75)] = 1472,
  [SMALL_STATE(76)] = 1481,
  [SMALL_STATE(77)] = 1492,
  [SMALL_STATE(78)] = 1501,
  [SMALL_STATE(79)] = 1512,
  [SMALL_STATE(80)] = 1523,
  [SMALL_STATE(81)] = 1534,
  [SMALL_STATE(82)] = 1543,
  [SMALL_STATE(83)] = 1554,
  [SMALL_STATE(84)] = 1563,
  [SMALL_STATE(85)] = 1574,
  [SMALL_STATE(86)] = 1585,
  [SMALL_STATE(87)] = 1594,
  [SMALL_STATE(88)] = 1603,
  [SMALL_STATE(89)] = 1612,
  [SMALL_STATE(90)] = 1621,
  [SMALL_STATE(91)] = 1636,
  [SMALL_STATE(92)] = 1648,
  [SMALL_STATE(93)] = 1660,
  [SMALL_STATE(94)] = 1672,
  [SMALL_STATE(95)] = 1679,
  [SMALL_STATE(96)] = 1686,
  [SMALL_STATE(97)] = 1696,
  [SMALL_STATE(98)] = 1704,
  [SMALL_STATE(99)] = 1714,
  [SMALL_STATE(100)] = 1724,
  [SMALL_STATE(101)] = 1734,
  [SMALL_STATE(102)] = 1744,
  [SMALL_STATE(103)] = 1754,
  [SMALL_STATE(104)] = 1764,
  [SMALL_STATE(105)] = 1774,
  [SMALL_STATE(106)] = 1784,
  [SMALL_STATE(107)] = 1794,
  [SMALL_STATE(108)] = 1799,
  [SMALL_STATE(109)] = 1806,
  [SMALL_STATE(110)] = 1813,
  [SMALL_STATE(111)] = 1818,
  [SMALL_STATE(112)] = 1823,
  [SMALL_STATE(113)] = 1828,
  [SMALL_STATE(114)] = 1833,
  [SMALL_STATE(115)] = 1840,
  [SMALL_STATE(116)] = 1847,
  [SMALL_STATE(117)] = 1854,
  [SMALL_STATE(118)] = 1861,
  [SMALL_STATE(119)] = 1866,
  [SMALL_STATE(120)] = 1871,
  [SMALL_STATE(121)] = 1878,
  [SMALL_STATE(122)] = 1882,
  [SMALL_STATE(123)] = 1886,
  [SMALL_STATE(124)] = 1890,
  [SMALL_STATE(125)] = 1894,
  [SMALL_STATE(126)] = 1898,
  [SMALL_STATE(127)] = 1902,
  [SMALL_STATE(128)] = 1906,
  [SMALL_STATE(129)] = 1910,
  [SMALL_STATE(130)] = 1914,
  [SMALL_STATE(131)] = 1918,
  [SMALL_STATE(132)] = 1922,
  [SMALL_STATE(133)] = 1926,
  [SMALL_STATE(134)] = 1930,
  [SMALL_STATE(135)] = 1934,
  [SMALL_STATE(136)] = 1938,
  [SMALL_STATE(137)] = 1942,
  [SMALL_STATE(138)] = 1946,
  [SMALL_STATE(139)] = 1950,
  [SMALL_STATE(140)] = 1954,
  [SMALL_STATE(141)] = 1958,
  [SMALL_STATE(142)] = 1962,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_expression_repeat1, 2, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_expression_repeat1, 2, 0, 0),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_expression, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_expression, 1, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dir_path, 2, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dir_path, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpolation_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpolation_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpolation_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interpolation_repeat1, 2, 0, 0),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpolation_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dir_path, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dir_path, 1, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dir_path_repeat1, 2, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dir_path_repeat1, 2, 0, 0),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dir_path_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dir_identifier, 1, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dir_identifier, 1, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dir_string, 1, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dir_string, 1, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dir_number, 1, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dir_number, 1, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interp_path, 1, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 4, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 4, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 4, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 4, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interp_path_repeat1, 2, 0, 0),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interp_path_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 6, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 6, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 6, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 6, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dir_array, 2, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dir_array, 2, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 7, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 7, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 7, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 7, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dir_array, 3, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dir_array, 3, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 3, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 3, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 8, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 8, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 8, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 8, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dir_array, 4, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dir_array, 4, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 2, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 2, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 3, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 3, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interp_path, 2, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interp_identifier, 1, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4, 0, 0),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_value_double_repeat1, 2, 0, 0),
  [328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_value_double_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [331] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_value_double_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_value_single_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_value_single_repeat1, 2, 0, 0),
  [339] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_value_single_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regular_attribute, 1, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regular_attribute, 1, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interp_item, 1, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_value_single, 2, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_value_single, 2, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interp_call, 4, 0, 1),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_value, 2, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_value, 2, 0, 0),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interp_call, 5, 0, 1),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_value_double, 3, 0, 0),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_value_double, 3, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interp_call, 3, 0, 1),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_value_single, 3, 0, 0),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_value_single, 3, 0, 0),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_value, 3, 0, 0),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_value, 3, 0, 0),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1, 0, 0),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interp_string, 1, 0, 0),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regular_attribute, 3, 0, 0),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regular_attribute, 3, 0, 0),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interp_number, 1, 0, 0),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_value_double, 2, 0, 0),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_value_double, 2, 0, 0),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_attribute, 3, 0, 0),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_attribute, 3, 0, 0),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interp_path_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interp_call_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interp_call_repeat1, 2, 0, 0),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dir_array_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dir_array_repeat1, 2, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [491] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
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
    [ts_external_token__raw_text_script] = true,
  },
  [3] = {
    [ts_external_token__raw_text_style] = true,
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
