#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 34
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  sym__identifier = 1,
  aux_sym_script_declaration_token1 = 2,
  aux_sym_script_declaration_token2 = 3,
  aux_sym_variable_type_token1 = 4,
  aux_sym_variable_type_token2 = 5,
  aux_sym_variable_type_token3 = 6,
  aux_sym_variable_type_token4 = 7,
  aux_sym_variable_type_token5 = 8,
  aux_sym_variable_type_token6 = 9,
  aux_sym_variable_type_token7 = 10,
  aux_sym__start_block_token1 = 11,
  aux_sym_game_feature_token1 = 12,
  aux_sym_game_feature_token2 = 13,
  sym_function = 14,
  aux_sym__end_block_token1 = 15,
  anon_sym_SEMI = 16,
  aux_sym_comment_token1 = 17,
  sym_eol = 18,
  sym_source_file = 19,
  sym_script_declaration = 20,
  sym_script_name = 21,
  sym__top_level = 22,
  sym_variable_declaration = 23,
  sym_variable_type = 24,
  sym_variable = 25,
  sym_block = 26,
  sym__start_block = 27,
  sym_game_feature = 28,
  sym__inner_block = 29,
  sym__end_block = 30,
  sym_statement = 31,
  sym_comment = 32,
  aux_sym_source_file_repeat1 = 33,
  aux_sym_block_repeat1 = 34,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__identifier] = "_identifier",
  [aux_sym_script_declaration_token1] = "scn",
  [aux_sym_script_declaration_token2] = "scriptname",
  [aux_sym_variable_type_token1] = "int",
  [aux_sym_variable_type_token2] = "short",
  [aux_sym_variable_type_token3] = "long",
  [aux_sym_variable_type_token4] = "float",
  [aux_sym_variable_type_token5] = "ref",
  [aux_sym_variable_type_token6] = "array_var",
  [aux_sym_variable_type_token7] = "string_var",
  [aux_sym__start_block_token1] = "begin",
  [aux_sym_game_feature_token1] = "gamemode",
  [aux_sym_game_feature_token2] = "menumode",
  [sym_function] = "function",
  [aux_sym__end_block_token1] = "end",
  [anon_sym_SEMI] = ";",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_eol] = "eol",
  [sym_source_file] = "source_file",
  [sym_script_declaration] = "script_declaration",
  [sym_script_name] = "script_name",
  [sym__top_level] = "_top_level",
  [sym_variable_declaration] = "variable_declaration",
  [sym_variable_type] = "variable_type",
  [sym_variable] = "variable",
  [sym_block] = "block",
  [sym__start_block] = "_start_block",
  [sym_game_feature] = "game_feature",
  [sym__inner_block] = "_inner_block",
  [sym__end_block] = "_end_block",
  [sym_statement] = "statement",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__identifier] = sym__identifier,
  [aux_sym_script_declaration_token1] = aux_sym_script_declaration_token1,
  [aux_sym_script_declaration_token2] = aux_sym_script_declaration_token2,
  [aux_sym_variable_type_token1] = aux_sym_variable_type_token1,
  [aux_sym_variable_type_token2] = aux_sym_variable_type_token2,
  [aux_sym_variable_type_token3] = aux_sym_variable_type_token3,
  [aux_sym_variable_type_token4] = aux_sym_variable_type_token4,
  [aux_sym_variable_type_token5] = aux_sym_variable_type_token5,
  [aux_sym_variable_type_token6] = aux_sym_variable_type_token6,
  [aux_sym_variable_type_token7] = aux_sym_variable_type_token7,
  [aux_sym__start_block_token1] = aux_sym__start_block_token1,
  [aux_sym_game_feature_token1] = aux_sym_game_feature_token1,
  [aux_sym_game_feature_token2] = aux_sym_game_feature_token2,
  [sym_function] = sym_function,
  [aux_sym__end_block_token1] = aux_sym__end_block_token1,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_eol] = sym_eol,
  [sym_source_file] = sym_source_file,
  [sym_script_declaration] = sym_script_declaration,
  [sym_script_name] = sym_script_name,
  [sym__top_level] = sym__top_level,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_variable_type] = sym_variable_type,
  [sym_variable] = sym_variable,
  [sym_block] = sym_block,
  [sym__start_block] = sym__start_block,
  [sym_game_feature] = sym_game_feature,
  [sym__inner_block] = sym__inner_block,
  [sym__end_block] = sym__end_block,
  [sym_statement] = sym_statement,
  [sym_comment] = sym_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
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
  [aux_sym_variable_type_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_variable_type_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_variable_type_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_variable_type_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_variable_type_token5] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_variable_type_token6] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_variable_type_token7] = {
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
  [sym_function] = {
    .visible = true,
    .named = true,
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
  [sym_eol] = {
    .visible = true,
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
  [sym_variable_type] = {
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
      if (lookahead == ';') ADVANCE(7);
      if (lookahead == '\\') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 2:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(10);
      if (lookahead == '\r') ADVANCE(12);
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
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead == ';') ADVANCE(8);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(10);
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
      if (lookahead == 'u') ADVANCE(2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(3);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(4);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(6);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(7);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(8);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(9);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(10);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(11);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(12);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 2:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 3:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 4:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 5:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 6:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(19);
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
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 12:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(24);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(25);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(26);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 15:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 16:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(29);
      END_STATE();
    case 17:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(30);
      END_STATE();
    case 18:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 19:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 20:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(33);
      END_STATE();
    case 21:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 22:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 23:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(36);
      END_STATE();
    case 24:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 25:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 26:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 27:
      if (lookahead == 'm') ADVANCE(41);
      END_STATE();
    case 28:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 29:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym__end_block_token1);
      END_STATE();
    case 31:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 32:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_variable_type_token1);
      END_STATE();
    case 34:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(46);
      END_STATE();
    case 35:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_variable_type_token5);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_script_declaration_token1);
      END_STATE();
    case 38:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 39:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 40:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 41:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 42:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(52);
      END_STATE();
    case 43:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 44:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(54);
      END_STATE();
    case 45:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(55);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_variable_type_token3);
      END_STATE();
    case 47:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(56);
      END_STATE();
    case 48:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(57);
      END_STATE();
    case 49:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(58);
      END_STATE();
    case 50:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 52:
      if (lookahead == '_') ADVANCE(61);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym__start_block_token1);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_variable_type_token4);
      END_STATE();
    case 55:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 56:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 57:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(64);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_variable_type_token2);
      END_STATE();
    case 59:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(65);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 61:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(67);
      END_STATE();
    case 62:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 63:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 64:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 65:
      if (lookahead == '_') ADVANCE(71);
      END_STATE();
    case 66:
      if (lookahead == 'm') ADVANCE(72);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 68:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 69:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 71:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(77);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 73:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_game_feature_token1);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_game_feature_token2);
      END_STATE();
    case 76:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(80);
      END_STATE();
    case 77:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_variable_type_token6);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 81:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_script_declaration_token2);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_variable_type_token7);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_function);
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
  [21] = {.lex_state = 0, .external_lex_state = 1},
  [22] = {.lex_state = 0, .external_lex_state = 1},
  [23] = {.lex_state = 0, .external_lex_state = 1},
  [24] = {.lex_state = 0, .external_lex_state = 1},
  [25] = {.lex_state = 0, .external_lex_state = 1},
  [26] = {.lex_state = 0, .external_lex_state = 1},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0, .external_lex_state = 1},
  [29] = {.lex_state = 0, .external_lex_state = 1},
  [30] = {.lex_state = 11},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0, .external_lex_state = 1},
  [33] = {(TSStateId)(-1)},
};

