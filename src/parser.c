#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 47
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 1
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

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
  aux_sym_game_feature_token1 = 12,
  aux_sym_game_feature_token2 = 13,
  aux_sym_user_defined_function_token1 = 14,
  anon_sym_LBRACE = 15,
  anon_sym_COMMA = 16,
  anon_sym_RBRACE = 17,
  aux_sym__end_block_token1 = 18,
  anon_sym_SEMI = 19,
  aux_sym_comment_token1 = 20,
  sym__terminator = 21,
  sym_source_file = 22,
  sym_script_declaration = 23,
  sym_script_name = 24,
  sym__top_level = 25,
  sym_variable_declaration = 26,
  sym_type = 27,
  sym_variable = 28,
  sym_block = 29,
  sym__start_block = 30,
  sym_game_feature = 31,
  sym_user_defined_function = 32,
  sym_parameter_list = 33,
  sym_parameter = 34,
  sym__inner_block = 35,
  sym__end_block = 36,
  sym_statement = 37,
  sym_comment = 38,
  aux_sym_source_file_repeat1 = 39,
  aux_sym_block_repeat1 = 40,
  aux_sym_parameter_list_repeat1 = 41,
  anon_alias_sym_parameter = 42,
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
  [aux_sym_game_feature_token1] = "gamemode",
  [aux_sym_game_feature_token2] = "menumode",
  [aux_sym_user_defined_function_token1] = "function",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [aux_sym__end_block_token1] = "end",
  [anon_sym_SEMI] = ";",
  [aux_sym_comment_token1] = "comment_token1",
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
  [sym_parameter_list] = "parameter_list",
  [sym_parameter] = "parameter",
  [sym__inner_block] = "_inner_block",
  [sym__end_block] = "_end_block",
  [sym_statement] = "statement",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
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
  [aux_sym_game_feature_token1] = aux_sym_game_feature_token1,
  [aux_sym_game_feature_token2] = aux_sym_game_feature_token2,
  [aux_sym_user_defined_function_token1] = aux_sym_user_defined_function_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym__end_block_token1] = aux_sym__end_block_token1,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
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
  [sym_parameter_list] = sym_parameter_list,
  [sym_parameter] = sym_parameter,
  [sym__inner_block] = sym__inner_block,
  [sym__end_block] = sym__end_block,
  [sym_statement] = sym_statement,
  [sym_comment] = sym_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
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
  [aux_sym_game_feature_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_game_feature_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_user_defined_function_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
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
  [sym_parameter_list] = {
    .visible = true,
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
  [sym_comment] = {
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
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_parameter] = {
    .visible = true,
    .named = false,
  },
};

enum {
  field_variable = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_variable] = "variable",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_variable, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [0] = anon_alias_sym_parameter,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_variable, 2,
    sym_variable,
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
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == ',') ADVANCE(7);
      if (lookahead == ';') ADVANCE(10);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '{') ADVANCE(6);
      if (lookahead == '}') ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 2:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(13);
      if (lookahead == '\r') ADVANCE(15);
      END_STATE();
    case 3:
      if (eof) ADVANCE(5);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 4:
      if (eof) ADVANCE(5);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead == ';') ADVANCE(11);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(13);
      if (lookahead == '\\') ADVANCE(2);
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
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(4);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(5);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(6);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(7);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(8);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(9);
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
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 3:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 4:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 5:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(16);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 6:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 8:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 9:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
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
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 14:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(27);
      END_STATE();
    case 15:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 16:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 17:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 18:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 19:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(32);
      END_STATE();
    case 20:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 21:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 22:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(35);
      END_STATE();
    case 23:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 24:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 25:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 26:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 27:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym__end_block_token1);
      END_STATE();
    case 29:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 30:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 31:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_type_token1);
      END_STATE();
    case 33:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(45);
      END_STATE();
    case 34:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_type_token5);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_script_declaration_token1);
      END_STATE();
    case 37:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 38:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 39:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 40:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(50);
      END_STATE();
    case 41:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 42:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(52);
      END_STATE();
    case 43:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(53);
      END_STATE();
    case 44:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(54);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_type_token3);
      END_STATE();
    case 46:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(55);
      END_STATE();
    case 47:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(56);
      END_STATE();
    case 48:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(57);
      END_STATE();
    case 49:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 50:
      if (lookahead == '_') ADVANCE(59);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym__start_block_token1);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_type_token4);
      END_STATE();
    case 53:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 54:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 55:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 56:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(63);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_type_token2);
      END_STATE();
    case 58:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(64);
      END_STATE();
    case 59:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(65);
      END_STATE();
    case 60:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 61:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(67);
      END_STATE();
    case 62:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 63:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 64:
      if (lookahead == '_') ADVANCE(70);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 66:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 67:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 68:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 70:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(76);
      END_STATE();
    case 71:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_user_defined_function_token1);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_game_feature_token1);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_game_feature_token2);
      END_STATE();
    case 75:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(78);
      END_STATE();
    case 76:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_type_token6);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 79:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_script_declaration_token2);
      END_STATE();
    case 81:
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
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0, .external_lex_state = 1},
  [32] = {.lex_state = 14},
  [33] = {.lex_state = 0, .external_lex_state = 1},
  [34] = {.lex_state = 0, .external_lex_state = 1},
  [35] = {.lex_state = 0, .external_lex_state = 1},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0, .external_lex_state = 1},
  [38] = {.lex_state = 0, .external_lex_state = 1},
  [39] = {.lex_state = 0, .external_lex_state = 1},
  [40] = {.lex_state = 0, .external_lex_state = 1},
  [41] = {.lex_state = 0, .external_lex_state = 1},
  [42] = {.lex_state = 0, .external_lex_state = 1},
  [43] = {.lex_state = 0, .external_lex_state = 1},
  [44] = {.lex_state = 0, .external_lex_state = 1},
  [45] = {.lex_state = 0, .external_lex_state = 1},
  [46] = {(TSStateId)(-1)},
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
    [aux_sym_game_feature_token1] = ACTIONS(1),
    [aux_sym_game_feature_token2] = ACTIONS(1),
    [aux_sym_user_defined_function_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym__end_block_token1] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(3),
    [sym__terminator] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(36),
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
    STATE(4), 1,
      aux_sym_source_file_repeat1,
    STATE(10), 1,
      sym__top_level,
    STATE(13), 1,
      sym__start_block,
    STATE(28), 1,
      sym_type,
    STATE(11), 2,
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
  [38] = 9,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(18), 1,
      aux_sym__start_block_token1,
    STATE(10), 1,
      sym__top_level,
    STATE(13), 1,
      sym__start_block,
    STATE(28), 1,
      sym_type,
    STATE(3), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(11), 2,
      sym_variable_declaration,
      sym_block,
    ACTIONS(15), 7,
      aux_sym_type_token1,
      aux_sym_type_token2,
      aux_sym_type_token3,
      aux_sym_type_token4,
      aux_sym_type_token5,
      aux_sym_type_token6,
      aux_sym_type_token7,
  [74] = 10,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(11), 1,
      aux_sym__start_block_token1,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(4), 1,
      sym_comment,
    STATE(10), 1,
      sym__top_level,
    STATE(13), 1,
      sym__start_block,
    STATE(28), 1,
      sym_type,
    STATE(11), 2,
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
  [112] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(5), 1,
      sym_comment,
    ACTIONS(23), 9,
      ts_builtin_sym_end,
      aux_sym_type_token1,
      aux_sym_type_token2,
      aux_sym_type_token3,
      aux_sym_type_token4,
      aux_sym_type_token5,
      aux_sym_type_token6,
      aux_sym_type_token7,
      aux_sym__start_block_token1,
  [130] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(6), 1,
      sym_comment,
    ACTIONS(25), 9,
      ts_builtin_sym_end,
      aux_sym_type_token1,
      aux_sym_type_token2,
      aux_sym_type_token3,
      aux_sym_type_token4,
      aux_sym_type_token5,
      aux_sym_type_token6,
      aux_sym_type_token7,
      aux_sym__start_block_token1,
  [148] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(7), 1,
      sym_comment,
    ACTIONS(27), 9,
      ts_builtin_sym_end,
      aux_sym_type_token1,
      aux_sym_type_token2,
      aux_sym_type_token3,
      aux_sym_type_token4,
      aux_sym_type_token5,
      aux_sym_type_token6,
      aux_sym_type_token7,
      aux_sym__start_block_token1,
  [166] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(8), 1,
      sym_comment,
    ACTIONS(29), 9,
      ts_builtin_sym_end,
      aux_sym_type_token1,
      aux_sym_type_token2,
      aux_sym_type_token3,
      aux_sym_type_token4,
      aux_sym_type_token5,
      aux_sym_type_token6,
      aux_sym_type_token7,
      aux_sym__start_block_token1,
  [184] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(9), 1,
      sym_comment,
    ACTIONS(31), 9,
      ts_builtin_sym_end,
      aux_sym_type_token1,
      aux_sym_type_token2,
      aux_sym_type_token3,
      aux_sym_type_token4,
      aux_sym_type_token5,
      aux_sym_type_token6,
      aux_sym_type_token7,
      aux_sym__start_block_token1,
  [202] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(10), 1,
      sym_comment,
    ACTIONS(33), 9,
      ts_builtin_sym_end,
      aux_sym_type_token1,
      aux_sym_type_token2,
      aux_sym_type_token3,
      aux_sym_type_token4,
      aux_sym_type_token5,
      aux_sym_type_token6,
      aux_sym_type_token7,
      aux_sym__start_block_token1,
  [220] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(11), 1,
      sym_comment,
    ACTIONS(35), 9,
      ts_builtin_sym_end,
      aux_sym_type_token1,
      aux_sym_type_token2,
      aux_sym_type_token3,
      aux_sym_type_token4,
      aux_sym_type_token5,
      aux_sym_type_token6,
      aux_sym_type_token7,
      aux_sym__start_block_token1,
  [238] = 8,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(39), 1,
      aux_sym__end_block_token1,
    STATE(7), 1,
      sym__end_block,
    STATE(12), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym_block_repeat1,
    STATE(25), 1,
      sym__inner_block,
    STATE(42), 1,
      sym_statement,
  [263] = 8,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(39), 1,
      aux_sym__end_block_token1,
    STATE(9), 1,
      sym__end_block,
    STATE(12), 1,
      aux_sym_block_repeat1,
    STATE(13), 1,
      sym_comment,
    STATE(25), 1,
      sym__inner_block,
    STATE(42), 1,
      sym_statement,
  [288] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(44), 1,
      aux_sym__end_block_token1,
    STATE(25), 1,
      sym__inner_block,
    STATE(42), 1,
      sym_statement,
    STATE(14), 2,
      sym_comment,
      aux_sym_block_repeat1,
  [308] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(48), 1,
      aux_sym_user_defined_function_token1,
    STATE(15), 1,
      sym_comment,
    ACTIONS(46), 2,
      aux_sym_game_feature_token1,
      aux_sym_game_feature_token2,
    STATE(40), 2,
      sym_game_feature,
      sym_user_defined_function,
  [326] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(50), 1,
      sym__identifier,
    ACTIONS(52), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      sym_comment,
    STATE(20), 1,
      sym_parameter,
    STATE(27), 1,
      sym_variable,
  [345] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(54), 1,
      anon_sym_COMMA,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(17), 2,
      sym_comment,
      aux_sym_parameter_list_repeat1,
  [359] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(59), 1,
      anon_sym_COMMA,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      aux_sym_parameter_list_repeat1,
    STATE(18), 1,
      sym_comment,
  [375] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(50), 1,
      sym__identifier,
    STATE(19), 1,
      sym_comment,
    STATE(24), 1,
      sym_parameter,
    STATE(27), 1,
      sym_variable,
  [391] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(59), 1,
      anon_sym_COMMA,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      aux_sym_parameter_list_repeat1,
    STATE(20), 1,
      sym_comment,
  [407] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(21), 1,
      sym_comment,
    ACTIONS(65), 2,
      aux_sym__end_block_token1,
      sym__identifier,
  [418] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(67), 1,
      sym__identifier,
    STATE(22), 1,
      sym_comment,
    STATE(34), 1,
      sym_script_name,
  [431] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(23), 1,
      sym_comment,
    ACTIONS(69), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [442] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(24), 1,
      sym_comment,
    ACTIONS(57), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [453] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(25), 1,
      sym_comment,
    ACTIONS(71), 2,
      aux_sym__end_block_token1,
      sym__identifier,
  [464] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(73), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym_comment,
    STATE(33), 1,
      sym_parameter_list,
  [477] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(27), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [488] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(77), 1,
      sym__identifier,
    STATE(28), 1,
      sym_comment,
    STATE(31), 1,
      sym_variable,
  [501] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(29), 1,
      sym_comment,
    ACTIONS(79), 2,
      aux_sym__end_block_token1,
      sym__identifier,
  [512] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(81), 1,
      sym__identifier,
    STATE(30), 1,
      sym_comment,
  [522] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(83), 1,
      sym__terminator,
    STATE(31), 1,
      sym_comment,
  [532] = 3,
    ACTIONS(85), 1,
      anon_sym_SEMI,
    ACTIONS(87), 1,
      aux_sym_comment_token1,
    STATE(32), 1,
      sym_comment,
  [542] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(89), 1,
      sym__terminator,
    STATE(33), 1,
      sym_comment,
  [552] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(91), 1,
      sym__terminator,
    STATE(34), 1,
      sym_comment,
  [562] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(93), 1,
      sym__terminator,
    STATE(35), 1,
      sym_comment,
  [572] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    STATE(36), 1,
      sym_comment,
  [582] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      sym__terminator,
    STATE(37), 1,
      sym_comment,
  [592] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(99), 1,
      sym__terminator,
    STATE(38), 1,
      sym_comment,
  [602] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(69), 1,
      sym__terminator,
    STATE(39), 1,
      sym_comment,
  [612] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(101), 1,
      sym__terminator,
    STATE(40), 1,
      sym_comment,
  [622] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(103), 1,
      sym__terminator,
    STATE(41), 1,
      sym_comment,
  [632] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(105), 1,
      sym__terminator,
    STATE(42), 1,
      sym_comment,
  [642] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(107), 1,
      sym__terminator,
    STATE(43), 1,
      sym_comment,
  [652] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(109), 1,
      sym__terminator,
    STATE(44), 1,
      sym_comment,
  [662] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(111), 1,
      sym__terminator,
    STATE(45), 1,
      sym_comment,
  [672] = 1,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 74,
  [SMALL_STATE(5)] = 112,
  [SMALL_STATE(6)] = 130,
  [SMALL_STATE(7)] = 148,
  [SMALL_STATE(8)] = 166,
  [SMALL_STATE(9)] = 184,
  [SMALL_STATE(10)] = 202,
  [SMALL_STATE(11)] = 220,
  [SMALL_STATE(12)] = 238,
  [SMALL_STATE(13)] = 263,
  [SMALL_STATE(14)] = 288,
  [SMALL_STATE(15)] = 308,
  [SMALL_STATE(16)] = 326,
  [SMALL_STATE(17)] = 345,
  [SMALL_STATE(18)] = 359,
  [SMALL_STATE(19)] = 375,
  [SMALL_STATE(20)] = 391,
  [SMALL_STATE(21)] = 407,
  [SMALL_STATE(22)] = 418,
  [SMALL_STATE(23)] = 431,
  [SMALL_STATE(24)] = 442,
  [SMALL_STATE(25)] = 453,
  [SMALL_STATE(26)] = 464,
  [SMALL_STATE(27)] = 477,
  [SMALL_STATE(28)] = 488,
  [SMALL_STATE(29)] = 501,
  [SMALL_STATE(30)] = 512,
  [SMALL_STATE(31)] = 522,
  [SMALL_STATE(32)] = 532,
  [SMALL_STATE(33)] = 542,
  [SMALL_STATE(34)] = 552,
  [SMALL_STATE(35)] = 562,
  [SMALL_STATE(36)] = 572,
  [SMALL_STATE(37)] = 582,
  [SMALL_STATE(38)] = 592,
  [SMALL_STATE(39)] = 602,
  [SMALL_STATE(40)] = 612,
  [SMALL_STATE(41)] = 622,
  [SMALL_STATE(42)] = 632,
  [SMALL_STATE(43)] = 642,
  [SMALL_STATE(44)] = 652,
  [SMALL_STATE(45)] = 662,
  [SMALL_STATE(46)] = 672,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__end_block, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_declaration, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, .production_id = 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__top_level, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(45),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(19),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__start_block, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inner_block, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_defined_function, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_name, 1),
  [95] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game_feature, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
