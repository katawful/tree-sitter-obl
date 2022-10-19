#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 109
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 84
#define ALIAS_COUNT 1
#define TOKEN_COUNT 50
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 12

enum {
  sym__identifier = 1,
  aux_sym_script_declaration_token1 = 2,
  aux_sym_script_declaration_token2 = 3,
  aux_sym_type_token1 = 4,
  aux_sym_type_token2 = 5,
  aux_sym_type_token3 = 6,
  aux_sym_type_token4 = 7,
  aux_sym_type_token5 = 8,
  aux_sym_type_token6 = 9,
  aux_sym_type_token7 = 10,
  aux_sym__start_block_token1 = 11,
  aux_sym_user_defined_function_token1 = 12,
  anon_sym_COMMA = 13,
  anon_sym_LBRACE = 14,
  anon_sym_RBRACE = 15,
  aux_sym__end_block_token1 = 16,
  anon_sym_word = 17,
  aux_sym_set_statement_token1 = 18,
  aux_sym_set_statement_token2 = 19,
  anon_sym_LPAREN = 20,
  anon_sym_RPAREN = 21,
  anon_sym_PIPE_PIPE = 22,
  anon_sym_AMP_AMP = 23,
  anon_sym_COLON_COLON = 24,
  anon_sym_EQ_EQ = 25,
  anon_sym_BANG_EQ = 26,
  anon_sym_GT = 27,
  anon_sym_GT_EQ = 28,
  anon_sym_LT = 29,
  anon_sym_LT_EQ = 30,
  anon_sym_PIPE = 31,
  anon_sym_AMP = 32,
  anon_sym_LT_LT = 33,
  anon_sym_GT_GT = 34,
  anon_sym_PLUS = 35,
  anon_sym_DASH = 36,
  anon_sym_STAR = 37,
  anon_sym_SLASH = 38,
  anon_sym_PERCENT = 39,
  anon_sym_CARET = 40,
  anon_sym_DOLLAR = 41,
  anon_sym_POUND = 42,
  anon_sym_BANG = 43,
  anon_sym_SEMI = 44,
  aux_sym_comment_token1 = 45,
  sym_string = 46,
  aux_sym_float_token1 = 47,
  aux_sym_integer_token1 = 48,
  sym__terminator = 49,
  sym_source_file = 50,
  sym_script_declaration = 51,
  sym_script_name = 52,
  sym__top_level = 53,
  sym_variable_declaration = 54,
  sym_type = 55,
  sym_variable = 56,
  sym_block = 57,
  sym__start_block = 58,
  sym_game_feature = 59,
  sym_user_defined_function = 60,
  sym__parameter_list = 61,
  sym__parameter_list_opt_comma = 62,
  sym__enclosed_parameter_list = 63,
  sym_parameter = 64,
  sym__inner_block = 65,
  sym__end_block = 66,
  sym_statement = 67,
  sym_set_statement = 68,
  sym_left = 69,
  sym_right = 70,
  sym__expression = 71,
  sym_parenthesized_expression = 72,
  sym__binary_expression = 73,
  sym_binary_operator = 74,
  sym_comment = 75,
  sym__literal = 76,
  sym_reference = 77,
  sym_float = 78,
  sym_integer = 79,
  aux_sym_source_file_repeat1 = 80,
  aux_sym_block_repeat1 = 81,
  aux_sym__parameter_list_repeat1 = 82,
  aux_sym__parameter_list_opt_comma_repeat1 = 83,
  anon_alias_sym_parameter = 84,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__identifier] = "_identifier",
  [aux_sym_script_declaration_token1] = "scn",
  [aux_sym_script_declaration_token2] = "scriptname",
  [aux_sym_type_token1] = "int",
  [aux_sym_type_token2] = "short",
  [aux_sym_type_token3] = "long",
  [aux_sym_type_token4] = "float",
  [aux_sym_type_token5] = "ref",
  [aux_sym_type_token6] = "array_var",
  [aux_sym_type_token7] = "string_var",
  [aux_sym__start_block_token1] = "begin",
  [aux_sym_user_defined_function_token1] = "function",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym__end_block_token1] = "end",
  [anon_sym_word] = "word",
  [aux_sym_set_statement_token1] = "set",
  [aux_sym_set_statement_token2] = "to",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_PIPE] = "|",
  [anon_sym_AMP] = "&",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_CARET] = "^",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_POUND] = "#",
  [anon_sym_BANG] = "!",
  [anon_sym_SEMI] = ";",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_string] = "string",
  [aux_sym_float_token1] = "float_token1",
  [aux_sym_integer_token1] = "integer_token1",
  [sym__terminator] = "_terminator",
  [sym_source_file] = "source_file",
  [sym_script_declaration] = "script_declaration",
  [sym_script_name] = "script_name",
  [sym__top_level] = "_top_level",
  [sym_variable_declaration] = "variable_declaration",
  [sym_type] = "type",
  [sym_variable] = "variable",
  [sym_block] = "block",
  [sym__start_block] = "_start_block",
  [sym_game_feature] = "game_feature",
  [sym_user_defined_function] = "user_defined_function",
  [sym__parameter_list] = "_parameter_list",
  [sym__parameter_list_opt_comma] = "_parameter_list_opt_comma",
  [sym__enclosed_parameter_list] = "_enclosed_parameter_list",
  [sym_parameter] = "parameter",
  [sym__inner_block] = "_inner_block",
  [sym__end_block] = "_end_block",
  [sym_statement] = "statement",
  [sym_set_statement] = "set_statement",
  [sym_left] = "left",
  [sym_right] = "right",
  [sym__expression] = "_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym__binary_expression] = "_binary_expression",
  [sym_binary_operator] = "binary_operator",
  [sym_comment] = "comment",
  [sym__literal] = "_literal",
  [sym_reference] = "reference",
  [sym_float] = "float",
  [sym_integer] = "integer",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym__parameter_list_repeat1] = "_parameter_list_repeat1",
  [aux_sym__parameter_list_opt_comma_repeat1] = "_parameter_list_opt_comma_repeat1",
  [anon_alias_sym_parameter] = "parameter",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__identifier] = sym__identifier,
  [aux_sym_script_declaration_token1] = aux_sym_script_declaration_token1,
  [aux_sym_script_declaration_token2] = aux_sym_script_declaration_token2,
  [aux_sym_type_token1] = aux_sym_type_token1,
  [aux_sym_type_token2] = aux_sym_type_token2,
  [aux_sym_type_token3] = aux_sym_type_token3,
  [aux_sym_type_token4] = aux_sym_type_token4,
  [aux_sym_type_token5] = aux_sym_type_token5,
  [aux_sym_type_token6] = aux_sym_type_token6,
  [aux_sym_type_token7] = aux_sym_type_token7,
  [aux_sym__start_block_token1] = aux_sym__start_block_token1,
  [aux_sym_user_defined_function_token1] = aux_sym_user_defined_function_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym__end_block_token1] = aux_sym__end_block_token1,
  [anon_sym_word] = anon_sym_word,
  [aux_sym_set_statement_token1] = aux_sym_set_statement_token1,
  [aux_sym_set_statement_token2] = aux_sym_set_statement_token2,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_string] = sym_string,
  [aux_sym_float_token1] = aux_sym_float_token1,
  [aux_sym_integer_token1] = aux_sym_integer_token1,
  [sym__terminator] = sym__terminator,
  [sym_source_file] = sym_source_file,
  [sym_script_declaration] = sym_script_declaration,
  [sym_script_name] = sym_script_name,
  [sym__top_level] = sym__top_level,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_type] = sym_type,
  [sym_variable] = sym_variable,
  [sym_block] = sym_block,
  [sym__start_block] = sym__start_block,
  [sym_game_feature] = sym_game_feature,
  [sym_user_defined_function] = sym_user_defined_function,
  [sym__parameter_list] = sym__parameter_list,
  [sym__parameter_list_opt_comma] = sym__parameter_list_opt_comma,
  [sym__enclosed_parameter_list] = sym__enclosed_parameter_list,
  [sym_parameter] = sym_parameter,
  [sym__inner_block] = sym__inner_block,
  [sym__end_block] = sym__end_block,
  [sym_statement] = sym_statement,
  [sym_set_statement] = sym_set_statement,
  [sym_left] = sym_left,
  [sym_right] = sym_right,
  [sym__expression] = sym__expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym__binary_expression] = sym__binary_expression,
  [sym_binary_operator] = sym_binary_operator,
  [sym_comment] = sym_comment,
  [sym__literal] = sym__literal,
  [sym_reference] = sym_reference,
  [sym_float] = sym_float,
  [sym_integer] = sym_integer,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym__parameter_list_repeat1] = aux_sym__parameter_list_repeat1,
  [aux_sym__parameter_list_opt_comma_repeat1] = aux_sym__parameter_list_opt_comma_repeat1,
  [anon_alias_sym_parameter] = anon_alias_sym_parameter,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_script_declaration_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_script_declaration_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_type_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_type_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_type_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_type_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_type_token5] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_type_token6] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_type_token7] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__start_block_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_user_defined_function_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__end_block_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_word] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_set_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_set_statement_token2] = {
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
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_float_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__terminator] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_script_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_script_name] = {
    .visible = true,
    .named = true,
  },
  [sym__top_level] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__start_block] = {
    .visible = false,
    .named = true,
  },
  [sym_game_feature] = {
    .visible = true,
    .named = true,
  },
  [sym_user_defined_function] = {
    .visible = true,
    .named = true,
  },
  [sym__parameter_list] = {
    .visible = false,
    .named = true,
  },
  [sym__parameter_list_opt_comma] = {
    .visible = false,
    .named = true,
  },
  [sym__enclosed_parameter_list] = {
    .visible = false,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym__inner_block] = {
    .visible = false,
    .named = true,
  },
  [sym__end_block] = {
    .visible = false,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_set_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_left] = {
    .visible = true,
    .named = true,
  },
  [sym_right] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__binary_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_binary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__parameter_list_opt_comma_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_parameter] = {
    .visible = true,
    .named = false,
  },
};

