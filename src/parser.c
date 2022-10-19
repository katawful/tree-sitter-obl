#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 67
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 7

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
  sym_statement = 17,
  anon_sym_SEMI = 18,
  aux_sym_comment_token1 = 19,
  sym_string = 20,
  aux_sym_float_token1 = 21,
  aux_sym_integer_token1 = 22,
  sym__terminator = 23,
  sym_source_file = 24,
  sym_script_declaration = 25,
  sym_script_name = 26,
  sym__top_level = 27,
  sym_variable_declaration = 28,
  sym_type = 29,
  sym_variable = 30,
  sym_block = 31,
  sym__start_block = 32,
  sym_game_feature = 33,
  sym_user_defined_function = 34,
  sym__parameter_list = 35,
  sym__parameter_list_opt_comma = 36,
  sym__enclosed_parameter_list = 37,
  sym_parameter = 38,
  sym__inner_block = 39,
  sym__end_block = 40,
  sym_comment = 41,
  sym__literal = 42,
  sym_reference = 43,
  sym_float = 44,
  sym_integer = 45,
  aux_sym_source_file_repeat1 = 46,
  aux_sym_block_repeat1 = 47,
  aux_sym__parameter_list_repeat1 = 48,
  aux_sym__parameter_list_opt_comma_repeat1 = 49,
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
  [sym_statement] = "statement",
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
  [sym_comment] = "comment",
  [sym__literal] = "parameter",
  [sym_reference] = "reference",
  [sym_float] = "float",
  [sym_integer] = "integer",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym__parameter_list_repeat1] = "_parameter_list_repeat1",
  [aux_sym__parameter_list_opt_comma_repeat1] = "_parameter_list_opt_comma_repeat1",
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
  [sym_statement] = sym_statement,
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
  [sym_comment] = sym_comment,
  [sym__literal] = sym__literal,
  [sym_reference] = sym_reference,
  [sym_float] = sym_float,
  [sym_integer] = sym_integer,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym__parameter_list_repeat1] = aux_sym__parameter_list_repeat1,
  [aux_sym__parameter_list_opt_comma_repeat1] = aux_sym__parameter_list_opt_comma_repeat1,
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
  [sym_statement] = {
    .visible = true,
    .named = true,
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = true,
    .named = false,
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
};

