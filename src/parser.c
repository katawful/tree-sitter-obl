#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 29
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_script_declaration_token1 = 1,
  aux_sym_script_declaration_token2 = 2,
  aux_sym_variable_type_token1 = 3,
  aux_sym_variable_type_token2 = 4,
  aux_sym_variable_type_token3 = 5,
  aux_sym_variable_type_token4 = 6,
  aux_sym_variable_type_token5 = 7,
  aux_sym_variable_type_token6 = 8,
  aux_sym_variable_type_token7 = 9,
  aux_sym__start_block_token1 = 10,
  aux_sym_game_feature_token1 = 11,
  aux_sym_game_feature_token2 = 12,
  sym_function = 13,
  aux_sym__end_block_token1 = 14,
  sym__identifier = 15,
  sym_eol = 16,
  sym_source_file = 17,
  sym_script_declaration = 18,
  sym_script_name = 19,
  sym__top_level = 20,
  sym_variable_declaration = 21,
  sym_variable_type = 22,
  sym_variable = 23,
  sym_block = 24,
  sym__start_block = 25,
  sym_game_feature = 26,
  sym__inner_block = 27,
  sym__end_block = 28,
  sym_statement = 29,
  aux_sym_source_file_repeat1 = 30,
  aux_sym_block_repeat1 = 31,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
  [sym__identifier] = "_identifier",
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
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
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
  [sym__identifier] = sym__identifier,
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
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
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
  [sym__identifier] = {
    .visible = false,
    .named = true,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(74);
      if (lookahead == 'u') ADVANCE(11);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(61);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(25);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(45);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(40);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(15);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(46);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(54);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(32);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(26);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '_') ADVANCE(70);
      END_STATE();
    case 2:
      if (lookahead == '_') ADVANCE(71);
      END_STATE();
    case 3:
      if (lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == 'i') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == 'm') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 'm') ADVANCE(5);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 12:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 'p') ADVANCE(8);
      END_STATE();
    case 14:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 15:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 16:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 17:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 18:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 19:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 20:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 21:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(48);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(56);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(64);
      END_STATE();
    case 22:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(88);
      END_STATE();
    case 23:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 24:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 25:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 26:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 27:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 28:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 29:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 30:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 31:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 32:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 33:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(81);
      END_STATE();
    case 34:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(38);
      END_STATE();
    case 35:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(79);
      END_STATE();
    case 36:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2);
      END_STATE();
    case 37:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 38:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 39:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 40:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 41:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 42:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(53);
      END_STATE();
    case 43:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 44:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(57);
      END_STATE();
    case 45:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 46:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 47:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 48:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(75);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 49:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 50:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 51:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 52:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 53:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 54:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 55:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 56:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 57:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 58:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(68);
      END_STATE();
    case 59:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 60:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 61:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 62:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 63:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 64:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 65:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(77);
      END_STATE();
    case 66:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(80);
      END_STATE();
    case 67:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(78);
      END_STATE();
    case 68:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(52);
      END_STATE();
    case 69:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 70:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(18);
      END_STATE();
    case 71:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(19);
      END_STATE();
    case 72:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1);
      END_STATE();
    case 73:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(73)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_script_declaration_token1);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_script_declaration_token2);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_variable_type_token1);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_variable_type_token2);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_variable_type_token3);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_variable_type_token4);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_variable_type_token5);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_variable_type_token6);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_variable_type_token7);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym__start_block_token1);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_game_feature_token1);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_game_feature_token2);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_function);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym__end_block_token1);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym__end_block_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
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
  [10] = {.lex_state = 30},
  [11] = {.lex_state = 30},
  [12] = {.lex_state = 30},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 73},
  [15] = {.lex_state = 30},
  [16] = {.lex_state = 73},
  [17] = {.lex_state = 30},
  [18] = {.lex_state = 73},
  [19] = {.lex_state = 0, .external_lex_state = 1},
  [20] = {.lex_state = 0, .external_lex_state = 1},
  [21] = {.lex_state = 0, .external_lex_state = 1},
  [22] = {.lex_state = 0, .external_lex_state = 1},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0, .external_lex_state = 1},
  [25] = {.lex_state = 0, .external_lex_state = 1},
  [26] = {.lex_state = 0, .external_lex_state = 1},
  [27] = {.lex_state = 0, .external_lex_state = 1},
  [28] = {.lex_state = 0, .external_lex_state = 1},
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
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [sym_eol] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(23),
    [sym_script_declaration] = STATE(3),
    [aux_sym_script_declaration_token1] = ACTIONS(3),
    [aux_sym_script_declaration_token2] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(5), 1,
      ts_builtin_sym_end,
    ACTIONS(10), 1,
      aux_sym__start_block_token1,
    STATE(10), 1,
      sym__start_block,
    STATE(16), 1,
      sym_variable_type,
    STATE(2), 4,
      sym__top_level,
      sym_variable_declaration,
      sym_block,
      aux_sym_source_file_repeat1,
    ACTIONS(7), 7,
      aux_sym_variable_type_token1,
      aux_sym_variable_type_token2,
      aux_sym_variable_type_token3,
      aux_sym_variable_type_token4,
      aux_sym_variable_type_token5,
      aux_sym_variable_type_token6,
      aux_sym_variable_type_token7,
  [28] = 6,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      aux_sym__start_block_token1,
    STATE(10), 1,
      sym__start_block,
    STATE(16), 1,
      sym_variable_type,
    STATE(4), 4,
      sym__top_level,
      sym_variable_declaration,
      sym_block,
      aux_sym_source_file_repeat1,
    ACTIONS(15), 7,
      aux_sym_variable_type_token1,
      aux_sym_variable_type_token2,
      aux_sym_variable_type_token3,
      aux_sym_variable_type_token4,
      aux_sym_variable_type_token5,
      aux_sym_variable_type_token6,
      aux_sym_variable_type_token7,
  [56] = 6,
    ACTIONS(17), 1,
      aux_sym__start_block_token1,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      sym__start_block,
    STATE(16), 1,
      sym_variable_type,
    STATE(2), 4,
      sym__top_level,
      sym_variable_declaration,
      sym_block,
      aux_sym_source_file_repeat1,
    ACTIONS(15), 7,
      aux_sym_variable_type_token1,
      aux_sym_variable_type_token2,
      aux_sym_variable_type_token3,
      aux_sym_variable_type_token4,
      aux_sym_variable_type_token5,
      aux_sym_variable_type_token6,
      aux_sym_variable_type_token7,
  [84] = 1,
    ACTIONS(21), 9,
      ts_builtin_sym_end,
      aux_sym_variable_type_token1,
      aux_sym_variable_type_token2,
      aux_sym_variable_type_token3,
      aux_sym_variable_type_token4,
      aux_sym_variable_type_token5,
      aux_sym_variable_type_token6,
      aux_sym_variable_type_token7,
      aux_sym__start_block_token1,
  [96] = 1,
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
  [108] = 1,
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
  [120] = 1,
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
  [132] = 1,
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
  [144] = 5,
    ACTIONS(31), 1,
      aux_sym__end_block_token1,
    ACTIONS(33), 1,
      sym__identifier,
    STATE(9), 1,
      sym__end_block,
    STATE(20), 1,
      sym_statement,
    STATE(11), 2,
      sym__inner_block,
      aux_sym_block_repeat1,
  [161] = 5,
    ACTIONS(31), 1,
      aux_sym__end_block_token1,
    ACTIONS(33), 1,
      sym__identifier,
    STATE(5), 1,
      sym__end_block,
    STATE(20), 1,
      sym_statement,
    STATE(12), 2,
      sym__inner_block,
      aux_sym_block_repeat1,
  [178] = 4,
    ACTIONS(35), 1,
      aux_sym__end_block_token1,
    ACTIONS(37), 1,
      sym__identifier,
    STATE(20), 1,
      sym_statement,
    STATE(12), 2,
      sym__inner_block,
      aux_sym_block_repeat1,
  [192] = 3,
    ACTIONS(42), 1,
      sym_function,
    STATE(25), 1,
      sym_game_feature,
    ACTIONS(40), 2,
      aux_sym_game_feature_token1,
      aux_sym_game_feature_token2,
  [203] = 2,
    ACTIONS(44), 1,
      sym__identifier,
    STATE(27), 1,
      sym_script_name,
  [210] = 1,
    ACTIONS(46), 2,
      aux_sym__end_block_token1,
      sym__identifier,
  [215] = 2,
    ACTIONS(48), 1,
      sym__identifier,
    STATE(19), 1,
      sym_variable,
  [222] = 1,
    ACTIONS(50), 2,
      aux_sym__end_block_token1,
      sym__identifier,
  [227] = 1,
    ACTIONS(52), 1,
      sym__identifier,
  [231] = 1,
    ACTIONS(54), 1,
      sym_eol,
  [235] = 1,
    ACTIONS(56), 1,
      sym_eol,
  [239] = 1,
    ACTIONS(58), 1,
      sym_eol,
  [243] = 1,
    ACTIONS(60), 1,
      sym_eol,
  [247] = 1,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
  [251] = 1,
    ACTIONS(64), 1,
      sym_eol,
  [255] = 1,
    ACTIONS(66), 1,
      sym_eol,
  [259] = 1,
    ACTIONS(68), 1,
      sym_eol,
  [263] = 1,
    ACTIONS(70), 1,
      sym_eol,
  [267] = 1,
    ACTIONS(72), 1,
      sym_eol,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 56,
  [SMALL_STATE(5)] = 84,
  [SMALL_STATE(6)] = 96,
  [SMALL_STATE(7)] = 108,
  [SMALL_STATE(8)] = 120,
  [SMALL_STATE(9)] = 132,
  [SMALL_STATE(10)] = 144,
  [SMALL_STATE(11)] = 161,
  [SMALL_STATE(12)] = 178,
  [SMALL_STATE(13)] = 192,
  [SMALL_STATE(14)] = 203,
  [SMALL_STATE(15)] = 210,
  [SMALL_STATE(16)] = 215,
  [SMALL_STATE(17)] = 222,
  [SMALL_STATE(18)] = 227,
  [SMALL_STATE(19)] = 231,
  [SMALL_STATE(20)] = 235,
  [SMALL_STATE(21)] = 239,
  [SMALL_STATE(22)] = 243,
  [SMALL_STATE(23)] = 247,
  [SMALL_STATE(24)] = 251,
  [SMALL_STATE(25)] = 255,
  [SMALL_STATE(26)] = 259,
  [SMALL_STATE(27)] = 263,
  [SMALL_STATE(28)] = 267,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [7] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [10] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_declaration, 3),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__end_block, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(22),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inner_block, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__start_block, 3),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_type, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [62] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game_feature, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_name, 1),
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