enum {
  field_float = 1,
  field_integer = 2,
  field_left = 3,
  field_reference = 4,
  field_right = 5,
  field_string = 6,
  field_variable = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_float] = "float",
  [field_integer] = "integer",
  [field_left] = "left",
  [field_reference] = "reference",
  [field_right] = "right",
  [field_string] = "string",
  [field_variable] = "variable",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 4},
  [3] = {.index = 5, .length = 1},
  [4] = {.index = 6, .length = 1},
  [5] = {.index = 7, .length = 1},
  [6] = {.index = 8, .length = 1},
  [7] = {.index = 9, .length = 1},
  [8] = {.index = 10, .length = 5},
  [9] = {.index = 1, .length = 4},
  [10] = {.index = 15, .length = 4},
  [11] = {.index = 19, .length = 8},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_string, 0},
  [1] =
    {field_float, 0, .inherited = true},
    {field_integer, 0, .inherited = true},
    {field_reference, 0, .inherited = true},
    {field_string, 0, .inherited = true},
  [5] =
    {field_reference, 0},
  [6] =
    {field_float, 0},
  [7] =
    {field_integer, 0},
  [8] =
    {field_variable, 1},
  [9] =
    {field_left, 0},
  [10] =
    {field_float, 0, .inherited = true},
    {field_integer, 0, .inherited = true},
    {field_reference, 0, .inherited = true},
    {field_right, 0},
    {field_string, 0, .inherited = true},
  [15] =
    {field_float, 1, .inherited = true},
    {field_integer, 1, .inherited = true},
    {field_reference, 1, .inherited = true},
    {field_string, 1, .inherited = true},
  [19] =
    {field_float, 0, .inherited = true},
    {field_float, 2, .inherited = true},
    {field_integer, 0, .inherited = true},
    {field_integer, 2, .inherited = true},
    {field_reference, 0, .inherited = true},
    {field_reference, 2, .inherited = true},
    {field_string, 0, .inherited = true},
    {field_string, 2, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [0] = anon_alias_sym_parameter,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__literal, 2,
    sym__literal,
    anon_alias_sym_parameter,
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
  [10] = 9,
  [11] = 11,
  [12] = 12,
  [13] = 12,
  [14] = 6,
  [15] = 15,
  [16] = 2,
  [17] = 17,
  [18] = 15,
  [19] = 19,
  [20] = 20,
  [21] = 3,
  [22] = 19,
  [23] = 20,
  [24] = 4,
  [25] = 5,
  [26] = 17,
  [27] = 7,
  [28] = 8,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 35,
  [37] = 37,
  [38] = 33,
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
  [54] = 7,
  [55] = 55,
  [56] = 2,
  [57] = 3,
  [58] = 4,
  [59] = 5,
  [60] = 60,
  [61] = 61,
  [62] = 6,
  [63] = 8,
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
  [87] = 61,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 97,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '!') ADVANCE(43);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '$') ADVANCE(41);
      if (lookahead == '%') ADVANCE(39);
      if (lookahead == '&') ADVANCE(32);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '+') ADVANCE(35);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == ';') ADVANCE(45);
      if (lookahead == '<') ADVANCE(29);
      if (lookahead == '=') ADVANCE(9);
      if (lookahead == '>') ADVANCE(27);
      if (lookahead == '\\') SKIP(15)
      if (lookahead == '^') ADVANCE(40);
      if (lookahead == '{') ADVANCE(18);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '}') ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(10)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(11)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '\r') ADVANCE(47);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(24);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(26);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(25);
      END_STATE();
    case 10:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '%') ADVANCE(39);
      if (lookahead == '&') ADVANCE(32);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '+') ADVANCE(35);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == ';') ADVANCE(45);
      if (lookahead == '<') ADVANCE(29);
      if (lookahead == '=') ADVANCE(9);
      if (lookahead == '>') ADVANCE(27);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '^') ADVANCE(40);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '}') ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == ';') ADVANCE(45);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '}') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 13:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(48);
      if (lookahead == '\r') ADVANCE(50);
      END_STATE();
    case 14:
      if (eof) ADVANCE(16);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 15:
      if (eof) ADVANCE(16);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(14)
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '>') ADVANCE(34);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(33);
      if (lookahead == '=') ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(22);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(23);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(26);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead == ';') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(13);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\\') SKIP(1)
      if (lookahead == '_') ADVANCE(2);
      if (lookahead == 'w') ADVANCE(3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(4);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(5);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(7);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(8);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(9);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(10);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(11);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(12);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 2:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(14);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 4:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 5:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 6:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(19);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 8:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 9:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 10:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 11:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(24);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(25);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(26);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(27);
      END_STATE();
    case 12:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 14:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 16:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 17:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(31);
      END_STATE();
    case 18:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(32);
      END_STATE();
    case 19:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 20:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 21:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(35);
      END_STATE();
    case 22:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 23:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(37);
      END_STATE();
    case 24:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(38);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 25:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(40);
      END_STATE();
    case 26:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 27:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_set_statement_token2);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(43);
      END_STATE();
    case 30:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 31:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym__end_block_token1);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 34:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_type_token1);
      END_STATE();
    case 36:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(48);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_type_token5);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_script_declaration_token1);
      END_STATE();
    case 39:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_set_statement_token1);
      END_STATE();
    case 41:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 42:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_word);
      END_STATE();
    case 44:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(52);
      END_STATE();
    case 45:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 46:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(54);
      END_STATE();
    case 47:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(55);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_type_token3);
      END_STATE();
    case 49:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(56);
      END_STATE();
    case 50:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(57);
      END_STATE();
    case 51:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 52:
      if (lookahead == '_') ADVANCE(59);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym__start_block_token1);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_type_token4);
      END_STATE();
    case 55:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 56:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(61);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_type_token2);
      END_STATE();
    case 58:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(62);
      END_STATE();
    case 59:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(63);
      END_STATE();
    case 60:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 61:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 62:
      if (lookahead == '_') ADVANCE(66);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 64:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 66:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(70);
      END_STATE();
    case 67:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_user_defined_function_token1);
      END_STATE();
    case 69:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(72);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_type_token6);
      END_STATE();
    case 72:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 73:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_script_declaration_token2);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_type_token7);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10, .external_lex_state = 1},
  [11] = {.lex_state = 10, .external_lex_state = 1},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 10, .external_lex_state = 1},
  [15] = {.lex_state = 10, .external_lex_state = 1},
  [16] = {.lex_state = 10, .external_lex_state = 1},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 10, .external_lex_state = 1},
  [22] = {.lex_state = 10, .external_lex_state = 1},
  [23] = {.lex_state = 10, .external_lex_state = 1},
  [24] = {.lex_state = 10, .external_lex_state = 1},
  [25] = {.lex_state = 10, .external_lex_state = 1},
  [26] = {.lex_state = 10, .external_lex_state = 1},
  [27] = {.lex_state = 10, .external_lex_state = 1},
  [28] = {.lex_state = 10, .external_lex_state = 1},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 11},
  [33] = {.lex_state = 11},
  [34] = {.lex_state = 11, .external_lex_state = 1},
  [35] = {.lex_state = 11},
  [36] = {.lex_state = 11},
  [37] = {.lex_state = 11, .external_lex_state = 1},
  [38] = {.lex_state = 11},
  [39] = {.lex_state = 11, .external_lex_state = 1},
  [40] = {.lex_state = 11},
  [41] = {.lex_state = 11, .external_lex_state = 1},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 11},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 11},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 11, .external_lex_state = 1},
  [55] = {.lex_state = 11, .external_lex_state = 1},
  [56] = {.lex_state = 11, .external_lex_state = 1},
  [57] = {.lex_state = 11, .external_lex_state = 1},
  [58] = {.lex_state = 11, .external_lex_state = 1},
  [59] = {.lex_state = 11, .external_lex_state = 1},
  [60] = {.lex_state = 11, .external_lex_state = 1},
  [61] = {.lex_state = 11, .external_lex_state = 1},
  [62] = {.lex_state = 11, .external_lex_state = 1},
  [63] = {.lex_state = 11, .external_lex_state = 1},
  [64] = {.lex_state = 11},
  [65] = {.lex_state = 11},
  [66] = {.lex_state = 11},
  [67] = {.lex_state = 11},
  [68] = {.lex_state = 11},
  [69] = {.lex_state = 11},
  [70] = {.lex_state = 11},
  [71] = {.lex_state = 11},
  [72] = {.lex_state = 11},
  [73] = {.lex_state = 11},
  [74] = {.lex_state = 11},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0, .external_lex_state = 1},
  [89] = {.lex_state = 0, .external_lex_state = 1},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0, .external_lex_state = 1},
  [92] = {.lex_state = 0, .external_lex_state = 1},
  [93] = {.lex_state = 0, .external_lex_state = 1},
  [94] = {.lex_state = 0, .external_lex_state = 1},
  [95] = {.lex_state = 0, .external_lex_state = 1},
  [96] = {.lex_state = 0, .external_lex_state = 1},
  [97] = {.lex_state = 0, .external_lex_state = 1},
  [98] = {.lex_state = 0, .external_lex_state = 1},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 49},
  [101] = {.lex_state = 0, .external_lex_state = 1},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0, .external_lex_state = 1},
  [105] = {.lex_state = 0, .external_lex_state = 1},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {(TSStateId)(-1)},
};

