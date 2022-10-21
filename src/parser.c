#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 123
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 95
#define ALIAS_COUNT 1
#define TOKEN_COUNT 57
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 11

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
  aux_sym_let_statement_token1 = 20,
  anon_sym_LPAREN = 21,
  anon_sym_RPAREN = 22,
  anon_sym_PIPE_PIPE = 23,
  anon_sym_AMP_AMP = 24,
  anon_sym_COLON_COLON = 25,
  anon_sym_EQ_EQ = 26,
  anon_sym_BANG_EQ = 27,
  anon_sym_GT = 28,
  anon_sym_GT_EQ = 29,
  anon_sym_LT = 30,
  anon_sym_LT_EQ = 31,
  anon_sym_PIPE = 32,
  anon_sym_AMP = 33,
  anon_sym_LT_LT = 34,
  anon_sym_GT_GT = 35,
  anon_sym_PLUS = 36,
  anon_sym_DASH = 37,
  anon_sym_STAR = 38,
  anon_sym_SLASH = 39,
  anon_sym_PERCENT = 40,
  anon_sym_CARET = 41,
  anon_sym_COLON_EQ = 42,
  anon_sym_PLUS_EQ = 43,
  anon_sym_DASH_EQ = 44,
  anon_sym_STAR_EQ = 45,
  anon_sym_SLASH_EQ = 46,
  anon_sym_CARET_EQ = 47,
  anon_sym_DOLLAR = 48,
  anon_sym_POUND = 49,
  anon_sym_BANG = 50,
  anon_sym_SEMI = 51,
  aux_sym_comment_token1 = 52,
  sym_string = 53,
  aux_sym_float_token1 = 54,
  aux_sym_integer_token1 = 55,
  sym__terminator = 56,
  sym_source_file = 57,
  sym_script_declaration = 58,
  sym_script_name = 59,
  sym__top_level = 60,
  sym_variable_declaration = 61,
  sym_type = 62,
  sym_variable = 63,
  sym_block = 64,
  sym__start_block = 65,
  sym_game_feature = 66,
  sym_user_defined_function = 67,
  sym__parameter_list = 68,
  sym__parameter_list_opt_comma = 69,
  sym__enclosed_parameter_list = 70,
  sym_parameter = 71,
  sym__inner_block = 72,
  sym__end_block = 73,
  sym_statement = 74,
  sym_set_statement = 75,
  sym_let_statement = 76,
  sym_left = 77,
  sym_right = 78,
  sym__expression = 79,
  sym_parenthesized_expression = 80,
  sym__binary_expression = 81,
  sym__unary_expression = 82,
  sym_binary_operator = 83,
  sym_assignment = 84,
  sym_unary_operator = 85,
  sym_comment = 86,
  sym__literal = 87,
  sym_reference = 88,
  sym_float = 89,
  sym_integer = 90,
  aux_sym_source_file_repeat1 = 91,
  aux_sym_block_repeat1 = 92,
  aux_sym__parameter_list_repeat1 = 93,
  aux_sym__parameter_list_opt_comma_repeat1 = 94,
  anon_alias_sym_parameter = 95,
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
  [aux_sym_let_statement_token1] = "let",
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
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_CARET_EQ] = "^=",
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
  [sym_let_statement] = "let_statement",
  [sym_left] = "left",
  [sym_right] = "right",
  [sym__expression] = "_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym__binary_expression] = "_binary_expression",
  [sym__unary_expression] = "_unary_expression",
  [sym_binary_operator] = "binary_operator",
  [sym_assignment] = "assignment",
  [sym_unary_operator] = "unary_operator",
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
  [aux_sym_let_statement_token1] = aux_sym_let_statement_token1,
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
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ,
  [anon_sym_CARET_EQ] = anon_sym_CARET_EQ,
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
  [sym_let_statement] = sym_let_statement,
  [sym_left] = sym_left,
  [sym_right] = sym_right,
  [sym__expression] = sym__expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym__binary_expression] = sym__binary_expression,
  [sym__unary_expression] = sym__unary_expression,
  [sym_binary_operator] = sym_binary_operator,
  [sym_assignment] = sym_assignment,
  [sym_unary_operator] = sym_unary_operator,
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
  [aux_sym_let_statement_token1] = {
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
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_EQ] = {
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
  [sym_let_statement] = {
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
  [sym__unary_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_binary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_operator] = {
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
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 1, .length = 4},
  [9] = {.index = 11, .length = 4},
  [10] = {.index = 15, .length = 8},
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
    {field_left, 1},
    {field_right, 3},
  [11] =
    {field_float, 1, .inherited = true},
    {field_integer, 1, .inherited = true},
    {field_reference, 1, .inherited = true},
    {field_string, 1, .inherited = true},
  [15] =
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
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 11,
  [14] = 14,
  [15] = 15,
  [16] = 15,
  [17] = 14,
  [18] = 5,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 19,
  [26] = 3,
  [27] = 4,
  [28] = 6,
  [29] = 7,
  [30] = 24,
  [31] = 31,
  [32] = 8,
  [33] = 31,
  [34] = 2,
  [35] = 20,
  [36] = 36,
  [37] = 21,
  [38] = 36,
  [39] = 22,
  [40] = 23,
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
  [80] = 5,
  [81] = 4,
  [82] = 82,
  [83] = 6,
  [84] = 3,
  [85] = 85,
  [86] = 7,
  [87] = 8,
  [88] = 2,
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
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 85,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 76,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '!') ADVANCE(66);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '$') ADVANCE(63);
      if (lookahead == '%') ADVANCE(54);
      if (lookahead == '&') ADVANCE(42);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '*') ADVANCE(51);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == ',') ADVANCE(26);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '/') ADVANCE(53);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == ';') ADVANCE(68);
      if (lookahead == '<') ADVANCE(38);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '>') ADVANCE(36);
      if (lookahead == '\\') SKIP(24)
      if (lookahead == '^') ADVANCE(56);
      if (lookahead == '{') ADVANCE(27);
      if (lookahead == '|') ADVANCE(40);
      if (lookahead == '}') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(19)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(20)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(21)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(70);
      if (lookahead != 0) ADVANCE(71);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(33);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == '=') ADVANCE(57);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(35);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(60);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(58);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(59);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(61);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(57);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(34);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(62);
      END_STATE();
    case 19:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '%') ADVANCE(54);
      if (lookahead == '&') ADVANCE(42);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '+') ADVANCE(45);
      if (lookahead == ',') ADVANCE(26);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '/') ADVANCE(52);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == ';') ADVANCE(68);
      if (lookahead == '<') ADVANCE(38);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '>') ADVANCE(36);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '^') ADVANCE(55);
      if (lookahead == '|') ADVANCE(40);
      if (lookahead == '}') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead == '!') ADVANCE(65);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '$') ADVANCE(63);
      if (lookahead == '&') ADVANCE(41);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == ';') ADVANCE(68);
      if (lookahead == '\\') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 21:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '+') ADVANCE(13);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == ';') ADVANCE(68);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == '^') ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 22:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(71);
      if (lookahead == '\r') ADVANCE(73);
      END_STATE();
    case 23:
      if (eof) ADVANCE(25);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 24:
      if (eof) ADVANCE(25);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(23)
      END_STATE();
    case 25:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(37);
      if (lookahead == '>') ADVANCE(44);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(43);
      if (lookahead == '=') ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(31);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(32);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(58);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(60);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=') ADVANCE(61);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=') ADVANCE(62);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(35);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead != 0) ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == ';') ADVANCE(69);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(22);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
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
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 10:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 11:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(25);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(27);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(28);
      END_STATE();
    case 12:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 14:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 16:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 17:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(32);
      END_STATE();
    case 18:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(33);
      END_STATE();
    case 19:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 20:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 21:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(36);
      END_STATE();
    case 22:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(37);
      END_STATE();
    case 23:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 24:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(39);
      END_STATE();
    case 25:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(40);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 26:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(42);
      END_STATE();
    case 27:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 28:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_set_statement_token2);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(45);
      END_STATE();
    case 31:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 32:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym__end_block_token1);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 35:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_type_token1);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_let_statement_token1);
      END_STATE();
    case 38:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(50);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_type_token5);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_script_declaration_token1);
      END_STATE();
    case 41:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_set_statement_token1);
      END_STATE();
    case 43:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 44:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_word);
      END_STATE();
    case 46:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(54);
      END_STATE();
    case 47:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 48:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(56);
      END_STATE();
    case 49:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(57);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_type_token3);
      END_STATE();
    case 51:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(58);
      END_STATE();
    case 52:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(59);
      END_STATE();
    case 53:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 54:
      if (lookahead == '_') ADVANCE(61);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__start_block_token1);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_type_token4);
      END_STATE();
    case 57:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 58:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(63);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_type_token2);
      END_STATE();
    case 60:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(64);
      END_STATE();
    case 61:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(65);
      END_STATE();
    case 62:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 63:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 64:
      if (lookahead == '_') ADVANCE(68);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 66:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 68:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(72);
      END_STATE();
    case 69:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_user_defined_function_token1);
      END_STATE();
    case 71:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(74);
      END_STATE();
    case 72:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_type_token6);
      END_STATE();
    case 74:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 75:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_script_declaration_token2);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_type_token7);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 19},
  [3] = {.lex_state = 19},
  [4] = {.lex_state = 19},
  [5] = {.lex_state = 19},
  [6] = {.lex_state = 19},
  [7] = {.lex_state = 19},
  [8] = {.lex_state = 19},
  [9] = {.lex_state = 20},
  [10] = {.lex_state = 20},
  [11] = {.lex_state = 19},
  [12] = {.lex_state = 19, .external_lex_state = 1},
  [13] = {.lex_state = 19},
  [14] = {.lex_state = 19, .external_lex_state = 1},
  [15] = {.lex_state = 19, .external_lex_state = 1},
  [16] = {.lex_state = 19},
  [17] = {.lex_state = 19},
  [18] = {.lex_state = 19, .external_lex_state = 1},
  [19] = {.lex_state = 20},
  [20] = {.lex_state = 19},
  [21] = {.lex_state = 19},
  [22] = {.lex_state = 19},
  [23] = {.lex_state = 19},
  [24] = {.lex_state = 20},
  [25] = {.lex_state = 20},
  [26] = {.lex_state = 19, .external_lex_state = 1},
  [27] = {.lex_state = 19, .external_lex_state = 1},
  [28] = {.lex_state = 19, .external_lex_state = 1},
  [29] = {.lex_state = 19, .external_lex_state = 1},
  [30] = {.lex_state = 20},
  [31] = {.lex_state = 19, .external_lex_state = 1},
  [32] = {.lex_state = 19, .external_lex_state = 1},
  [33] = {.lex_state = 19},
  [34] = {.lex_state = 19, .external_lex_state = 1},
  [35] = {.lex_state = 19, .external_lex_state = 1},
  [36] = {.lex_state = 20},
  [37] = {.lex_state = 19, .external_lex_state = 1},
  [38] = {.lex_state = 20},
  [39] = {.lex_state = 19, .external_lex_state = 1},
  [40] = {.lex_state = 19, .external_lex_state = 1},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0, .external_lex_state = 1},
  [45] = {.lex_state = 0, .external_lex_state = 1},
  [46] = {.lex_state = 0, .external_lex_state = 1},
  [47] = {.lex_state = 20},
  [48] = {.lex_state = 20},
  [49] = {.lex_state = 20},
  [50] = {.lex_state = 20},
  [51] = {.lex_state = 20},
  [52] = {.lex_state = 20},
  [53] = {.lex_state = 20},
  [54] = {.lex_state = 20},
  [55] = {.lex_state = 20},
  [56] = {.lex_state = 20},
  [57] = {.lex_state = 20},
  [58] = {.lex_state = 0, .external_lex_state = 1},
  [59] = {.lex_state = 20},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 20},
  [62] = {.lex_state = 20},
  [63] = {.lex_state = 20},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 21},
  [77] = {.lex_state = 21},
  [78] = {.lex_state = 21},
  [79] = {.lex_state = 0, .external_lex_state = 1},
  [80] = {.lex_state = 0, .external_lex_state = 1},
  [81] = {.lex_state = 0, .external_lex_state = 1},
  [82] = {.lex_state = 0, .external_lex_state = 1},
  [83] = {.lex_state = 0, .external_lex_state = 1},
  [84] = {.lex_state = 0, .external_lex_state = 1},
  [85] = {.lex_state = 0, .external_lex_state = 1},
  [86] = {.lex_state = 0, .external_lex_state = 1},
  [87] = {.lex_state = 0, .external_lex_state = 1},
  [88] = {.lex_state = 0, .external_lex_state = 1},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0, .external_lex_state = 1},
  [104] = {.lex_state = 0, .external_lex_state = 1},
  [105] = {.lex_state = 0, .external_lex_state = 1},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0, .external_lex_state = 1},
  [108] = {.lex_state = 0, .external_lex_state = 1},
  [109] = {.lex_state = 0, .external_lex_state = 1},
  [110] = {.lex_state = 0, .external_lex_state = 1},
  [111] = {.lex_state = 0, .external_lex_state = 1},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 72},
  [114] = {.lex_state = 0, .external_lex_state = 1},
  [115] = {.lex_state = 0, .external_lex_state = 1},
  [116] = {.lex_state = 0, .external_lex_state = 1},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0, .external_lex_state = 1},
  [119] = {.lex_state = 0, .external_lex_state = 1},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0, .external_lex_state = 1},
  [122] = {(TSStateId)(-1)},
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
    [aux_sym_let_statement_token1] = ACTIONS(1),
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
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(3),
    [sym_string] = ACTIONS(1),
    [aux_sym_float_token1] = ACTIONS(1),
    [aux_sym_integer_token1] = ACTIONS(1),
    [sym__terminator] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(120),
    [sym_script_declaration] = STATE(42),
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
  [231] = 20,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(35), 1,
      sym__identifier,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      anon_sym_BANG,
    ACTIONS(45), 1,
      sym_string,
    ACTIONS(47), 1,
      aux_sym_float_token1,
    ACTIONS(49), 1,
      aux_sym_integer_token1,
    STATE(9), 1,
      sym_comment,
    STATE(12), 1,
      sym__expression,
    STATE(29), 1,
      sym_reference,
    STATE(32), 1,
      sym_float,
    STATE(34), 1,
      sym_integer,
    STATE(35), 1,
      sym__literal,
    STATE(36), 1,
      sym_unary_operator,
    STATE(37), 1,
      sym__unary_expression,
    STATE(39), 1,
      sym__binary_expression,
    STATE(40), 1,
      sym_parenthesized_expression,
    STATE(115), 1,
      sym_right,
    ACTIONS(39), 4,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_POUND,
  [295] = 20,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(35), 1,
      sym__identifier,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      anon_sym_BANG,
    ACTIONS(45), 1,
      sym_string,
    ACTIONS(47), 1,
      aux_sym_float_token1,
    ACTIONS(49), 1,
      aux_sym_integer_token1,
    STATE(10), 1,
      sym_comment,
    STATE(12), 1,
      sym__expression,
    STATE(29), 1,
      sym_reference,
    STATE(32), 1,
      sym_float,
    STATE(34), 1,
      sym_integer,
    STATE(35), 1,
      sym__literal,
    STATE(36), 1,
      sym_unary_operator,
    STATE(37), 1,
      sym__unary_expression,
    STATE(39), 1,
      sym__binary_expression,
    STATE(40), 1,
      sym_parenthesized_expression,
    STATE(110), 1,
      sym_right,
    ACTIONS(39), 4,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_POUND,
  [359] = 16,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(51), 1,
      anon_sym_RPAREN,
    ACTIONS(53), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(55), 1,
      anon_sym_AMP_AMP,
    ACTIONS(57), 1,
      anon_sym_COLON_COLON,
    ACTIONS(65), 1,
      anon_sym_PIPE,
    ACTIONS(67), 1,
      anon_sym_AMP,
    ACTIONS(75), 1,
      anon_sym_CARET,
    STATE(11), 1,
      sym_comment,
    STATE(25), 1,
      sym_binary_operator,
    ACTIONS(59), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(61), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(63), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(69), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(73), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [415] = 16,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(53), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(55), 1,
      anon_sym_AMP_AMP,
    ACTIONS(57), 1,
      anon_sym_COLON_COLON,
    ACTIONS(65), 1,
      anon_sym_PIPE,
    ACTIONS(67), 1,
      anon_sym_AMP,
    ACTIONS(75), 1,
      anon_sym_CARET,
    ACTIONS(77), 1,
      sym__terminator,
    STATE(12), 1,
      sym_comment,
    STATE(19), 1,
      sym_binary_operator,
    ACTIONS(59), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(61), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(63), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(69), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(73), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [471] = 16,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(53), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(55), 1,
      anon_sym_AMP_AMP,
    ACTIONS(57), 1,
      anon_sym_COLON_COLON,
    ACTIONS(65), 1,
      anon_sym_PIPE,
    ACTIONS(67), 1,
      anon_sym_AMP,
    ACTIONS(75), 1,
      anon_sym_CARET,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    STATE(13), 1,
      sym_comment,
    STATE(25), 1,
      sym_binary_operator,
    ACTIONS(59), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(61), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(63), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(69), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(73), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [527] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(14), 1,
      sym_comment,
    STATE(19), 1,
      sym_binary_operator,
    ACTIONS(83), 4,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(81), 16,
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
  [561] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(15), 1,
      sym_comment,
    STATE(19), 1,
      sym_binary_operator,
    ACTIONS(87), 4,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(85), 16,
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
  [595] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(16), 1,
      sym_comment,
    STATE(25), 1,
      sym_binary_operator,
    ACTIONS(87), 4,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(85), 16,
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
  [629] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(17), 1,
      sym_comment,
    STATE(25), 1,
      sym_binary_operator,
    ACTIONS(83), 4,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(81), 16,
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
  [663] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(18), 1,
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
  [694] = 19,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(35), 1,
      sym__identifier,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      anon_sym_BANG,
    ACTIONS(45), 1,
      sym_string,
    ACTIONS(47), 1,
      aux_sym_float_token1,
    ACTIONS(49), 1,
      aux_sym_integer_token1,
    STATE(15), 1,
      sym__expression,
    STATE(19), 1,
      sym_comment,
    STATE(29), 1,
      sym_reference,
    STATE(32), 1,
      sym_float,
    STATE(34), 1,
      sym_integer,
    STATE(35), 1,
      sym__literal,
    STATE(36), 1,
      sym_unary_operator,
    STATE(37), 1,
      sym__unary_expression,
    STATE(39), 1,
      sym__binary_expression,
    STATE(40), 1,
      sym_parenthesized_expression,
    ACTIONS(39), 4,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_POUND,
  [755] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(20), 1,
      sym_comment,
    ACTIONS(91), 4,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(89), 16,
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
  [786] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(21), 1,
      sym_comment,
    ACTIONS(91), 4,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(89), 16,
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
  [817] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(22), 1,
      sym_comment,
    ACTIONS(91), 4,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(89), 16,
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
  [848] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(23), 1,
      sym_comment,
    ACTIONS(95), 4,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(93), 16,
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
  [879] = 19,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      anon_sym_BANG,
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
    STATE(2), 1,
      sym_integer,
    STATE(7), 1,
      sym_reference,
    STATE(8), 1,
      sym_float,
    STATE(11), 1,
      sym__expression,
    STATE(20), 1,
      sym__literal,
    STATE(21), 1,
      sym__unary_expression,
    STATE(22), 1,
      sym__binary_expression,
    STATE(23), 1,
      sym_parenthesized_expression,
    STATE(24), 1,
      sym_comment,
    STATE(38), 1,
      sym_unary_operator,
    ACTIONS(39), 4,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_POUND,
  [940] = 19,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      anon_sym_BANG,
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
    STATE(2), 1,
      sym_integer,
    STATE(7), 1,
      sym_reference,
    STATE(8), 1,
      sym_float,
    STATE(16), 1,
      sym__expression,
    STATE(20), 1,
      sym__literal,
    STATE(21), 1,
      sym__unary_expression,
    STATE(22), 1,
      sym__binary_expression,
    STATE(23), 1,
      sym_parenthesized_expression,
    STATE(25), 1,
      sym_comment,
    STATE(38), 1,
      sym_unary_operator,
    ACTIONS(39), 4,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_POUND,
  [1001] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(26), 1,
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
  [1032] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(27), 1,
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
  [1063] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(28), 1,
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
  [1094] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(29), 1,
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
  [1125] = 19,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      anon_sym_BANG,
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
    STATE(2), 1,
      sym_integer,
    STATE(7), 1,
      sym_reference,
    STATE(8), 1,
      sym_float,
    STATE(13), 1,
      sym__expression,
    STATE(20), 1,
      sym__literal,
    STATE(21), 1,
      sym__unary_expression,
    STATE(22), 1,
      sym__binary_expression,
    STATE(23), 1,
      sym_parenthesized_expression,
    STATE(30), 1,
      sym_comment,
    STATE(38), 1,
      sym_unary_operator,
    ACTIONS(39), 4,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_POUND,
  [1186] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(31), 1,
      sym_comment,
    ACTIONS(109), 4,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(107), 16,
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
  [1217] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(32), 1,
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
  [1248] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(33), 1,
      sym_comment,
    ACTIONS(109), 4,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(107), 16,
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
  [1279] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(34), 1,
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
  [1310] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(35), 1,
      sym_comment,
    ACTIONS(91), 4,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(89), 16,
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
  [1341] = 18,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(35), 1,
      sym__identifier,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      anon_sym_BANG,
    ACTIONS(45), 1,
      sym_string,
    ACTIONS(47), 1,
      aux_sym_float_token1,
    ACTIONS(49), 1,
      aux_sym_integer_token1,
    STATE(14), 1,
      sym__expression,
    STATE(29), 1,
      sym_reference,
    STATE(32), 1,
      sym_float,
    STATE(34), 1,
      sym_integer,
    STATE(35), 1,
      sym__literal,
    STATE(37), 1,
      sym__unary_expression,
    STATE(39), 1,
      sym__binary_expression,
    STATE(40), 1,
      sym_parenthesized_expression,
    STATE(36), 2,
      sym_unary_operator,
      sym_comment,
    ACTIONS(39), 4,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_POUND,
  [1400] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(37), 1,
      sym_comment,
    ACTIONS(91), 4,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(89), 16,
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
  [1431] = 18,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      anon_sym_BANG,
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
    STATE(2), 1,
      sym_integer,
    STATE(7), 1,
      sym_reference,
    STATE(8), 1,
      sym_float,
    STATE(17), 1,
      sym__expression,
    STATE(20), 1,
      sym__literal,
    STATE(21), 1,
      sym__unary_expression,
    STATE(22), 1,
      sym__binary_expression,
    STATE(23), 1,
      sym_parenthesized_expression,
    STATE(38), 2,
      sym_unary_operator,
      sym_comment,
    ACTIONS(39), 4,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_POUND,
  [1490] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(39), 1,
      sym_comment,
    ACTIONS(91), 4,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(89), 16,
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
  [1521] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(40), 1,
      sym_comment,
    ACTIONS(95), 4,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(93), 16,
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
  [1552] = 9,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    ACTIONS(116), 1,
      aux_sym__start_block_token1,
    STATE(64), 1,
      sym__start_block,
    STATE(70), 1,
      sym__top_level,
    STATE(100), 1,
      sym_type,
    STATE(41), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(71), 2,
      sym_variable_declaration,
      sym_block,
    ACTIONS(113), 7,
      aux_sym_type_token1,
      aux_sym_type_token2,
      aux_sym_type_token3,
      aux_sym_type_token4,
      aux_sym_type_token5,
      aux_sym_type_token6,
      aux_sym_type_token7,
  [1588] = 10,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(123), 1,
      aux_sym__start_block_token1,
    STATE(42), 1,
      sym_comment,
    STATE(43), 1,
      aux_sym_source_file_repeat1,
    STATE(64), 1,
      sym__start_block,
    STATE(70), 1,
      sym__top_level,
    STATE(100), 1,
      sym_type,
    STATE(71), 2,
      sym_variable_declaration,
      sym_block,
    ACTIONS(121), 7,
      aux_sym_type_token1,
      aux_sym_type_token2,
      aux_sym_type_token3,
      aux_sym_type_token4,
      aux_sym_type_token5,
      aux_sym_type_token6,
      aux_sym_type_token7,
  [1626] = 10,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(123), 1,
      aux_sym__start_block_token1,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    STATE(41), 1,
      aux_sym_source_file_repeat1,
    STATE(43), 1,
      sym_comment,
    STATE(64), 1,
      sym__start_block,
    STATE(70), 1,
      sym__top_level,
    STATE(100), 1,
      sym_type,
    STATE(71), 2,
      sym_variable_declaration,
      sym_block,
    ACTIONS(121), 7,
      aux_sym_type_token1,
      aux_sym_type_token2,
      aux_sym_type_token3,
      aux_sym_type_token4,
      aux_sym_type_token5,
      aux_sym_type_token6,
      aux_sym_type_token7,
  [1664] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(127), 1,
      sym__identifier,
    ACTIONS(129), 1,
      anon_sym_COMMA,
    ACTIONS(131), 1,
      sym_string,
    ACTIONS(133), 1,
      aux_sym_float_token1,
    ACTIONS(135), 1,
      aux_sym_integer_token1,
    ACTIONS(137), 1,
      sym__terminator,
    STATE(44), 1,
      sym_comment,
    STATE(46), 1,
      aux_sym__parameter_list_opt_comma_repeat1,
    STATE(79), 1,
      sym_parameter,
    STATE(85), 1,
      sym__literal,
    STATE(86), 1,
      sym_reference,
    STATE(87), 1,
      sym_float,
    STATE(88), 1,
      sym_integer,
  [1707] = 13,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(139), 1,
      sym__identifier,
    ACTIONS(142), 1,
      anon_sym_COMMA,
    ACTIONS(145), 1,
      sym_string,
    ACTIONS(148), 1,
      aux_sym_float_token1,
    ACTIONS(151), 1,
      aux_sym_integer_token1,
    ACTIONS(154), 1,
      sym__terminator,
    STATE(79), 1,
      sym_parameter,
    STATE(85), 1,
      sym__literal,
    STATE(86), 1,
      sym_reference,
    STATE(87), 1,
      sym_float,
    STATE(88), 1,
      sym_integer,
    STATE(45), 2,
      sym_comment,
      aux_sym__parameter_list_opt_comma_repeat1,
  [1748] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(127), 1,
      sym__identifier,
    ACTIONS(129), 1,
      anon_sym_COMMA,
    ACTIONS(131), 1,
      sym_string,
    ACTIONS(133), 1,
      aux_sym_float_token1,
    ACTIONS(135), 1,
      aux_sym_integer_token1,
    ACTIONS(156), 1,
      sym__terminator,
    STATE(45), 1,
      aux_sym__parameter_list_opt_comma_repeat1,
    STATE(46), 1,
      sym_comment,
    STATE(79), 1,
      sym_parameter,
    STATE(85), 1,
      sym__literal,
    STATE(86), 1,
      sym_reference,
    STATE(87), 1,
      sym_float,
    STATE(88), 1,
      sym_integer,
  [1791] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(47), 1,
      sym_comment,
    ACTIONS(160), 2,
      anon_sym_DASH,
      aux_sym_integer_token1,
    ACTIONS(158), 9,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_POUND,
      anon_sym_BANG,
      sym__identifier,
      sym_string,
      aux_sym_float_token1,
  [1813] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(48), 1,
      sym_comment,
    ACTIONS(164), 2,
      anon_sym_DASH,
      aux_sym_integer_token1,
    ACTIONS(162), 9,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_POUND,
      anon_sym_BANG,
      sym__identifier,
      sym_string,
      aux_sym_float_token1,
  [1835] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(49), 1,
      sym_comment,
    ACTIONS(168), 2,
      anon_sym_DASH,
      aux_sym_integer_token1,
    ACTIONS(166), 9,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_POUND,
      anon_sym_BANG,
      sym__identifier,
      sym_string,
      aux_sym_float_token1,
  [1857] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(50), 1,
      sym_comment,
    ACTIONS(168), 2,
      anon_sym_DASH,
      aux_sym_integer_token1,
    ACTIONS(166), 9,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_POUND,
      anon_sym_BANG,
      sym__identifier,
      sym_string,
      aux_sym_float_token1,
  [1879] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(51), 1,
      sym_comment,
    ACTIONS(168), 2,
      anon_sym_DASH,
      aux_sym_integer_token1,
    ACTIONS(166), 9,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_POUND,
      anon_sym_BANG,
      sym__identifier,
      sym_string,
      aux_sym_float_token1,
  [1901] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(52), 1,
      sym_comment,
    ACTIONS(168), 2,
      anon_sym_DASH,
      aux_sym_integer_token1,
    ACTIONS(166), 9,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_POUND,
      anon_sym_BANG,
      sym__identifier,
      sym_string,
      aux_sym_float_token1,
  [1923] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(53), 1,
      sym_comment,
    ACTIONS(168), 2,
      anon_sym_DASH,
      aux_sym_integer_token1,
    ACTIONS(166), 9,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_POUND,
      anon_sym_BANG,
      sym__identifier,
      sym_string,
      aux_sym_float_token1,
  [1945] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(54), 1,
      sym_comment,
    ACTIONS(168), 2,
      anon_sym_DASH,
      aux_sym_integer_token1,
    ACTIONS(166), 9,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_POUND,
      anon_sym_BANG,
      sym__identifier,
      sym_string,
      aux_sym_float_token1,
  [1967] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(55), 1,
      sym_comment,
    ACTIONS(168), 2,
      anon_sym_DASH,
      aux_sym_integer_token1,
    ACTIONS(166), 9,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_POUND,
      anon_sym_BANG,
      sym__identifier,
      sym_string,
      aux_sym_float_token1,
  [1989] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(56), 1,
      sym_comment,
    ACTIONS(168), 2,
      anon_sym_DASH,
      aux_sym_integer_token1,
    ACTIONS(166), 9,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_POUND,
      anon_sym_BANG,
      sym__identifier,
      sym_string,
      aux_sym_float_token1,
  [2011] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(57), 1,
      sym_comment,
    ACTIONS(168), 2,
      anon_sym_DASH,
      aux_sym_integer_token1,
    ACTIONS(166), 9,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_POUND,
      anon_sym_BANG,
      sym__identifier,
      sym_string,
      aux_sym_float_token1,
  [2033] = 13,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(127), 1,
      sym__identifier,
    ACTIONS(131), 1,
      sym_string,
    ACTIONS(133), 1,
      aux_sym_float_token1,
    ACTIONS(135), 1,
      aux_sym_integer_token1,
    ACTIONS(170), 1,
      sym__terminator,
    STATE(44), 1,
      sym_parameter,
    STATE(58), 1,
      sym_comment,
    STATE(85), 1,
      sym__literal,
    STATE(86), 1,
      sym_reference,
    STATE(87), 1,
      sym_float,
    STATE(88), 1,
      sym_integer,
    STATE(116), 1,
      sym__parameter_list_opt_comma,
  [2073] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(59), 1,
      sym_comment,
    ACTIONS(168), 2,
      anon_sym_DASH,
      aux_sym_integer_token1,
    ACTIONS(166), 9,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_POUND,
      anon_sym_BANG,
      sym__identifier,
      sym_string,
      aux_sym_float_token1,
  [2095] = 13,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      sym__identifier,
    ACTIONS(101), 1,
      sym_string,
    ACTIONS(103), 1,
      aux_sym_float_token1,
    ACTIONS(105), 1,
      aux_sym_integer_token1,
    ACTIONS(172), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      sym_integer,
    STATE(7), 1,
      sym_reference,
    STATE(8), 1,
      sym_float,
    STATE(60), 1,
      sym_comment,
    STATE(95), 1,
      sym_parameter,
    STATE(102), 1,
      sym__literal,
    STATE(112), 1,
      sym__parameter_list,
  [2135] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(61), 1,
      sym_comment,
    ACTIONS(160), 2,
      anon_sym_DASH,
      aux_sym_integer_token1,
    ACTIONS(158), 9,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_POUND,
      anon_sym_BANG,
      sym__identifier,
      sym_string,
      aux_sym_float_token1,
  [2157] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(62), 1,
      sym_comment,
    ACTIONS(164), 2,
      anon_sym_DASH,
      aux_sym_integer_token1,
    ACTIONS(162), 9,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_POUND,
      anon_sym_BANG,
      sym__identifier,
      sym_string,
      aux_sym_float_token1,
  [2179] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(63), 1,
      sym_comment,
    ACTIONS(168), 2,
      anon_sym_DASH,
      aux_sym_integer_token1,
    ACTIONS(166), 9,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_POUND,
      anon_sym_BANG,
      sym__identifier,
      sym_string,
      aux_sym_float_token1,
  [2201] = 11,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(174), 1,
      aux_sym__end_block_token1,
    ACTIONS(176), 1,
      anon_sym_word,
    ACTIONS(178), 1,
      aux_sym_set_statement_token1,
    ACTIONS(180), 1,
      aux_sym_let_statement_token1,
    STATE(64), 1,
      sym_comment,
    STATE(65), 1,
      aux_sym_block_repeat1,
    STATE(69), 1,
      sym__end_block,
    STATE(92), 1,
      sym__inner_block,
    STATE(111), 1,
      sym_statement,
    STATE(104), 2,
      sym_set_statement,
      sym_let_statement,
  [2236] = 11,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(174), 1,
      aux_sym__end_block_token1,
    ACTIONS(176), 1,
      anon_sym_word,
    ACTIONS(178), 1,
      aux_sym_set_statement_token1,
    ACTIONS(180), 1,
      aux_sym_let_statement_token1,
    STATE(65), 1,
      sym_comment,
    STATE(72), 1,
      sym__end_block,
    STATE(73), 1,
      aux_sym_block_repeat1,
    STATE(92), 1,
      sym__inner_block,
    STATE(111), 1,
      sym_statement,
    STATE(104), 2,
      sym_set_statement,
      sym_let_statement,
  [2271] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(66), 1,
      sym_comment,
    ACTIONS(182), 9,
      ts_builtin_sym_end,
      aux_sym_type_token1,
      aux_sym_type_token2,
      aux_sym_type_token3,
      aux_sym_type_token4,
      aux_sym_type_token5,
      aux_sym_type_token6,
      aux_sym_type_token7,
      aux_sym__start_block_token1,
  [2289] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(67), 1,
      sym_comment,
    ACTIONS(184), 9,
      ts_builtin_sym_end,
      aux_sym_type_token1,
      aux_sym_type_token2,
      aux_sym_type_token3,
      aux_sym_type_token4,
      aux_sym_type_token5,
      aux_sym_type_token6,
      aux_sym_type_token7,
      aux_sym__start_block_token1,
  [2307] = 11,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      sym__identifier,
    ACTIONS(101), 1,
      sym_string,
    ACTIONS(103), 1,
      aux_sym_float_token1,
    ACTIONS(105), 1,
      aux_sym_integer_token1,
    STATE(2), 1,
      sym_integer,
    STATE(7), 1,
      sym_reference,
    STATE(8), 1,
      sym_float,
    STATE(68), 1,
      sym_comment,
    STATE(98), 1,
      sym_parameter,
    STATE(102), 1,
      sym__literal,
  [2341] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(69), 1,
      sym_comment,
    ACTIONS(186), 9,
      ts_builtin_sym_end,
      aux_sym_type_token1,
      aux_sym_type_token2,
      aux_sym_type_token3,
      aux_sym_type_token4,
      aux_sym_type_token5,
      aux_sym_type_token6,
      aux_sym_type_token7,
      aux_sym__start_block_token1,
  [2359] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(70), 1,
      sym_comment,
    ACTIONS(188), 9,
      ts_builtin_sym_end,
      aux_sym_type_token1,
      aux_sym_type_token2,
      aux_sym_type_token3,
      aux_sym_type_token4,
      aux_sym_type_token5,
      aux_sym_type_token6,
      aux_sym_type_token7,
      aux_sym__start_block_token1,
  [2377] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(71), 1,
      sym_comment,
    ACTIONS(190), 9,
      ts_builtin_sym_end,
      aux_sym_type_token1,
      aux_sym_type_token2,
      aux_sym_type_token3,
      aux_sym_type_token4,
      aux_sym_type_token5,
      aux_sym_type_token6,
      aux_sym_type_token7,
      aux_sym__start_block_token1,
  [2395] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(72), 1,
      sym_comment,
    ACTIONS(192), 9,
      ts_builtin_sym_end,
      aux_sym_type_token1,
      aux_sym_type_token2,
      aux_sym_type_token3,
      aux_sym_type_token4,
      aux_sym_type_token5,
      aux_sym_type_token6,
      aux_sym_type_token7,
      aux_sym__start_block_token1,
  [2413] = 9,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(194), 1,
      aux_sym__end_block_token1,
    ACTIONS(196), 1,
      anon_sym_word,
    ACTIONS(199), 1,
      aux_sym_set_statement_token1,
    ACTIONS(202), 1,
      aux_sym_let_statement_token1,
    STATE(92), 1,
      sym__inner_block,
    STATE(111), 1,
      sym_statement,
    STATE(73), 2,
      sym_comment,
      aux_sym_block_repeat1,
    STATE(104), 2,
      sym_set_statement,
      sym_let_statement,
  [2443] = 11,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(127), 1,
      sym__identifier,
    ACTIONS(131), 1,
      sym_string,
    ACTIONS(133), 1,
      aux_sym_float_token1,
    ACTIONS(135), 1,
      aux_sym_integer_token1,
    STATE(74), 1,
      sym_comment,
    STATE(82), 1,
      sym_parameter,
    STATE(85), 1,
      sym__literal,
    STATE(86), 1,
      sym_reference,
    STATE(87), 1,
      sym_float,
    STATE(88), 1,
      sym_integer,
  [2477] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(75), 1,
      sym_comment,
    ACTIONS(205), 9,
      ts_builtin_sym_end,
      aux_sym_type_token1,
      aux_sym_type_token2,
      aux_sym_type_token3,
      aux_sym_type_token4,
      aux_sym_type_token5,
      aux_sym_type_token6,
      aux_sym_type_token7,
      aux_sym__start_block_token1,
  [2495] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(76), 1,
      sym_comment,
    ACTIONS(207), 7,
      aux_sym_set_statement_token2,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_CARET_EQ,
  [2511] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(77), 1,
      sym_comment,
    ACTIONS(209), 7,
      aux_sym_set_statement_token2,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_CARET_EQ,
  [2527] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(211), 1,
      anon_sym_COLON_EQ,
    STATE(10), 1,
      sym_assignment,
    STATE(78), 1,
      sym_comment,
    ACTIONS(213), 5,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_CARET_EQ,
  [2547] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(217), 1,
      aux_sym_integer_token1,
    STATE(79), 1,
      sym_comment,
    ACTIONS(215), 5,
      sym__terminator,
      anon_sym_COMMA,
      sym__identifier,
      sym_string,
      aux_sym_float_token1,
  [2564] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(21), 1,
      aux_sym_integer_token1,
    STATE(80), 1,
      sym_comment,
    ACTIONS(19), 5,
      sym__terminator,
      anon_sym_COMMA,
      sym__identifier,
      sym_string,
      aux_sym_float_token1,
  [2581] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(17), 1,
      aux_sym_integer_token1,
    STATE(81), 1,
      sym_comment,
    ACTIONS(15), 5,
      sym__terminator,
      anon_sym_COMMA,
      sym__identifier,
      sym_string,
      aux_sym_float_token1,
  [2598] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(219), 1,
      aux_sym_integer_token1,
    STATE(82), 1,
      sym_comment,
    ACTIONS(154), 5,
      sym__terminator,
      anon_sym_COMMA,
      sym__identifier,
      sym_string,
      aux_sym_float_token1,
  [2615] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(25), 1,
      aux_sym_integer_token1,
    STATE(83), 1,
      sym_comment,
    ACTIONS(23), 5,
      sym__terminator,
      anon_sym_COMMA,
      sym__identifier,
      sym_string,
      aux_sym_float_token1,
  [2632] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(13), 1,
      aux_sym_integer_token1,
    STATE(84), 1,
      sym_comment,
    ACTIONS(11), 5,
      sym__terminator,
      anon_sym_COMMA,
      sym__identifier,
      sym_string,
      aux_sym_float_token1,
  [2649] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(223), 1,
      aux_sym_integer_token1,
    STATE(85), 1,
      sym_comment,
    ACTIONS(221), 5,
      sym__terminator,
      anon_sym_COMMA,
      sym__identifier,
      sym_string,
      aux_sym_float_token1,
  [2666] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(29), 1,
      aux_sym_integer_token1,
    STATE(86), 1,
      sym_comment,
    ACTIONS(27), 5,
      sym__terminator,
      anon_sym_COMMA,
      sym__identifier,
      sym_string,
      aux_sym_float_token1,
  [2683] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    STATE(87), 1,
      sym_comment,
    ACTIONS(31), 5,
      sym__terminator,
      anon_sym_COMMA,
      sym__identifier,
      sym_string,
      aux_sym_float_token1,
  [2700] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      aux_sym_integer_token1,
    STATE(88), 1,
      sym_comment,
    ACTIONS(7), 5,
      sym__terminator,
      anon_sym_COMMA,
      sym__identifier,
      sym_string,
      aux_sym_float_token1,
  [2717] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(89), 1,
      sym_comment,
    ACTIONS(225), 4,
      aux_sym__end_block_token1,
      anon_sym_word,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
  [2730] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(227), 1,
      sym__identifier,
    ACTIONS(229), 1,
      aux_sym_user_defined_function_token1,
    STATE(90), 1,
      sym_comment,
    STATE(108), 2,
      sym_game_feature,
      sym_user_defined_function,
  [2747] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(91), 1,
      sym_comment,
    ACTIONS(231), 4,
      aux_sym__end_block_token1,
      anon_sym_word,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
  [2760] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      sym_comment,
    ACTIONS(233), 4,
      aux_sym__end_block_token1,
      anon_sym_word,
      aux_sym_set_statement_token1,
      aux_sym_let_statement_token1,
  [2773] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(235), 1,
      sym__identifier,
    STATE(77), 1,
      sym_variable,
    STATE(93), 1,
      sym_comment,
    STATE(106), 1,
      sym_left,
  [2789] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    ACTIONS(240), 1,
      anon_sym_RBRACE,
    STATE(94), 2,
      sym_comment,
      aux_sym__parameter_list_repeat1,
  [2803] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    ACTIONS(244), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      sym_comment,
    STATE(96), 1,
      aux_sym__parameter_list_repeat1,
  [2819] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    ACTIONS(246), 1,
      anon_sym_RBRACE,
    STATE(94), 1,
      aux_sym__parameter_list_repeat1,
    STATE(96), 1,
      sym_comment,
  [2835] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(235), 1,
      sym__identifier,
    STATE(77), 1,
      sym_variable,
    STATE(78), 1,
      sym_left,
    STATE(97), 1,
      sym_comment,
  [2851] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(98), 1,
      sym_comment,
    ACTIONS(240), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2862] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(248), 1,
      sym__identifier,
    STATE(99), 1,
      sym_comment,
    STATE(118), 1,
      sym_script_name,
  [2875] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(250), 1,
      sym__identifier,
    STATE(100), 1,
      sym_comment,
    STATE(103), 1,
      sym_variable,
  [2888] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(252), 1,
      anon_sym_LBRACE,
    STATE(101), 1,
      sym_comment,
    STATE(121), 1,
      sym__enclosed_parameter_list,
  [2901] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(102), 1,
      sym_comment,
    ACTIONS(221), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2912] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(254), 1,
      sym__terminator,
    STATE(103), 1,
      sym_comment,
  [2922] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(256), 1,
      sym__terminator,
    STATE(104), 1,
      sym_comment,
  [2932] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(258), 1,
      sym__terminator,
    STATE(105), 1,
      sym_comment,
  [2942] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(260), 1,
      aux_sym_set_statement_token2,
    STATE(106), 1,
      sym_comment,
  [2952] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(207), 1,
      sym__terminator,
    STATE(107), 1,
      sym_comment,
  [2962] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(262), 1,
      sym__terminator,
    STATE(108), 1,
      sym_comment,
  [2972] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(264), 1,
      sym__terminator,
    STATE(109), 1,
      sym_comment,
  [2982] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(266), 1,
      sym__terminator,
    STATE(110), 1,
      sym_comment,
  [2992] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(268), 1,
      sym__terminator,
    STATE(111), 1,
      sym_comment,
  [3002] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(270), 1,
      anon_sym_RBRACE,
    STATE(112), 1,
      sym_comment,
  [3012] = 3,
    ACTIONS(272), 1,
      anon_sym_SEMI,
    ACTIONS(274), 1,
      aux_sym_comment_token1,
    STATE(113), 1,
      sym_comment,
  [3022] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(276), 1,
      sym__terminator,
    STATE(114), 1,
      sym_comment,
  [3032] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(278), 1,
      sym__terminator,
    STATE(115), 1,
      sym_comment,
  [3042] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(280), 1,
      sym__terminator,
    STATE(116), 1,
      sym_comment,
  [3052] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(282), 1,
      sym__identifier,
    STATE(117), 1,
      sym_comment,
  [3062] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(284), 1,
      sym__terminator,
    STATE(118), 1,
      sym_comment,
  [3072] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(286), 1,
      sym__terminator,
    STATE(119), 1,
      sym_comment,
  [3082] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(288), 1,
      ts_builtin_sym_end,
    STATE(120), 1,
      sym_comment,
  [3092] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(290), 1,
      sym__terminator,
    STATE(121), 1,
      sym_comment,
  [3102] = 1,
    ACTIONS(292), 1,
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
  [SMALL_STATE(10)] = 295,
  [SMALL_STATE(11)] = 359,
  [SMALL_STATE(12)] = 415,
  [SMALL_STATE(13)] = 471,
  [SMALL_STATE(14)] = 527,
  [SMALL_STATE(15)] = 561,
  [SMALL_STATE(16)] = 595,
  [SMALL_STATE(17)] = 629,
  [SMALL_STATE(18)] = 663,
  [SMALL_STATE(19)] = 694,
  [SMALL_STATE(20)] = 755,
  [SMALL_STATE(21)] = 786,
  [SMALL_STATE(22)] = 817,
  [SMALL_STATE(23)] = 848,
  [SMALL_STATE(24)] = 879,
  [SMALL_STATE(25)] = 940,
  [SMALL_STATE(26)] = 1001,
  [SMALL_STATE(27)] = 1032,
  [SMALL_STATE(28)] = 1063,
  [SMALL_STATE(29)] = 1094,
  [SMALL_STATE(30)] = 1125,
  [SMALL_STATE(31)] = 1186,
  [SMALL_STATE(32)] = 1217,
  [SMALL_STATE(33)] = 1248,
  [SMALL_STATE(34)] = 1279,
  [SMALL_STATE(35)] = 1310,
  [SMALL_STATE(36)] = 1341,
  [SMALL_STATE(37)] = 1400,
  [SMALL_STATE(38)] = 1431,
  [SMALL_STATE(39)] = 1490,
  [SMALL_STATE(40)] = 1521,
  [SMALL_STATE(41)] = 1552,
  [SMALL_STATE(42)] = 1588,
  [SMALL_STATE(43)] = 1626,
  [SMALL_STATE(44)] = 1664,
  [SMALL_STATE(45)] = 1707,
  [SMALL_STATE(46)] = 1748,
  [SMALL_STATE(47)] = 1791,
  [SMALL_STATE(48)] = 1813,
  [SMALL_STATE(49)] = 1835,
  [SMALL_STATE(50)] = 1857,
  [SMALL_STATE(51)] = 1879,
  [SMALL_STATE(52)] = 1901,
  [SMALL_STATE(53)] = 1923,
  [SMALL_STATE(54)] = 1945,
  [SMALL_STATE(55)] = 1967,
  [SMALL_STATE(56)] = 1989,
  [SMALL_STATE(57)] = 2011,
  [SMALL_STATE(58)] = 2033,
  [SMALL_STATE(59)] = 2073,
  [SMALL_STATE(60)] = 2095,
  [SMALL_STATE(61)] = 2135,
  [SMALL_STATE(62)] = 2157,
  [SMALL_STATE(63)] = 2179,
  [SMALL_STATE(64)] = 2201,
  [SMALL_STATE(65)] = 2236,
  [SMALL_STATE(66)] = 2271,
  [SMALL_STATE(67)] = 2289,
  [SMALL_STATE(68)] = 2307,
  [SMALL_STATE(69)] = 2341,
  [SMALL_STATE(70)] = 2359,
  [SMALL_STATE(71)] = 2377,
  [SMALL_STATE(72)] = 2395,
  [SMALL_STATE(73)] = 2413,
  [SMALL_STATE(74)] = 2443,
  [SMALL_STATE(75)] = 2477,
  [SMALL_STATE(76)] = 2495,
  [SMALL_STATE(77)] = 2511,
  [SMALL_STATE(78)] = 2527,
  [SMALL_STATE(79)] = 2547,
  [SMALL_STATE(80)] = 2564,
  [SMALL_STATE(81)] = 2581,
  [SMALL_STATE(82)] = 2598,
  [SMALL_STATE(83)] = 2615,
  [SMALL_STATE(84)] = 2632,
  [SMALL_STATE(85)] = 2649,
  [SMALL_STATE(86)] = 2666,
  [SMALL_STATE(87)] = 2683,
  [SMALL_STATE(88)] = 2700,
  [SMALL_STATE(89)] = 2717,
  [SMALL_STATE(90)] = 2730,
  [SMALL_STATE(91)] = 2747,
  [SMALL_STATE(92)] = 2760,
  [SMALL_STATE(93)] = 2773,
  [SMALL_STATE(94)] = 2789,
  [SMALL_STATE(95)] = 2803,
  [SMALL_STATE(96)] = 2819,
  [SMALL_STATE(97)] = 2835,
  [SMALL_STATE(98)] = 2851,
  [SMALL_STATE(99)] = 2862,
  [SMALL_STATE(100)] = 2875,
  [SMALL_STATE(101)] = 2888,
  [SMALL_STATE(102)] = 2901,
  [SMALL_STATE(103)] = 2912,
  [SMALL_STATE(104)] = 2922,
  [SMALL_STATE(105)] = 2932,
  [SMALL_STATE(106)] = 2942,
  [SMALL_STATE(107)] = 2952,
  [SMALL_STATE(108)] = 2962,
  [SMALL_STATE(109)] = 2972,
  [SMALL_STATE(110)] = 2982,
  [SMALL_STATE(111)] = 2992,
  [SMALL_STATE(112)] = 3002,
  [SMALL_STATE(113)] = 3012,
  [SMALL_STATE(114)] = 3022,
  [SMALL_STATE(115)] = 3032,
  [SMALL_STATE(116)] = 3042,
  [SMALL_STATE(117)] = 3052,
  [SMALL_STATE(118)] = 3062,
  [SMALL_STATE(119)] = 3072,
  [SMALL_STATE(120)] = 3082,
  [SMALL_STATE(121)] = 3092,
  [SMALL_STATE(122)] = 3102,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1, .production_id = 5),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1, .production_id = 5),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1, .production_id = 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1, .production_id = 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1, .production_id = 3),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1, .production_id = 3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1, .production_id = 4),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1, .production_id = 4),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right, 1, .production_id = 8),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unary_expression, 2, .production_id = 9),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unary_expression, 2, .production_id = 9),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__binary_expression, 3, .production_id = 10),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binary_expression, 3, .production_id = 10),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, .production_id = 8),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, .production_id = 8),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, .production_id = 9),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, .production_id = 9),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(117),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(90),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_list_opt_comma, 1),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parameter_list_opt_comma_repeat1, 2), SHIFT_REPEAT(84),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parameter_list_opt_comma_repeat1, 2), SHIFT_REPEAT(74),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parameter_list_opt_comma_repeat1, 2), SHIFT_REPEAT(81),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parameter_list_opt_comma_repeat1, 2), SHIFT_REPEAT(80),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__parameter_list_opt_comma_repeat1, 2), SHIFT_REPEAT(83),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameter_list_opt_comma_repeat1, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_list_opt_comma, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operator, 1),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operator, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game_feature, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__end_block, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, .production_id = 6),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__top_level, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(104),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(93),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(97),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_declaration, 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameter_list_opt_comma_repeat1, 1),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__parameter_list_opt_comma_repeat1, 1),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__parameter_list_opt_comma_repeat1, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 2),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 1, .production_id = 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__start_block, 3),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inner_block, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parameter_list_repeat1, 2), SHIFT_REPEAT(68),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameter_list_repeat1, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_list, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_list, 2),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enclosed_parameter_list, 3),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4, .production_id = 7),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enclosed_parameter_list, 2),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_statement, 4, .production_id = 7),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game_feature, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_name, 1),
  [288] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_defined_function, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