enum {
  ts_external_token_eol = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_eol] = sym_eol,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_eol] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__identifier] = ACTIONS(1),
    [aux_sym_script_declaration_token1] = ACTIONS(1),
    [aux_sym_script_declaration_token2] = ACTIONS(1),
    [aux_sym_variable_type_token1] = ACTIONS(1),
    [aux_sym_variable_type_token2] = ACTIONS(1),
    [aux_sym_variable_type_token3] = ACTIONS(1),
    [aux_sym_variable_type_token4] = ACTIONS(1),
    [aux_sym_variable_type_token5] = ACTIONS(1),
    [aux_sym_variable_type_token6] = ACTIONS(1),
    [aux_sym_variable_type_token7] = ACTIONS(1),
    [aux_sym__start_block_token1] = ACTIONS(1),
    [aux_sym_game_feature_token1] = ACTIONS(1),
    [aux_sym_game_feature_token2] = ACTIONS(1),
    [sym_function] = ACTIONS(1),
    [aux_sym__end_block_token1] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(3),
    [sym_eol] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(27),
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
    STATE(9), 1,
      sym__top_level,
    STATE(12), 1,
      sym__start_block,
    STATE(19), 1,
      sym_variable_type,
    STATE(10), 2,
      sym_variable_declaration,
      sym_block,
    ACTIONS(9), 7,
      aux_sym_variable_type_token1,
      aux_sym_variable_type_token2,
      aux_sym_variable_type_token3,
      aux_sym_variable_type_token4,
      aux_sym_variable_type_token5,
      aux_sym_variable_type_token6,
      aux_sym_variable_type_token7,
  [38] = 9,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(18), 1,
      aux_sym__start_block_token1,
    STATE(9), 1,
      sym__top_level,
    STATE(12), 1,
      sym__start_block,
    STATE(19), 1,
      sym_variable_type,
    STATE(3), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(10), 2,
      sym_variable_declaration,
      sym_block,
    ACTIONS(15), 7,
      aux_sym_variable_type_token1,
      aux_sym_variable_type_token2,
      aux_sym_variable_type_token3,
      aux_sym_variable_type_token4,
      aux_sym_variable_type_token5,
      aux_sym_variable_type_token6,
      aux_sym_variable_type_token7,
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
    STATE(9), 1,
      sym__top_level,
    STATE(12), 1,
      sym__start_block,
    STATE(19), 1,
      sym_variable_type,
    STATE(10), 2,
      sym_variable_declaration,
      sym_block,
    ACTIONS(9), 7,
      aux_sym_variable_type_token1,
      aux_sym_variable_type_token2,
      aux_sym_variable_type_token3,
      aux_sym_variable_type_token4,
      aux_sym_variable_type_token5,
      aux_sym_variable_type_token6,
      aux_sym_variable_type_token7,
  [112] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(5), 1,
      sym_comment,
    ACTIONS(23), 9,
      ts_builtin_sym_end,
      aux_sym_variable_type_token1,
      aux_sym_variable_type_token2,
      aux_sym_variable_type_token3,
      aux_sym_variable_type_token4,
      aux_sym_variable_type_token5,
      aux_sym_variable_type_token6,
      aux_sym_variable_type_token7,
      aux_sym__start_block_token1,
  [130] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(6), 1,
      sym_comment,
    ACTIONS(25), 9,
      ts_builtin_sym_end,
      aux_sym_variable_type_token1,
      aux_sym_variable_type_token2,
      aux_sym_variable_type_token3,
      aux_sym_variable_type_token4,
      aux_sym_variable_type_token5,
      aux_sym_variable_type_token6,
      aux_sym_variable_type_token7,
      aux_sym__start_block_token1,
  [148] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(7), 1,
      sym_comment,
    ACTIONS(27), 9,
      ts_builtin_sym_end,
      aux_sym_variable_type_token1,
      aux_sym_variable_type_token2,
      aux_sym_variable_type_token3,
      aux_sym_variable_type_token4,
      aux_sym_variable_type_token5,
      aux_sym_variable_type_token6,
      aux_sym_variable_type_token7,
      aux_sym__start_block_token1,
  [166] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(8), 1,
      sym_comment,
    ACTIONS(29), 9,
      ts_builtin_sym_end,
      aux_sym_variable_type_token1,
      aux_sym_variable_type_token2,
      aux_sym_variable_type_token3,
      aux_sym_variable_type_token4,
      aux_sym_variable_type_token5,
      aux_sym_variable_type_token6,
      aux_sym_variable_type_token7,
      aux_sym__start_block_token1,
  [184] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(9), 1,
      sym_comment,
    ACTIONS(31), 9,
      ts_builtin_sym_end,
      aux_sym_variable_type_token1,
      aux_sym_variable_type_token2,
      aux_sym_variable_type_token3,
      aux_sym_variable_type_token4,
      aux_sym_variable_type_token5,
      aux_sym_variable_type_token6,
      aux_sym_variable_type_token7,
      aux_sym__start_block_token1,
  [202] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(10), 1,
      sym_comment,
    ACTIONS(33), 9,
      ts_builtin_sym_end,
      aux_sym_variable_type_token1,
      aux_sym_variable_type_token2,
      aux_sym_variable_type_token3,
      aux_sym_variable_type_token4,
      aux_sym_variable_type_token5,
      aux_sym_variable_type_token6,
      aux_sym_variable_type_token7,
      aux_sym__start_block_token1,
  [220] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(11), 1,
      sym_comment,
    ACTIONS(35), 9,
      ts_builtin_sym_end,
      aux_sym_variable_type_token1,
      aux_sym_variable_type_token2,
      aux_sym_variable_type_token3,
      aux_sym_variable_type_token4,
      aux_sym_variable_type_token5,
      aux_sym_variable_type_token6,
      aux_sym_variable_type_token7,
      aux_sym__start_block_token1,
  [238] = 8,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(39), 1,
      aux_sym__end_block_token1,
    STATE(5), 1,
      sym__end_block,
    STATE(12), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym_block_repeat1,
    STATE(17), 1,
      sym__inner_block,
    STATE(28), 1,
      sym_statement,
  [263] = 8,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(39), 1,
      aux_sym__end_block_token1,
    STATE(7), 1,
      sym__end_block,
    STATE(13), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym_block_repeat1,
    STATE(17), 1,
      sym__inner_block,
    STATE(28), 1,
      sym_statement,
  [288] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(44), 1,
      aux_sym__end_block_token1,
    STATE(17), 1,
      sym__inner_block,
    STATE(28), 1,
      sym_statement,
    STATE(14), 2,
      sym_comment,
      aux_sym_block_repeat1,
  [308] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(48), 1,
      sym_function,
    STATE(15), 1,
      sym_comment,
    STATE(22), 1,
      sym_game_feature,
    ACTIONS(46), 2,
      aux_sym_game_feature_token1,
      aux_sym_game_feature_token2,
  [325] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(50), 1,
      sym__identifier,
    STATE(16), 1,
      sym_comment,
    STATE(32), 1,
      sym_script_name,
  [338] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(17), 1,
      sym_comment,
    ACTIONS(52), 2,
      aux_sym__end_block_token1,
      sym__identifier,
  [349] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(18), 1,
      sym_comment,
    ACTIONS(54), 2,
      aux_sym__end_block_token1,
      sym__identifier,
  [360] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(56), 1,
      sym__identifier,
    STATE(19), 1,
      sym_comment,
    STATE(24), 1,
      sym_variable,
  [373] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(20), 1,
      sym_comment,
    ACTIONS(58), 2,
      aux_sym__end_block_token1,
      sym__identifier,
  [384] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(60), 1,
      sym_eol,
    STATE(21), 1,
      sym_comment,
  [394] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(62), 1,
      sym_eol,
    STATE(22), 1,
      sym_comment,
  [404] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(64), 1,
      sym_eol,
    STATE(23), 1,
      sym_comment,
  [414] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(66), 1,
      sym_eol,
    STATE(24), 1,
      sym_comment,
  [424] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(68), 1,
      sym_eol,
    STATE(25), 1,
      sym_comment,
  [434] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(70), 1,
      sym_eol,
    STATE(26), 1,
      sym_comment,
  [444] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    STATE(27), 1,
      sym_comment,
  [454] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(74), 1,
      sym_eol,
    STATE(28), 1,
      sym_comment,
  [464] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(76), 1,
      sym_eol,
    STATE(29), 1,
      sym_comment,
  [474] = 3,
    ACTIONS(78), 1,
      anon_sym_SEMI,
    ACTIONS(80), 1,
      aux_sym_comment_token1,
    STATE(30), 1,
      sym_comment,
  [484] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(82), 1,
      sym__identifier,
    STATE(31), 1,
      sym_comment,
  [494] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(84), 1,
      sym_eol,
    STATE(32), 1,
      sym_comment,
  [504] = 1,
    ACTIONS(86), 1,
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
  [SMALL_STATE(16)] = 325,
  [SMALL_STATE(17)] = 338,
  [SMALL_STATE(18)] = 349,
  [SMALL_STATE(19)] = 360,
  [SMALL_STATE(20)] = 373,
  [SMALL_STATE(21)] = 384,
  [SMALL_STATE(22)] = 394,
  [SMALL_STATE(23)] = 404,
  [SMALL_STATE(24)] = 414,
  [SMALL_STATE(25)] = 424,
  [SMALL_STATE(26)] = 434,
  [SMALL_STATE(27)] = 444,
  [SMALL_STATE(28)] = 454,
  [SMALL_STATE(29)] = 464,
  [SMALL_STATE(30)] = 474,
  [SMALL_STATE(31)] = 484,
  [SMALL_STATE(32)] = 494,
  [SMALL_STATE(33)] = 504,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(31),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_declaration, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__end_block, 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__top_level, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(26),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 1),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__start_block, 3),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inner_block, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game_feature, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [72] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_name, 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_type, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