enum {
  ts_external_token__terminator = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__terminator] = sym__terminator,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__terminator] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__identifier] = ACTIONS(1),
    [aux_sym_script_declaration_token1] = ACTIONS(1),
    [aux_sym_script_declaration_token2] = ACTIONS(1),
    [aux_sym_type_token1] = ACTIONS(1),
    [aux_sym_type_token2] = ACTIONS(1),
    [aux_sym_type_token3] = ACTIONS(1),
    [aux_sym_type_token4] = ACTIONS(1),
    [aux_sym_type_token5] = ACTIONS(1),
    [aux_sym_type_token6] = ACTIONS(1),
    [aux_sym_type_token7] = ACTIONS(1),
    [aux_sym__start_block_token1] = ACTIONS(1),
    [aux_sym_user_defined_function_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym__end_block_token1] = ACTIONS(1),
    [anon_sym_word] = ACTIONS(1),
    [aux_sym_set_statement_token1] = ACTIONS(1),
    [aux_sym_set_statement_token2] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(3),
    [sym_string] = ACTIONS(1),
    [sym__terminator] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(106),
    [sym_script_declaration] = STATE(31),
    [sym_comment] = STATE(1),
    [aux_sym_script_declaration_token1] = ACTIONS(5),
    [aux_sym_script_declaration_token2] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(2), 1,
      sym_comment,
    ACTIONS(9), 4,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(7), 18,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_COLON_COLON,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [33] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(3), 1,
      sym_comment,
    ACTIONS(13), 4,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(11), 18,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_COLON_COLON,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [66] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(4), 1,
      sym_comment,
    ACTIONS(17), 4,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(15), 18,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_COLON_COLON,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [99] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(5), 1,
      sym_comment,
    ACTIONS(21), 4,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(19), 18,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_COLON_COLON,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [132] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(6), 1,
      sym_comment,
    ACTIONS(25), 4,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(23), 18,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_COLON_COLON,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [165] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(7), 1,
      sym_comment,
    ACTIONS(29), 4,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(27), 18,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_COLON_COLON,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [198] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(8), 1,
      sym_comment,
    ACTIONS(33), 4,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(31), 18,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_COLON_COLON,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [231] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(9), 1,
      sym_comment,
    STATE(38), 1,
      sym_binary_operator,
    ACTIONS(37), 4,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(35), 16,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_COLON_COLON,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [265] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(10), 1,
      sym_comment,
    STATE(33), 1,
      sym_binary_operator,
    ACTIONS(37), 4,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(35), 16,
      sym__terminator,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_COLON_COLON,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [299] = 16,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(39), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(41), 1,
      anon_sym_AMP_AMP,
    ACTIONS(43), 1,
      anon_sym_COLON_COLON,
    ACTIONS(51), 1,
      anon_sym_PIPE,
    ACTIONS(53), 1,
      anon_sym_AMP,
    ACTIONS(61), 1,
      anon_sym_CARET,
    ACTIONS(63), 1,
      sym__terminator,
    STATE(11), 1,
      sym_comment,
    STATE(33), 1,
      sym_binary_operator,
    ACTIONS(45), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(47), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(49), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(55), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(57), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(59), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [355] = 16,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(39), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(41), 1,
      anon_sym_AMP_AMP,
    ACTIONS(43), 1,
      anon_sym_COLON_COLON,
    ACTIONS(51), 1,
      anon_sym_PIPE,
    ACTIONS(53), 1,
      anon_sym_AMP,
    ACTIONS(61), 1,
      anon_sym_CARET,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    STATE(12), 1,
      sym_comment,
    STATE(38), 1,
      sym_binary_operator,
    ACTIONS(45), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(47), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(49), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(55), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(57), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(59), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [411] = 16,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(39), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(41), 1,
      anon_sym_AMP_AMP,
    ACTIONS(43), 1,
      anon_sym_COLON_COLON,
    ACTIONS(51), 1,
      anon_sym_PIPE,
    ACTIONS(53), 1,
      anon_sym_AMP,
    ACTIONS(61), 1,
      anon_sym_CARET,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    STATE(13), 1,
      sym_comment,
    STATE(38), 1,
      sym_binary_operator,
    ACTIONS(45), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(47), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(49), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(55), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(57), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(59), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [467] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(14), 1,
      sym_comment,
    ACTIONS(25), 4,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(23), 16,
      sym__terminator,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_COLON_COLON,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [498] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(15), 1,
      sym_comment,
    ACTIONS(71), 4,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(69), 16,
      sym__terminator,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_COLON_COLON,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [529] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(16), 1,
      sym_comment,
    ACTIONS(9), 4,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(7), 16,
      sym__terminator,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_COLON_COLON,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [560] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(17), 1,
      sym_comment,
    ACTIONS(75), 4,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(73), 16,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_COLON_COLON,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [591] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(18), 1,
      sym_comment,
    ACTIONS(71), 4,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(69), 16,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_COLON_COLON,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [622] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(19), 1,
      sym_comment,
    ACTIONS(71), 4,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(69), 16,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_COLON_COLON,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [653] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(20), 1,
      sym_comment,
    ACTIONS(79), 4,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(77), 16,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_COLON_COLON,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [684] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(21), 1,
      sym_comment,
    ACTIONS(13), 4,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(11), 16,
      sym__terminator,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_COLON_COLON,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [715] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(22), 1,
      sym_comment,
    ACTIONS(71), 4,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(69), 16,
      sym__terminator,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_COLON_COLON,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [746] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(23), 1,
      sym_comment,
    ACTIONS(79), 4,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(77), 16,
      sym__terminator,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_COLON_COLON,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [777] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(24), 1,
      sym_comment,
    ACTIONS(17), 4,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(15), 16,
      sym__terminator,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_COLON_COLON,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [808] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(25), 1,
      sym_comment,
    ACTIONS(21), 4,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(19), 16,
      sym__terminator,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_COLON_COLON,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [839] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(26), 1,
      sym_comment,
    ACTIONS(75), 4,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(73), 16,
      sym__terminator,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_COLON_COLON,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [870] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(27), 1,
      sym_comment,
    ACTIONS(29), 4,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(27), 16,
      sym__terminator,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_COLON_COLON,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [901] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(28), 1,
      sym_comment,
    ACTIONS(33), 4,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(31), 16,
      sym__terminator,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_COLON_COLON,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [932] = 10,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(85), 1,
      aux_sym__start_block_token1,
    STATE(29), 1,
      sym_comment,
    STATE(30), 1,
      aux_sym_source_file_repeat1,
    STATE(46), 1,
      sym__top_level,
    STATE(52), 1,
      sym__start_block,
    STATE(85), 1,
      sym_type,
    STATE(45), 2,
      sym_variable_declaration,
      sym_block,
    ACTIONS(83), 7,
      aux_sym_type_token1,
      aux_sym_type_token2,
      aux_sym_type_token3,
      aux_sym_type_token4,
      aux_sym_type_token5,
      aux_sym_type_token6,
      aux_sym_type_token7,
  [970] = 9,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(92), 1,
      aux_sym__start_block_token1,
    STATE(46), 1,
      sym__top_level,
    STATE(52), 1,
      sym__start_block,
    STATE(85), 1,
      sym_type,
    STATE(30), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(45), 2,
      sym_variable_declaration,
      sym_block,
    ACTIONS(89), 7,
      aux_sym_type_token1,
      aux_sym_type_token2,
      aux_sym_type_token3,
      aux_sym_type_token4,
      aux_sym_type_token5,
      aux_sym_type_token6,
      aux_sym_type_token7,
  [1006] = 10,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(85), 1,
      aux_sym__start_block_token1,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      aux_sym_source_file_repeat1,
    STATE(31), 1,
      sym_comment,
    STATE(46), 1,
      sym__top_level,
    STATE(52), 1,
      sym__start_block,
    STATE(85), 1,
      sym_type,
    STATE(45), 2,
      sym_variable_declaration,
      sym_block,
    ACTIONS(83), 7,
      aux_sym_type_token1,
      aux_sym_type_token2,
      aux_sym_type_token3,
      aux_sym_type_token4,
      aux_sym_type_token5,
      aux_sym_type_token6,
      aux_sym_type_token7,
  [1044] = 15,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      sym__identifier,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym_string,
    ACTIONS(103), 1,
      aux_sym_float_token1,
    ACTIONS(105), 1,
      aux_sym_integer_token1,
    STATE(11), 1,
      sym__expression,
    STATE(14), 1,
      sym_reference,
    STATE(15), 1,
      sym__literal,
    STATE(22), 1,
      sym__binary_expression,
    STATE(23), 1,
      sym_parenthesized_expression,
    STATE(27), 1,
      sym_float,
    STATE(28), 1,
      sym_integer,
    STATE(32), 1,
      sym_comment,
    STATE(93), 1,
      sym_right,
  [1090] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      sym__identifier,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym_string,
    ACTIONS(103), 1,
      aux_sym_float_token1,
    ACTIONS(105), 1,
      aux_sym_integer_token1,
    STATE(10), 1,
      sym__expression,
    STATE(14), 1,
      sym_reference,
    STATE(15), 1,
      sym__literal,
    STATE(22), 1,
      sym__binary_expression,
    STATE(23), 1,
      sym_parenthesized_expression,
    STATE(27), 1,
      sym_float,
    STATE(28), 1,
      sym_integer,
    STATE(33), 1,
      sym_comment,
  [1133] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(107), 1,
      sym__identifier,
    ACTIONS(109), 1,
      anon_sym_COMMA,
    ACTIONS(111), 1,
      sym_string,
    ACTIONS(113), 1,
      aux_sym_float_token1,
    ACTIONS(115), 1,
      aux_sym_integer_token1,
    ACTIONS(117), 1,
      sym__terminator,
    STATE(34), 1,
      sym_comment,
    STATE(39), 1,
      aux_sym__parameter_list_opt_comma_repeat1,
    STATE(54), 1,
      sym_float,
    STATE(55), 1,
      sym_parameter,
    STATE(61), 1,
      sym__literal,
    STATE(62), 1,
      sym_reference,
    STATE(63), 1,
      sym_integer,
  [1176] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(119), 1,
      sym__identifier,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_string,
    ACTIONS(125), 1,
      aux_sym_float_token1,
    ACTIONS(127), 1,
      aux_sym_integer_token1,
    STATE(6), 1,
      sym_reference,
    STATE(7), 1,
      sym_float,
    STATE(8), 1,
      sym_integer,
    STATE(12), 1,
      sym__expression,
    STATE(18), 1,
      sym__literal,
    STATE(19), 1,
      sym__binary_expression,
    STATE(20), 1,
      sym_parenthesized_expression,
    STATE(35), 1,
      sym_comment,
  [1219] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(119), 1,
      sym__identifier,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_string,
    ACTIONS(125), 1,
      aux_sym_float_token1,
    ACTIONS(127), 1,
      aux_sym_integer_token1,
    STATE(6), 1,
      sym_reference,
    STATE(7), 1,
      sym_float,
    STATE(8), 1,
      sym_integer,
    STATE(13), 1,
      sym__expression,
    STATE(18), 1,
      sym__literal,
    STATE(19), 1,
      sym__binary_expression,
    STATE(20), 1,
      sym_parenthesized_expression,
    STATE(36), 1,
      sym_comment,
  [1262] = 13,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(129), 1,
      sym__identifier,
    ACTIONS(132), 1,
      anon_sym_COMMA,
    ACTIONS(135), 1,
      sym_string,
    ACTIONS(138), 1,
      aux_sym_float_token1,
    ACTIONS(141), 1,
      aux_sym_integer_token1,
    ACTIONS(144), 1,
      sym__terminator,
    STATE(54), 1,
      sym_float,
    STATE(55), 1,
      sym_parameter,
    STATE(61), 1,
      sym__literal,
    STATE(62), 1,
      sym_reference,
    STATE(63), 1,
      sym_integer,
    STATE(37), 2,
      sym_comment,
      aux_sym__parameter_list_opt_comma_repeat1,
  [1303] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(119), 1,
      sym__identifier,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_string,
    ACTIONS(125), 1,
      aux_sym_float_token1,
    ACTIONS(127), 1,
      aux_sym_integer_token1,
    STATE(6), 1,
      sym_reference,
    STATE(7), 1,
      sym_float,
    STATE(8), 1,
      sym_integer,
    STATE(9), 1,
      sym__expression,
    STATE(18), 1,
      sym__literal,
    STATE(19), 1,
      sym__binary_expression,
    STATE(20), 1,
      sym_parenthesized_expression,
    STATE(38), 1,
      sym_comment,
  [1346] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(107), 1,
      sym__identifier,
    ACTIONS(109), 1,
      anon_sym_COMMA,
    ACTIONS(111), 1,
      sym_string,
    ACTIONS(113), 1,
      aux_sym_float_token1,
    ACTIONS(115), 1,
      aux_sym_integer_token1,
    ACTIONS(146), 1,
      sym__terminator,
    STATE(37), 1,
      aux_sym__parameter_list_opt_comma_repeat1,
    STATE(39), 1,
      sym_comment,
    STATE(54), 1,
      sym_float,
    STATE(55), 1,
      sym_parameter,
    STATE(61), 1,
      sym__literal,
    STATE(62), 1,
      sym_reference,
    STATE(63), 1,
      sym_integer,
  [1389] = 13,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(119), 1,
      sym__identifier,
    ACTIONS(123), 1,
      sym_string,
    ACTIONS(125), 1,
      aux_sym_float_token1,
    ACTIONS(127), 1,
      aux_sym_integer_token1,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym_reference,
    STATE(7), 1,
      sym_float,
    STATE(8), 1,
      sym_integer,
    STATE(40), 1,
      sym_comment,
    STATE(79), 1,
      sym_parameter,
    STATE(87), 1,
      sym__literal,
    STATE(102), 1,
      sym__parameter_list,
  [1429] = 13,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(107), 1,
      sym__identifier,
    ACTIONS(111), 1,
      sym_string,
    ACTIONS(113), 1,
      aux_sym_float_token1,
    ACTIONS(115), 1,
      aux_sym_integer_token1,
    ACTIONS(150), 1,
      sym__terminator,
    STATE(34), 1,
      sym_parameter,
    STATE(41), 1,
      sym_comment,
    STATE(54), 1,
      sym_float,
    STATE(61), 1,
      sym__literal,
    STATE(62), 1,
      sym_reference,
    STATE(63), 1,
      sym_integer,
    STATE(101), 1,
      sym__parameter_list_opt_comma,
  [1469] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(42), 1,
      sym_comment,
    ACTIONS(152), 9,
      ts_builtin_sym_end,
      aux_sym_type_token1,
      aux_sym_type_token2,
      aux_sym_type_token3,
      aux_sym_type_token4,
      aux_sym_type_token5,
      aux_sym_type_token6,
      aux_sym_type_token7,
      aux_sym__start_block_token1,
  [1487] = 11,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(107), 1,
      sym__identifier,
    ACTIONS(111), 1,
      sym_string,
    ACTIONS(113), 1,
      aux_sym_float_token1,
    ACTIONS(115), 1,
      aux_sym_integer_token1,
    STATE(43), 1,
      sym_comment,
    STATE(54), 1,
      sym_float,
    STATE(60), 1,
      sym_parameter,
    STATE(61), 1,
      sym__literal,
    STATE(62), 1,
      sym_reference,
    STATE(63), 1,
      sym_integer,
  [1521] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(44), 1,
      sym_comment,
    ACTIONS(154), 9,
      ts_builtin_sym_end,
      aux_sym_type_token1,
      aux_sym_type_token2,
      aux_sym_type_token3,
      aux_sym_type_token4,
      aux_sym_type_token5,
      aux_sym_type_token6,
      aux_sym_type_token7,
      aux_sym__start_block_token1,
  [1539] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(45), 1,
      sym_comment,
    ACTIONS(156), 9,
      ts_builtin_sym_end,
      aux_sym_type_token1,
      aux_sym_type_token2,
      aux_sym_type_token3,
      aux_sym_type_token4,
      aux_sym_type_token5,
      aux_sym_type_token6,
      aux_sym_type_token7,
      aux_sym__start_block_token1,
  [1557] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(46), 1,
      sym_comment,
    ACTIONS(158), 9,
      ts_builtin_sym_end,
      aux_sym_type_token1,
      aux_sym_type_token2,
      aux_sym_type_token3,
      aux_sym_type_token4,
      aux_sym_type_token5,
      aux_sym_type_token6,
      aux_sym_type_token7,
      aux_sym__start_block_token1,
  [1575] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(47), 1,
      sym_comment,
    ACTIONS(160), 9,
      ts_builtin_sym_end,
      aux_sym_type_token1,
      aux_sym_type_token2,
      aux_sym_type_token3,
      aux_sym_type_token4,
      aux_sym_type_token5,
      aux_sym_type_token6,
      aux_sym_type_token7,
      aux_sym__start_block_token1,
  [1593] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(48), 1,
      sym_comment,
    ACTIONS(162), 9,
      ts_builtin_sym_end,
      aux_sym_type_token1,
      aux_sym_type_token2,
      aux_sym_type_token3,
      aux_sym_type_token4,
      aux_sym_type_token5,
      aux_sym_type_token6,
      aux_sym_type_token7,
      aux_sym__start_block_token1,
  [1611] = 11,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(119), 1,
      sym__identifier,
    ACTIONS(123), 1,
      sym_string,
    ACTIONS(125), 1,
      aux_sym_float_token1,
    ACTIONS(127), 1,
      aux_sym_integer_token1,
    STATE(6), 1,
      sym_reference,
    STATE(7), 1,
      sym_float,
    STATE(8), 1,
      sym_integer,
    STATE(49), 1,
      sym_comment,
    STATE(84), 1,
      sym_parameter,
    STATE(87), 1,
      sym__literal,
  [1645] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(50), 1,
      sym_comment,
    ACTIONS(164), 9,
      ts_builtin_sym_end,
      aux_sym_type_token1,
      aux_sym_type_token2,
      aux_sym_type_token3,
      aux_sym_type_token4,
      aux_sym_type_token5,
      aux_sym_type_token6,
      aux_sym_type_token7,
      aux_sym__start_block_token1,
  [1663] = 10,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(166), 1,
      aux_sym__end_block_token1,
    ACTIONS(168), 1,
      anon_sym_word,
    ACTIONS(170), 1,
      aux_sym_set_statement_token1,
    STATE(50), 1,
      sym__end_block,
    STATE(51), 1,
      sym_comment,
    STATE(53), 1,
      aux_sym_block_repeat1,
    STATE(77), 1,
      sym__inner_block,
    STATE(91), 1,
      sym_statement,
    STATE(94), 1,
      sym_set_statement,
  [1694] = 10,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(166), 1,
      aux_sym__end_block_token1,
    ACTIONS(168), 1,
      anon_sym_word,
    ACTIONS(170), 1,
      aux_sym_set_statement_token1,
    STATE(42), 1,
      sym__end_block,
    STATE(51), 1,
      aux_sym_block_repeat1,
    STATE(52), 1,
      sym_comment,
    STATE(77), 1,
      sym__inner_block,
    STATE(91), 1,
      sym_statement,
    STATE(94), 1,
      sym_set_statement,
  [1725] = 8,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(172), 1,
      aux_sym__end_block_token1,
    ACTIONS(174), 1,
      anon_sym_word,
    ACTIONS(177), 1,
      aux_sym_set_statement_token1,
    STATE(77), 1,
      sym__inner_block,
    STATE(91), 1,
      sym_statement,
    STATE(94), 1,
      sym_set_statement,
    STATE(53), 2,
      sym_comment,
      aux_sym_block_repeat1,
  [1751] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(29), 1,
      aux_sym_integer_token1,
    STATE(54), 1,
      sym_comment,
    ACTIONS(27), 5,
      sym__terminator,
      anon_sym_COMMA,
      sym__identifier,
      sym_string,
      aux_sym_float_token1,
  [1768] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(182), 1,
      aux_sym_integer_token1,
    STATE(55), 1,
      sym_comment,
    ACTIONS(180), 5,
      sym__terminator,
      anon_sym_COMMA,
      sym__identifier,
      sym_string,
      aux_sym_float_token1,
  [1785] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      aux_sym_integer_token1,
    STATE(56), 1,
      sym_comment,
    ACTIONS(7), 5,
      sym__terminator,
      anon_sym_COMMA,
      sym__identifier,
      sym_string,
      aux_sym_float_token1,
  [1802] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(13), 1,
      aux_sym_integer_token1,
    STATE(57), 1,
      sym_comment,
    ACTIONS(11), 5,
      sym__terminator,
      anon_sym_COMMA,
      sym__identifier,
      sym_string,
      aux_sym_float_token1,
  [1819] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(17), 1,
      aux_sym_integer_token1,
    STATE(58), 1,
      sym_comment,
    ACTIONS(15), 5,
      sym__terminator,
      anon_sym_COMMA,
      sym__identifier,
      sym_string,
      aux_sym_float_token1,
  [1836] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(21), 1,
      aux_sym_integer_token1,
    STATE(59), 1,
      sym_comment,
    ACTIONS(19), 5,
      sym__terminator,
      anon_sym_COMMA,
      sym__identifier,
      sym_string,
      aux_sym_float_token1,
  [1853] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(184), 1,
      aux_sym_integer_token1,
    STATE(60), 1,
      sym_comment,
    ACTIONS(144), 5,
      sym__terminator,
      anon_sym_COMMA,
      sym__identifier,
      sym_string,
      aux_sym_float_token1,
  [1870] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(188), 1,
      aux_sym_integer_token1,
    STATE(61), 1,
      sym_comment,
    ACTIONS(186), 5,
      sym__terminator,
      anon_sym_COMMA,
      sym__identifier,
      sym_string,
      aux_sym_float_token1,
  [1887] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(25), 1,
      aux_sym_integer_token1,
    STATE(62), 1,
      sym_comment,
    ACTIONS(23), 5,
      sym__terminator,
      anon_sym_COMMA,
      sym__identifier,
      sym_string,
      aux_sym_float_token1,
  [1904] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    STATE(63), 1,
      sym_comment,
    ACTIONS(31), 5,
      sym__terminator,
      anon_sym_COMMA,
      sym__identifier,
      sym_string,
      aux_sym_float_token1,
  [1921] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(192), 1,
      aux_sym_integer_token1,
    STATE(64), 1,
      sym_comment,
    ACTIONS(190), 4,
      anon_sym_LPAREN,
      sym__identifier,
      sym_string,
      aux_sym_float_token1,
  [1937] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(192), 1,
      aux_sym_integer_token1,
    STATE(65), 1,
      sym_comment,
    ACTIONS(190), 4,
      anon_sym_LPAREN,
      sym__identifier,
      sym_string,
      aux_sym_float_token1,
  [1953] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(192), 1,
      aux_sym_integer_token1,
    STATE(66), 1,
      sym_comment,
    ACTIONS(190), 4,
      anon_sym_LPAREN,
      sym__identifier,
      sym_string,
      aux_sym_float_token1,
  [1969] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(192), 1,
      aux_sym_integer_token1,
    STATE(67), 1,
      sym_comment,
    ACTIONS(190), 4,
      anon_sym_LPAREN,
      sym__identifier,
      sym_string,
      aux_sym_float_token1,
  [1985] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(192), 1,
      aux_sym_integer_token1,
    STATE(68), 1,
      sym_comment,
    ACTIONS(190), 4,
      anon_sym_LPAREN,
      sym__identifier,
      sym_string,
      aux_sym_float_token1,
  [2001] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(192), 1,
      aux_sym_integer_token1,
    STATE(69), 1,
      sym_comment,
    ACTIONS(190), 4,
      anon_sym_LPAREN,
      sym__identifier,
      sym_string,
      aux_sym_float_token1,
  [2017] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(192), 1,
      aux_sym_integer_token1,
    STATE(70), 1,
      sym_comment,
    ACTIONS(190), 4,
      anon_sym_LPAREN,
      sym__identifier,
      sym_string,
      aux_sym_float_token1,
  [2033] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(192), 1,
      aux_sym_integer_token1,
    STATE(71), 1,
      sym_comment,
    ACTIONS(190), 4,
      anon_sym_LPAREN,
      sym__identifier,
      sym_string,
      aux_sym_float_token1,
  [2049] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(192), 1,
      aux_sym_integer_token1,
    STATE(72), 1,
      sym_comment,
    ACTIONS(190), 4,
      anon_sym_LPAREN,
      sym__identifier,
      sym_string,
      aux_sym_float_token1,
  [2065] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(192), 1,
      aux_sym_integer_token1,
    STATE(73), 1,
      sym_comment,
    ACTIONS(190), 4,
      anon_sym_LPAREN,
      sym__identifier,
      sym_string,
      aux_sym_float_token1,
  [2081] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(192), 1,
      aux_sym_integer_token1,
    STATE(74), 1,
      sym_comment,
    ACTIONS(190), 4,
      anon_sym_LPAREN,
      sym__identifier,
      sym_string,
      aux_sym_float_token1,
  [2097] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(194), 1,
      sym__identifier,
    ACTIONS(196), 1,
      aux_sym_user_defined_function_token1,
    STATE(75), 1,
      sym_comment,
    STATE(98), 2,
      sym_game_feature,
      sym_user_defined_function,
  [2114] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(198), 1,
      anon_sym_COMMA,
    ACTIONS(201), 1,
      anon_sym_RBRACE,
    STATE(76), 2,
      sym_comment,
      aux_sym__parameter_list_repeat1,
  [2128] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(77), 1,
      sym_comment,
    ACTIONS(203), 3,
      aux_sym__end_block_token1,
      anon_sym_word,
      aux_sym_set_statement_token1,
  [2140] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(78), 1,
      sym_comment,
    ACTIONS(205), 3,
      aux_sym__end_block_token1,
      anon_sym_word,
      aux_sym_set_statement_token1,
  [2152] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(207), 1,
      anon_sym_COMMA,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      sym_comment,
    STATE(82), 1,
      aux_sym__parameter_list_repeat1,
  [2168] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(80), 1,
      sym_comment,
    ACTIONS(211), 3,
      aux_sym__end_block_token1,
      anon_sym_word,
      aux_sym_set_statement_token1,
  [2180] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(213), 1,
      sym__identifier,
    STATE(81), 1,
      sym_comment,
    STATE(90), 1,
      sym_left,
    STATE(107), 1,
      sym_variable,
  [2196] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(207), 1,
      anon_sym_COMMA,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
    STATE(76), 1,
      aux_sym__parameter_list_repeat1,
    STATE(82), 1,
      sym_comment,
  [2212] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(217), 1,
      sym__identifier,
    STATE(83), 1,
      sym_comment,
    STATE(104), 1,
      sym_script_name,
  [2225] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(84), 1,
      sym_comment,
    ACTIONS(201), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2236] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(219), 1,
      sym__identifier,
    STATE(85), 1,
      sym_comment,
    STATE(96), 1,
      sym_variable,
  [2249] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(221), 1,
      anon_sym_LBRACE,
    STATE(86), 1,
      sym_comment,
    STATE(89), 1,
      sym__enclosed_parameter_list,
  [2262] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(87), 1,
      sym_comment,
    ACTIONS(186), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2273] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(223), 1,
      sym__terminator,
    STATE(88), 1,
      sym_comment,
  [2283] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(225), 1,
      sym__terminator,
    STATE(89), 1,
      sym_comment,
  [2293] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(227), 1,
      aux_sym_set_statement_token2,
    STATE(90), 1,
      sym_comment,
  [2303] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(229), 1,
      sym__terminator,
    STATE(91), 1,
      sym_comment,
  [2313] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(231), 1,
      sym__terminator,
    STATE(92), 1,
      sym_comment,
  [2323] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(233), 1,
      sym__terminator,
    STATE(93), 1,
      sym_comment,
  [2333] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(235), 1,
      sym__terminator,
    STATE(94), 1,
      sym_comment,
  [2343] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(237), 1,
      sym__terminator,
    STATE(95), 1,
      sym_comment,
  [2353] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(239), 1,
      sym__terminator,
    STATE(96), 1,
      sym_comment,
  [2363] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(241), 1,
      sym__terminator,
    STATE(97), 1,
      sym_comment,
  [2373] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(243), 1,
      sym__terminator,
    STATE(98), 1,
      sym_comment,
  [2383] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(241), 1,
      aux_sym_set_statement_token2,
    STATE(99), 1,
      sym_comment,
  [2393] = 3,
    ACTIONS(245), 1,
      anon_sym_SEMI,
    ACTIONS(247), 1,
      aux_sym_comment_token1,
    STATE(100), 1,
      sym_comment,
  [2403] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(249), 1,
      sym__terminator,
    STATE(101), 1,
      sym_comment,
  [2413] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(251), 1,
      anon_sym_RBRACE,
    STATE(102), 1,
      sym_comment,
  [2423] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(253), 1,
      sym__identifier,
    STATE(103), 1,
      sym_comment,
  [2433] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(255), 1,
      sym__terminator,
    STATE(104), 1,
      sym_comment,
  [2443] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(257), 1,
      sym__terminator,
    STATE(105), 1,
      sym_comment,
  [2453] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(259), 1,
      ts_builtin_sym_end,
    STATE(106), 1,
      sym_comment,
  [2463] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(261), 1,
      aux_sym_set_statement_token2,
    STATE(107), 1,
      sym_comment,
  [2473] = 1,
    ACTIONS(263), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 99,
  [SMALL_STATE(6)] = 132,
  [SMALL_STATE(7)] = 165,
  [SMALL_STATE(8)] = 198,
  [SMALL_STATE(9)] = 231,
  [SMALL_STATE(10)] = 265,
  [SMALL_STATE(11)] = 299,
  [SMALL_STATE(12)] = 355,
  [SMALL_STATE(13)] = 411,
  [SMALL_STATE(14)] = 467,
  [SMALL_STATE(15)] = 498,
  [SMALL_STATE(16)] = 529,
  [SMALL_STATE(17)] = 560,
  [SMALL_STATE(18)] = 591,
  [SMALL_STATE(19)] = 622,
  [SMALL_STATE(20)] = 653,
  [SMALL_STATE(21)] = 684,
  [SMALL_STATE(22)] = 715,
  [SMALL_STATE(23)] = 746,
  [SMALL_STATE(24)] = 777,
  [SMALL_STATE(25)] = 808,
  [SMALL_STATE(26)] = 839,
  [SMALL_STATE(27)] = 870,
  [SMALL_STATE(28)] = 901,
  [SMALL_STATE(29)] = 932,
  [SMALL_STATE(30)] = 970,
  [SMALL_STATE(31)] = 1006,
  [SMALL_STATE(32)] = 1044,
  [SMALL_STATE(33)] = 1090,
  [SMALL_STATE(34)] = 1133,
  [SMALL_STATE(35)] = 1176,
  [SMALL_STATE(36)] = 1219,
  [SMALL_STATE(37)] = 1262,
  [SMALL_STATE(38)] = 1303,
  [SMALL_STATE(39)] = 1346,
  [SMALL_STATE(40)] = 1389,
  [SMALL_STATE(41)] = 1429,
  [SMALL_STATE(42)] = 1469,
  [SMALL_STATE(43)] = 1487,
  [SMALL_STATE(44)] = 1521,
  [SMALL_STATE(45)] = 1539,
  [SMALL_STATE(46)] = 1557,
  [SMALL_STATE(47)] = 1575,
  [SMALL_STATE(48)] = 1593,
  [SMALL_STATE(49)] = 1611,
  [SMALL_STATE(50)] = 1645,
  [SMALL_STATE(51)] = 1663,
  [SMALL_STATE(52)] = 1694,
  [SMALL_STATE(53)] = 1725,
  [SMALL_STATE(54)] = 1751,
  [SMALL_STATE(55)] = 1768,
  [SMALL_STATE(56)] = 1785,
  [SMALL_STATE(57)] = 1802,
  [SMALL_STATE(58)] = 1819,
  [SMALL_STATE(59)] = 1836,
  [SMALL_STATE(60)] = 1853,
  [SMALL_STATE(61)] = 1870,
  [SMALL_STATE(62)] = 1887,
  [SMALL_STATE(63)] = 1904,
  [SMALL_STATE(64)] = 1921,
  [SMALL_STATE(65)] = 1937,
  [SMALL_STATE(66)] = 1953,
  [SMALL_STATE(67)] = 1969,
  [SMALL_STATE(68)] = 1985,
  [SMALL_STATE(69)] = 2001,
  [SMALL_STATE(70)] = 2017,
  [SMALL_STATE(71)] = 2033,
  [SMALL_STATE(72)] = 2049,
  [SMALL_STATE(73)] = 2065,
  [SMALL_STATE(74)] = 2081,
  [SMALL_STATE(75)] = 2097,
  [SMALL_STATE(76)] = 2114,
  [SMALL_STATE(77)] = 2128,
  [SMALL_STATE(78)] = 2140,
  [SMALL_STATE(79)] = 2152,
  [SMALL_STATE(80)] = 2168,
  [SMALL_STATE(81)] = 2180,
  [SMALL_STATE(82)] = 2196,
  [SMALL_STATE(83)] = 2212,
  [SMALL_STATE(84)] = 2225,
  [SMALL_STATE(85)] = 2236,
  [SMALL_STATE(86)] = 2249,
  [SMALL_STATE(87)] = 2262,
  [SMALL_STATE(88)] = 2273,
  [SMALL_STATE(89)] = 2283,
  [SMALL_STATE(90)] = 2293,
  [SMALL_STATE(91)] = 2303,
  [SMALL_STATE(92)] = 2313,
  [SMALL_STATE(93)] = 2323,
  [SMALL_STATE(94)] = 2333,
  [SMALL_STATE(95)] = 2343,
  [SMALL_STATE(96)] = 2353,
  [SMALL_STATE(97)] = 2363,
  [SMALL_STATE(98)] = 2373,
  [SMALL_STATE(99)] = 2383,
  [SMALL_STATE(100)] = 2393,
  [SMALL_STATE(101)] = 2403,
  [SMALL_STATE(102)] = 2413,
  [SMALL_STATE(103)] = 2423,
  [SMALL_STATE(104)] = 2433,
  [SMALL_STATE(105)] = 2443,
  [SMALL_STATE(106)] = 2453,
  [SMALL_STATE(107)] = 2463,
  [SMALL_STATE(108)] = 2473,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1, .production_id = 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1, .production_id = 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1, .production_id = 3),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1, .production_id = 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1, .production_id = 4),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1, .production_id = 4),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1, .production_id = 5),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1, .production_id = 5),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__binary_expression, 3, .production_id = 11),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binary_expression, 3, .production_id = 11),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right, 1, .production_id = 8),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, .production_id = 9),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, .production_id = 9),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, .production_id = 10),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, .production_id = 10),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(103),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(75),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_list_opt_comma, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parameter_list_opt_comma_repeat1, 2), SHIFT_REPEAT(56),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parameter_list_opt_comma_repeat1, 2), SHIFT_REPEAT(43),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parameter_list_opt_comma_repeat1, 2), SHIFT_REPEAT(57),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parameter_list_opt_comma_repeat1, 2), SHIFT_REPEAT(58),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__parameter_list_opt_comma_repeat1, 2), SHIFT_REPEAT(59),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameter_list_opt_comma_repeat1, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_list_opt_comma, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game_feature, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_declaration, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__top_level, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, .production_id = 6),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__end_block, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(94),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(81),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameter_list_opt_comma_repeat1, 1),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__parameter_list_opt_comma_repeat1, 1),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__parameter_list_opt_comma_repeat1, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 1, .production_id = 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 1),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 1),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parameter_list_repeat1, 2), SHIFT_REPEAT(49),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameter_list_repeat1, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__start_block, 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_list, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inner_block, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_list, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enclosed_parameter_list, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_defined_function, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enclosed_parameter_list, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_statement, 4),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game_feature, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_name, 1),
  [259] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left, 1, .production_id = 7),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_obl_external_scanner_create(void);
void tree_sitter_obl_external_scanner_destroy(void *);
bool tree_sitter_obl_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_obl_external_scanner_serialize(void *, char *);
void tree_sitter_obl_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_obl(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym__identifier,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_obl_external_scanner_create,
      tree_sitter_obl_external_scanner_destroy,
      tree_sitter_obl_external_scanner_scan,
      tree_sitter_obl_external_scanner_serialize,
      tree_sitter_obl_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