enum {
  field_float = 1,
  field_integer = 2,
  field_reference = 3,
  field_string = 4,
  field_variable = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_float] = "float",
  [field_integer] = "integer",
  [field_reference] = "reference",
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
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
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
  [39] = 23,
  [40] = 40,
  [41] = 24,
  [42] = 19,
  [43] = 43,
  [44] = 26,
  [45] = 28,
  [46] = 20,
  [47] = 27,
  [48] = 25,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == ';') ADVANCE(12);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == '{') ADVANCE(9);
      if (lookahead == '}') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 4:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(15);
      if (lookahead == '\r') ADVANCE(17);
      END_STATE();
    case 5:
      if (eof) ADVANCE(7);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 6:
      if (eof) ADVANCE(7);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead == ';') ADVANCE(13);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(15);
      if (lookahead == '\\') ADVANCE(4);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
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
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(12)
      END_STATE();
    case 2:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(13);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 4:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 5:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 7:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(18);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 8:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 9:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 10:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 11:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(23);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(24);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(25);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 13:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 15:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 16:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(28);
      END_STATE();
    case 17:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(29);
      END_STATE();
    case 18:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 19:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 20:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(32);
      END_STATE();
    case 21:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 22:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(34);
      END_STATE();
    case 23:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(35);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 24:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 25:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(39);
      END_STATE();
    case 27:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 28:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym__end_block_token1);
      END_STATE();
    case 30:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 31:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_type_token1);
      END_STATE();
    case 33:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(44);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_type_token5);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_script_declaration_token1);
      END_STATE();
    case 36:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 37:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 38:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_statement);
      END_STATE();
    case 40:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(48);
      END_STATE();
    case 41:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 42:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(50);
      END_STATE();
    case 43:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(51);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_type_token3);
      END_STATE();
    case 45:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(52);
      END_STATE();
    case 46:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(53);
      END_STATE();
    case 47:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 48:
      if (lookahead == '_') ADVANCE(55);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym__start_block_token1);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_type_token4);
      END_STATE();
    case 51:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 52:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(57);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_type_token2);
      END_STATE();
    case 54:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(58);
      END_STATE();
    case 55:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(59);
      END_STATE();
    case 56:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 57:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 58:
      if (lookahead == '_') ADVANCE(62);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 60:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 62:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(66);
      END_STATE();
    case 63:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_user_defined_function_token1);
      END_STATE();
    case 65:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(68);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_type_token6);
      END_STATE();
    case 68:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 69:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_script_declaration_token2);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_type_token7);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0, .external_lex_state = 1},
  [6] = {.lex_state = 0, .external_lex_state = 1},
  [7] = {.lex_state = 0, .external_lex_state = 1},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0, .external_lex_state = 1},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0, .external_lex_state = 1},
  [20] = {.lex_state = 0, .external_lex_state = 1},
  [21] = {.lex_state = 0, .external_lex_state = 1},
  [22] = {.lex_state = 0, .external_lex_state = 1},
  [23] = {.lex_state = 0, .external_lex_state = 1},
  [24] = {.lex_state = 0, .external_lex_state = 1},
  [25] = {.lex_state = 0, .external_lex_state = 1},
  [26] = {.lex_state = 0, .external_lex_state = 1},
  [27] = {.lex_state = 0, .external_lex_state = 1},
  [28] = {.lex_state = 0, .external_lex_state = 1},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0, .external_lex_state = 1},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0, .external_lex_state = 1},
  [56] = {.lex_state = 0, .external_lex_state = 1},
  [57] = {.lex_state = 0, .external_lex_state = 1},
  [58] = {.lex_state = 0, .external_lex_state = 1},
  [59] = {.lex_state = 0, .external_lex_state = 1},
  [60] = {.lex_state = 16},
  [61] = {.lex_state = 0, .external_lex_state = 1},
  [62] = {.lex_state = 0, .external_lex_state = 1},
  [63] = {.lex_state = 0, .external_lex_state = 1},
  [64] = {.lex_state = 0, .external_lex_state = 1},
  [65] = {.lex_state = 0, .external_lex_state = 1},
  [66] = {(TSStateId)(-1)},
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
    [sym_statement] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(3),
    [sym_string] = ACTIONS(1),
    [aux_sym_float_token1] = ACTIONS(1),
    [aux_sym_integer_token1] = ACTIONS(1),
    [sym__terminator] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(53),
    [sym_script_declaration] = STATE(2),
    [sym_comment] = STATE(1),
    [aux_sym_script_declaration_token1] = ACTIONS(5),
    [aux_sym_script_declaration_token2] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      aux_sym__start_block_token1,
    STATE(2), 1,
      sym_comment,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(16), 1,
      sym__top_level,
    STATE(29), 1,
      sym__start_block,
    STATE(37), 1,
      sym_type,
    STATE(17), 2,
      sym_variable_declaration,
      sym_block,
    ACTIONS(9), 7,
      aux_sym_type_token1,
      aux_sym_type_token2,
      aux_sym_type_token3,
      aux_sym_type_token4,
      aux_sym_type_token5,
      aux_sym_type_token6,
      aux_sym_type_token7,
  [38] = 10,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(11), 1,
      aux_sym__start_block_token1,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_comment,
    STATE(4), 1,
      aux_sym_source_file_repeat1,
    STATE(16), 1,
      sym__top_level,
    STATE(29), 1,
      sym__start_block,
    STATE(37), 1,
      sym_type,
    STATE(17), 2,
      sym_variable_declaration,
      sym_block,
    ACTIONS(9), 7,
      aux_sym_type_token1,
      aux_sym_type_token2,
      aux_sym_type_token3,
      aux_sym_type_token4,
      aux_sym_type_token5,
      aux_sym_type_token6,
      aux_sym_type_token7,
  [76] = 9,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(20), 1,
      aux_sym__start_block_token1,
    STATE(16), 1,
      sym__top_level,
    STATE(29), 1,
      sym__start_block,
    STATE(37), 1,
      sym_type,
    STATE(4), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(17), 2,
      sym_variable_declaration,
      sym_block,
    ACTIONS(17), 7,
      aux_sym_type_token1,
      aux_sym_type_token2,
      aux_sym_type_token3,
      aux_sym_type_token4,
      aux_sym_type_token5,
      aux_sym_type_token6,
      aux_sym_type_token7,
  [112] = 13,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(23), 1,
      sym__identifier,
    ACTIONS(26), 1,
      anon_sym_COMMA,
    ACTIONS(29), 1,
      sym_string,
    ACTIONS(32), 1,
      aux_sym_float_token1,
    ACTIONS(35), 1,
      aux_sym_integer_token1,
    ACTIONS(38), 1,
      sym__terminator,
    STATE(20), 1,
      sym_reference,
    STATE(22), 1,
      sym_parameter,
    STATE(25), 1,
      sym_integer,
    STATE(27), 1,
      sym_float,
    STATE(28), 1,
      sym__literal,
    STATE(5), 2,
      sym_comment,
      aux_sym__parameter_list_opt_comma_repeat1,
  [153] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(40), 1,
      sym__identifier,
    ACTIONS(42), 1,
      anon_sym_COMMA,
    ACTIONS(44), 1,
      sym_string,
    ACTIONS(46), 1,
      aux_sym_float_token1,
    ACTIONS(48), 1,
      aux_sym_integer_token1,
    ACTIONS(50), 1,
      sym__terminator,
    STATE(5), 1,
      aux_sym__parameter_list_opt_comma_repeat1,
    STATE(6), 1,
      sym_comment,
    STATE(20), 1,
      sym_reference,
    STATE(22), 1,
      sym_parameter,
    STATE(25), 1,
      sym_integer,
    STATE(27), 1,
      sym_float,
    STATE(28), 1,
      sym__literal,
  [196] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(40), 1,
      sym__identifier,
    ACTIONS(42), 1,
      anon_sym_COMMA,
    ACTIONS(44), 1,
      sym_string,
    ACTIONS(46), 1,
      aux_sym_float_token1,
    ACTIONS(48), 1,
      aux_sym_integer_token1,
    ACTIONS(52), 1,
      sym__terminator,
    STATE(6), 1,
      aux_sym__parameter_list_opt_comma_repeat1,
    STATE(7), 1,
      sym_comment,
    STATE(20), 1,
      sym_reference,
    STATE(22), 1,
      sym_parameter,
    STATE(25), 1,
      sym_integer,
    STATE(27), 1,
      sym_float,
    STATE(28), 1,
      sym__literal,
  [239] = 13,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(54), 1,
      sym__identifier,
    ACTIONS(56), 1,
      anon_sym_RBRACE,
    ACTIONS(58), 1,
      sym_string,
    ACTIONS(60), 1,
      aux_sym_float_token1,
    ACTIONS(62), 1,
      aux_sym_integer_token1,
    STATE(8), 1,
      sym_comment,
    STATE(34), 1,
      sym_parameter,
    STATE(45), 1,
      sym__literal,
    STATE(46), 1,
      sym_reference,
    STATE(47), 1,
      sym_float,
    STATE(48), 1,
      sym_integer,
    STATE(54), 1,
      sym__parameter_list,
  [279] = 13,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(40), 1,
      sym__identifier,
    ACTIONS(44), 1,
      sym_string,
    ACTIONS(46), 1,
      aux_sym_float_token1,
    ACTIONS(48), 1,
      aux_sym_integer_token1,
    ACTIONS(64), 1,
      sym__terminator,
    STATE(7), 1,
      sym_parameter,
    STATE(9), 1,
      sym_comment,
    STATE(20), 1,
      sym_reference,
    STATE(25), 1,
      sym_integer,
    STATE(27), 1,
      sym_float,
    STATE(28), 1,
      sym__literal,
    STATE(59), 1,
      sym__parameter_list_opt_comma,
  [319] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(10), 1,
      sym_comment,
    ACTIONS(66), 9,
      ts_builtin_sym_end,
      aux_sym_type_token1,
      aux_sym_type_token2,
      aux_sym_type_token3,
      aux_sym_type_token4,
      aux_sym_type_token5,
      aux_sym_type_token6,
      aux_sym_type_token7,
      aux_sym__start_block_token1,
  [337] = 11,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(54), 1,
      sym__identifier,
    ACTIONS(58), 1,
      sym_string,
    ACTIONS(60), 1,
      aux_sym_float_token1,
    ACTIONS(62), 1,
      aux_sym_integer_token1,
    STATE(11), 1,
      sym_comment,
    STATE(45), 1,
      sym__literal,
    STATE(46), 1,
      sym_reference,
    STATE(47), 1,
      sym_float,
    STATE(48), 1,
      sym_integer,
    STATE(50), 1,
      sym_parameter,
  [371] = 11,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(40), 1,
      sym__identifier,
    ACTIONS(44), 1,
      sym_string,
    ACTIONS(46), 1,
      aux_sym_float_token1,
    ACTIONS(48), 1,
      aux_sym_integer_token1,
    STATE(12), 1,
      sym_comment,
    STATE(20), 1,
      sym_reference,
    STATE(21), 1,
      sym_parameter,
    STATE(25), 1,
      sym_integer,
    STATE(27), 1,
      sym_float,
    STATE(28), 1,
      sym__literal,
  [405] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(13), 1,
      sym_comment,
    ACTIONS(68), 9,
      ts_builtin_sym_end,
      aux_sym_type_token1,
      aux_sym_type_token2,
      aux_sym_type_token3,
      aux_sym_type_token4,
      aux_sym_type_token5,
      aux_sym_type_token6,
      aux_sym_type_token7,
      aux_sym__start_block_token1,
  [423] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(14), 1,
      sym_comment,
    ACTIONS(70), 9,
      ts_builtin_sym_end,
      aux_sym_type_token1,
      aux_sym_type_token2,
      aux_sym_type_token3,
      aux_sym_type_token4,
      aux_sym_type_token5,
      aux_sym_type_token6,
      aux_sym_type_token7,
      aux_sym__start_block_token1,
  [441] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(15), 1,
      sym_comment,
    ACTIONS(72), 9,
      ts_builtin_sym_end,
      aux_sym_type_token1,
      aux_sym_type_token2,
      aux_sym_type_token3,
      aux_sym_type_token4,
      aux_sym_type_token5,
      aux_sym_type_token6,
      aux_sym_type_token7,
      aux_sym__start_block_token1,
  [459] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(16), 1,
      sym_comment,
    ACTIONS(74), 9,
      ts_builtin_sym_end,
      aux_sym_type_token1,
      aux_sym_type_token2,
      aux_sym_type_token3,
      aux_sym_type_token4,
      aux_sym_type_token5,
      aux_sym_type_token6,
      aux_sym_type_token7,
      aux_sym__start_block_token1,
  [477] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(17), 1,
      sym_comment,
    ACTIONS(76), 9,
      ts_builtin_sym_end,
      aux_sym_type_token1,
      aux_sym_type_token2,
      aux_sym_type_token3,
      aux_sym_type_token4,
      aux_sym_type_token5,
      aux_sym_type_token6,
      aux_sym_type_token7,
      aux_sym__start_block_token1,
  [495] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(18), 1,
      sym_comment,
    ACTIONS(78), 9,
      ts_builtin_sym_end,
      aux_sym_type_token1,
      aux_sym_type_token2,
      aux_sym_type_token3,
      aux_sym_type_token4,
      aux_sym_type_token5,
      aux_sym_type_token6,
      aux_sym_type_token7,
      aux_sym__start_block_token1,
  [513] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(82), 1,
      aux_sym_integer_token1,
    STATE(19), 1,
      sym_comment,
    ACTIONS(80), 5,
      sym__terminator,
      anon_sym_COMMA,
      sym__identifier,
      sym_string,
      aux_sym_float_token1,
  [530] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(86), 1,
      aux_sym_integer_token1,
    STATE(20), 1,
      sym_comment,
    ACTIONS(84), 5,
      sym__terminator,
      anon_sym_COMMA,
      sym__identifier,
      sym_string,
      aux_sym_float_token1,
  [547] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(88), 1,
      aux_sym_integer_token1,
    STATE(21), 1,
      sym_comment,
    ACTIONS(38), 5,
      sym__terminator,
      anon_sym_COMMA,
      sym__identifier,
      sym_string,
      aux_sym_float_token1,
  [564] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(92), 1,
      aux_sym_integer_token1,
    STATE(22), 1,
      sym_comment,
    ACTIONS(90), 5,
      sym__terminator,
      anon_sym_COMMA,
      sym__identifier,
      sym_string,
      aux_sym_float_token1,
  [581] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(96), 1,
      aux_sym_integer_token1,
    STATE(23), 1,
      sym_comment,
    ACTIONS(94), 5,
      sym__terminator,
      anon_sym_COMMA,
      sym__identifier,
      sym_string,
      aux_sym_float_token1,
  [598] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(100), 1,
      aux_sym_integer_token1,
    STATE(24), 1,
      sym_comment,
    ACTIONS(98), 5,
      sym__terminator,
      anon_sym_COMMA,
      sym__identifier,
      sym_string,
      aux_sym_float_token1,
  [615] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(104), 1,
      aux_sym_integer_token1,
    STATE(25), 1,
      sym_comment,
    ACTIONS(102), 5,
      sym__terminator,
      anon_sym_COMMA,
      sym__identifier,
      sym_string,
      aux_sym_float_token1,
  [632] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(108), 1,
      aux_sym_integer_token1,
    STATE(26), 1,
      sym_comment,
    ACTIONS(106), 5,
      sym__terminator,
      anon_sym_COMMA,
      sym__identifier,
      sym_string,
      aux_sym_float_token1,
  [649] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(112), 1,
      aux_sym_integer_token1,
    STATE(27), 1,
      sym_comment,
    ACTIONS(110), 5,
      sym__terminator,
      anon_sym_COMMA,
      sym__identifier,
      sym_string,
      aux_sym_float_token1,
  [666] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(116), 1,
      aux_sym_integer_token1,
    STATE(28), 1,
      sym_comment,
    ACTIONS(114), 5,
      sym__terminator,
      anon_sym_COMMA,
      sym__identifier,
      sym_string,
      aux_sym_float_token1,
  [683] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(118), 1,
      aux_sym__end_block_token1,
    ACTIONS(120), 1,
      sym_statement,
    STATE(10), 1,
      sym__end_block,
    STATE(29), 1,
      sym_comment,
    STATE(30), 1,
      aux_sym_block_repeat1,
    STATE(36), 1,
      sym__inner_block,
  [705] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(118), 1,
      aux_sym__end_block_token1,
    ACTIONS(120), 1,
      sym_statement,
    STATE(13), 1,
      sym__end_block,
    STATE(30), 1,
      sym_comment,
    STATE(31), 1,
      aux_sym_block_repeat1,
    STATE(36), 1,
      sym__inner_block,
  [727] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(122), 1,
      aux_sym__end_block_token1,
    ACTIONS(124), 1,
      sym_statement,
    STATE(36), 1,
      sym__inner_block,
    STATE(31), 2,
      sym_comment,
      aux_sym_block_repeat1,
  [744] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(127), 1,
      sym__identifier,
    ACTIONS(129), 1,
      aux_sym_user_defined_function_token1,
    STATE(32), 1,
      sym_comment,
    STATE(58), 2,
      sym_game_feature,
      sym_user_defined_function,
  [761] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    ACTIONS(133), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      sym_comment,
    STATE(35), 1,
      aux_sym__parameter_list_repeat1,
  [777] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    ACTIONS(135), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      aux_sym__parameter_list_repeat1,
    STATE(34), 1,
      sym_comment,
  [793] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    STATE(35), 2,
      sym_comment,
      aux_sym__parameter_list_repeat1,
  [807] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(36), 1,
      sym_comment,
    ACTIONS(142), 2,
      aux_sym__end_block_token1,
      sym_statement,
  [818] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(144), 1,
      sym__identifier,
    STATE(37), 1,
      sym_comment,
    STATE(64), 1,
      sym_variable,
  [831] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    STATE(38), 1,
      sym_comment,
    STATE(61), 1,
      sym__enclosed_parameter_list,
  [844] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(39), 1,
      sym_comment,
    ACTIONS(94), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [855] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(40), 1,
      sym_comment,
    ACTIONS(148), 2,
      aux_sym__end_block_token1,
      sym_statement,
  [866] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(41), 1,
      sym_comment,
    ACTIONS(98), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [877] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(42), 1,
      sym_comment,
    ACTIONS(80), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [888] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(43), 1,
      sym_comment,
    ACTIONS(150), 2,
      aux_sym__end_block_token1,
      sym_statement,
  [899] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(44), 1,
      sym_comment,
    ACTIONS(106), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [910] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(45), 1,
      sym_comment,
    ACTIONS(114), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [921] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(46), 1,
      sym_comment,
    ACTIONS(84), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [932] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(47), 1,
      sym_comment,
    ACTIONS(110), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [943] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(48), 1,
      sym_comment,
    ACTIONS(102), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [954] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(152), 1,
      sym__identifier,
    STATE(49), 1,
      sym_comment,
    STATE(55), 1,
      sym_script_name,
  [967] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(50), 1,
      sym_comment,
    ACTIONS(140), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [978] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(154), 1,
      sym__identifier,
    STATE(51), 1,
      sym_comment,
  [988] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(156), 1,
      sym__terminator,
    STATE(52), 1,
      sym_comment,
  [998] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(158), 1,
      ts_builtin_sym_end,
    STATE(53), 1,
      sym_comment,
  [1008] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(160), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      sym_comment,
  [1018] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(162), 1,
      sym__terminator,
    STATE(55), 1,
      sym_comment,
  [1028] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(164), 1,
      sym__terminator,
    STATE(56), 1,
      sym_comment,
  [1038] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(166), 1,
      sym__terminator,
    STATE(57), 1,
      sym_comment,
  [1048] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(168), 1,
      sym__terminator,
    STATE(58), 1,
      sym_comment,
  [1058] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(170), 1,
      sym__terminator,
    STATE(59), 1,
      sym_comment,
  [1068] = 3,
    ACTIONS(172), 1,
      anon_sym_SEMI,
    ACTIONS(174), 1,
      aux_sym_comment_token1,
    STATE(60), 1,
      sym_comment,
  [1078] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(176), 1,
      sym__terminator,
    STATE(61), 1,
      sym_comment,
  [1088] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(178), 1,
      sym__terminator,
    STATE(62), 1,
      sym_comment,
  [1098] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(180), 1,
      sym__terminator,
    STATE(63), 1,
      sym_comment,
  [1108] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(182), 1,
      sym__terminator,
    STATE(64), 1,
      sym_comment,
  [1118] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(184), 1,
      sym__terminator,
    STATE(65), 1,
      sym_comment,
  [1128] = 1,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 76,
  [SMALL_STATE(5)] = 112,
  [SMALL_STATE(6)] = 153,
  [SMALL_STATE(7)] = 196,
  [SMALL_STATE(8)] = 239,
  [SMALL_STATE(9)] = 279,
  [SMALL_STATE(10)] = 319,
  [SMALL_STATE(11)] = 337,
  [SMALL_STATE(12)] = 371,
  [SMALL_STATE(13)] = 405,
  [SMALL_STATE(14)] = 423,
  [SMALL_STATE(15)] = 441,
  [SMALL_STATE(16)] = 459,
  [SMALL_STATE(17)] = 477,
  [SMALL_STATE(18)] = 495,
  [SMALL_STATE(19)] = 513,
  [SMALL_STATE(20)] = 530,
  [SMALL_STATE(21)] = 547,
  [SMALL_STATE(22)] = 564,
  [SMALL_STATE(23)] = 581,
  [SMALL_STATE(24)] = 598,
  [SMALL_STATE(25)] = 615,
  [SMALL_STATE(26)] = 632,
  [SMALL_STATE(27)] = 649,
  [SMALL_STATE(28)] = 666,
  [SMALL_STATE(29)] = 683,
  [SMALL_STATE(30)] = 705,
  [SMALL_STATE(31)] = 727,
  [SMALL_STATE(32)] = 744,
  [SMALL_STATE(33)] = 761,
  [SMALL_STATE(34)] = 777,
  [SMALL_STATE(35)] = 793,
  [SMALL_STATE(36)] = 807,
  [SMALL_STATE(37)] = 818,
  [SMALL_STATE(38)] = 831,
  [SMALL_STATE(39)] = 844,
  [SMALL_STATE(40)] = 855,
  [SMALL_STATE(41)] = 866,
  [SMALL_STATE(42)] = 877,
  [SMALL_STATE(43)] = 888,
  [SMALL_STATE(44)] = 899,
  [SMALL_STATE(45)] = 910,
  [SMALL_STATE(46)] = 921,
  [SMALL_STATE(47)] = 932,
  [SMALL_STATE(48)] = 943,
  [SMALL_STATE(49)] = 954,
  [SMALL_STATE(50)] = 967,
  [SMALL_STATE(51)] = 978,
  [SMALL_STATE(52)] = 988,
  [SMALL_STATE(53)] = 998,
  [SMALL_STATE(54)] = 1008,
  [SMALL_STATE(55)] = 1018,
  [SMALL_STATE(56)] = 1028,
  [SMALL_STATE(57)] = 1038,
  [SMALL_STATE(58)] = 1048,
  [SMALL_STATE(59)] = 1058,
  [SMALL_STATE(60)] = 1068,
  [SMALL_STATE(61)] = 1078,
  [SMALL_STATE(62)] = 1088,
  [SMALL_STATE(63)] = 1098,
  [SMALL_STATE(64)] = 1108,
  [SMALL_STATE(65)] = 1118,
  [SMALL_STATE(66)] = 1128,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parameter_list_opt_comma_repeat1, 2), SHIFT_REPEAT(23),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parameter_list_opt_comma_repeat1, 2), SHIFT_REPEAT(12),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parameter_list_opt_comma_repeat1, 2), SHIFT_REPEAT(24),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parameter_list_opt_comma_repeat1, 2), SHIFT_REPEAT(19),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__parameter_list_opt_comma_repeat1, 2), SHIFT_REPEAT(26),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameter_list_opt_comma_repeat1, 2),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_list_opt_comma, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_list_opt_comma, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game_feature, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__end_block, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, .production_id = 6),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__top_level, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_declaration, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1, .production_id = 3),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1, .production_id = 3),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__parameter_list_opt_comma_repeat1, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameter_list_opt_comma_repeat1, 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__parameter_list_opt_comma_repeat1, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1, .production_id = 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1, .production_id = 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1, .production_id = 5),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1, .production_id = 5),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1, .production_id = 4),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1, .production_id = 4),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 1, .production_id = 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(62),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_list, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_list, 1),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parameter_list_repeat1, 2), SHIFT_REPEAT(11),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameter_list_repeat1, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__start_block, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inner_block, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enclosed_parameter_list, 3),
  [158] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_name, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enclosed_parameter_list, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game_feature, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_defined_function, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
