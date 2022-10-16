#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 30
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
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
  aux_sym_block_token1 = 10,
  aux_sym__start_block_token1 = 11,
  aux_sym_game_feature_token1 = 12,
  aux_sym_game_feature_token2 = 13,
  sym_function = 14,
  anon_sym_LF = 15,
  anon_sym_CR = 16,
  sym__identifier = 17,
  sym_source_file = 18,
  sym_script_declaration = 19,
  sym_script_name = 20,
  sym__top_level = 21,
  sym_variable_declaration = 22,
  sym_variable_type = 23,
  sym_variable = 24,
  sym_block = 25,
  sym__start_block = 26,
  sym_game_feature = 27,
  sym__inner_block = 28,
  sym_statement = 29,
  sym__eol = 30,
  aux_sym_source_file_repeat1 = 31,
  aux_sym_block_repeat1 = 32,
  aux_sym_block_repeat2 = 33,
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
  [aux_sym_block_token1] = "end",
  [aux_sym__start_block_token1] = "begin",
  [aux_sym_game_feature_token1] = "gamemode",
  [aux_sym_game_feature_token2] = "menumode",
  [sym_function] = "function",
  [anon_sym_LF] = "\n",
  [anon_sym_CR] = "\r",
  [sym__identifier] = "_identifier",
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
  [sym_statement] = "statement",
  [sym__eol] = "_eol",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_block_repeat2] = "block_repeat2",
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
  [aux_sym_block_token1] = aux_sym_block_token1,
  [aux_sym__start_block_token1] = aux_sym__start_block_token1,
  [aux_sym_game_feature_token1] = aux_sym_game_feature_token1,
  [aux_sym_game_feature_token2] = aux_sym_game_feature_token2,
  [sym_function] = sym_function,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CR] = anon_sym_CR,
  [sym__identifier] = sym__identifier,
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
  [sym_statement] = sym_statement,
  [sym__eol] = sym__eol,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_block_repeat2] = aux_sym_block_repeat2,
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
  [aux_sym_block_token1] = {
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
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR] = {
    .visible = true,
    .named = false,
  },
  [sym__identifier] = {
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
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__eol] = {
    .visible = false,
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
  [aux_sym_block_repeat2] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(76);
      if (lookahead == 'u') ADVANCE(11);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(62);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(25);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(46);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(41);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(15);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(47);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(55);
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
      if (lookahead == '_') ADVANCE(71);
      END_STATE();
    case 2:
      if (lookahead == '_') ADVANCE(72);
      END_STATE();
    case 3:
      if (lookahead == 'd') ADVANCE(91);
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
          lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 16:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 17:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 18:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 19:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 20:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 21:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(49);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(57);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(65);
      END_STATE();
    case 22:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(86);
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
          lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 28:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 29:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 30:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 31:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 32:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 33:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(83);
      END_STATE();
    case 34:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(39);
      END_STATE();
    case 35:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(81);
      END_STATE();
    case 36:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2);
      END_STATE();
    case 37:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(57);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(65);
      END_STATE();
    case 38:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 39:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 40:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 41:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 42:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 43:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(54);
      END_STATE();
    case 44:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 45:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 46:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 47:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 48:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 49:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(77);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 50:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 51:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 52:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 53:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 54:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 55:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 56:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 57:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 58:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 59:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(69);
      END_STATE();
    case 60:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 61:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 62:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 64:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 65:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 66:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(79);
      END_STATE();
    case 67:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(82);
      END_STATE();
    case 68:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(80);
      END_STATE();
    case 69:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(53);
      END_STATE();
    case 70:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 71:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(18);
      END_STATE();
    case 72:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(19);
      END_STATE();
    case 73:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1);
      END_STATE();
    case 74:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(74)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 75:
      if (eof) ADVANCE(76);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '\r') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(75)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(62);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(25);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(41);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(47);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(55);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(26);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(37);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_script_declaration_token1);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_script_declaration_token2);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_variable_type_token1);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_variable_type_token2);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_variable_type_token3);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_variable_type_token4);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_variable_type_token5);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_variable_type_token6);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_variable_type_token7);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_block_token1);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_block_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym__start_block_token1);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_game_feature_token1);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_game_feature_token2);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_function);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '\r') ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '\r') ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 75},
  [6] = {.lex_state = 75},
  [7] = {.lex_state = 75},
  [8] = {.lex_state = 75},
  [9] = {.lex_state = 75},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 30},
  [12] = {.lex_state = 30},
  [13] = {.lex_state = 30},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 75},
  [16] = {.lex_state = 75},
  [17] = {.lex_state = 75},
  [18] = {.lex_state = 75},
  [19] = {.lex_state = 75},
  [20] = {.lex_state = 74},
  [21] = {.lex_state = 75},
  [22] = {.lex_state = 75},
  [23] = {.lex_state = 75},
  [24] = {.lex_state = 74},
  [25] = {.lex_state = 30},
  [26] = {.lex_state = 75},
  [27] = {.lex_state = 75},
  [28] = {.lex_state = 74},
  [29] = {.lex_state = 0},
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
    [aux_sym_block_token1] = ACTIONS(1),
    [aux_sym__start_block_token1] = ACTIONS(1),
    [aux_sym_game_feature_token1] = ACTIONS(1),
    [aux_sym_game_feature_token2] = ACTIONS(1),
    [sym_function] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(29),
    [sym_script_declaration] = STATE(15),
    [aux_sym_script_declaration_token1] = ACTIONS(3),
    [aux_sym_script_declaration_token2] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(5), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 1,
      aux_sym__start_block_token1,
    STATE(16), 1,
      sym__start_block,
    STATE(24), 1,
      sym_variable_type,
    STATE(3), 4,
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
    ACTIONS(9), 1,
      aux_sym__start_block_token1,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      sym__start_block,
    STATE(24), 1,
      sym_variable_type,
    STATE(4), 4,
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
  [56] = 6,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(18), 1,
      aux_sym__start_block_token1,
    STATE(16), 1,
      sym__start_block,
    STATE(24), 1,
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
  [84] = 4,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 2,
      anon_sym_LF,
      anon_sym_CR,
    STATE(6), 2,
      sym__eol,
      aux_sym_block_repeat2,
    ACTIONS(23), 8,
      aux_sym_variable_type_token1,
      aux_sym_variable_type_token2,
      aux_sym_variable_type_token3,
      aux_sym_variable_type_token4,
      aux_sym_variable_type_token5,
      aux_sym_variable_type_token6,
      aux_sym_variable_type_token7,
      aux_sym__start_block_token1,
  [106] = 4,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 2,
      anon_sym_LF,
      anon_sym_CR,
    STATE(6), 2,
      sym__eol,
      aux_sym_block_repeat2,
    ACTIONS(29), 8,
      aux_sym_variable_type_token1,
      aux_sym_variable_type_token2,
      aux_sym_variable_type_token3,
      aux_sym_variable_type_token4,
      aux_sym_variable_type_token5,
      aux_sym_variable_type_token6,
      aux_sym_variable_type_token7,
      aux_sym__start_block_token1,
  [128] = 4,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 2,
      anon_sym_LF,
      anon_sym_CR,
    STATE(5), 2,
      sym__eol,
      aux_sym_block_repeat2,
    ACTIONS(36), 8,
      aux_sym_variable_type_token1,
      aux_sym_variable_type_token2,
      aux_sym_variable_type_token3,
      aux_sym_variable_type_token4,
      aux_sym_variable_type_token5,
      aux_sym_variable_type_token6,
      aux_sym_variable_type_token7,
      aux_sym__start_block_token1,
  [150] = 4,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 2,
      anon_sym_LF,
      anon_sym_CR,
    STATE(6), 2,
      sym__eol,
      aux_sym_block_repeat2,
    ACTIONS(36), 8,
      aux_sym_variable_type_token1,
      aux_sym_variable_type_token2,
      aux_sym_variable_type_token3,
      aux_sym_variable_type_token4,
      aux_sym_variable_type_token5,
      aux_sym_variable_type_token6,
      aux_sym_variable_type_token7,
      aux_sym__start_block_token1,
  [172] = 4,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 2,
      anon_sym_LF,
      anon_sym_CR,
    STATE(8), 2,
      sym__eol,
      aux_sym_block_repeat2,
    ACTIONS(42), 8,
      aux_sym_variable_type_token1,
      aux_sym_variable_type_token2,
      aux_sym_variable_type_token3,
      aux_sym_variable_type_token4,
      aux_sym_variable_type_token5,
      aux_sym_variable_type_token6,
      aux_sym_variable_type_token7,
      aux_sym__start_block_token1,
  [194] = 1,
    ACTIONS(46), 9,
      ts_builtin_sym_end,
      aux_sym_variable_type_token1,
      aux_sym_variable_type_token2,
      aux_sym_variable_type_token3,
      aux_sym_variable_type_token4,
      aux_sym_variable_type_token5,
      aux_sym_variable_type_token6,
      aux_sym_variable_type_token7,
      aux_sym__start_block_token1,
  [206] = 4,
    ACTIONS(48), 1,
      aux_sym_block_token1,
    ACTIONS(50), 1,
      sym__identifier,
    STATE(17), 1,
      sym_statement,
    STATE(11), 2,
      sym__inner_block,
      aux_sym_block_repeat1,
  [220] = 4,
    ACTIONS(53), 1,
      aux_sym_block_token1,
    ACTIONS(55), 1,
      sym__identifier,
    STATE(17), 1,
      sym_statement,
    STATE(11), 2,
      sym__inner_block,
      aux_sym_block_repeat1,
  [234] = 4,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      aux_sym_block_token1,
    STATE(17), 1,
      sym_statement,
    STATE(12), 2,
      sym__inner_block,
      aux_sym_block_repeat1,
  [248] = 3,
    ACTIONS(61), 1,
      sym_function,
    STATE(19), 1,
      sym_game_feature,
    ACTIONS(59), 2,
      aux_sym_game_feature_token1,
      aux_sym_game_feature_token2,
  [259] = 2,
    STATE(2), 1,
      sym__eol,
    ACTIONS(63), 2,
      anon_sym_LF,
      anon_sym_CR,
  [267] = 2,
    STATE(13), 1,
      sym__eol,
    ACTIONS(65), 2,
      anon_sym_LF,
      anon_sym_CR,
  [275] = 2,
    STATE(25), 1,
      sym__eol,
    ACTIONS(67), 2,
      anon_sym_LF,
      anon_sym_CR,
  [283] = 2,
    STATE(10), 1,
      sym__eol,
    ACTIONS(69), 2,
      anon_sym_LF,
      anon_sym_CR,
  [291] = 1,
    ACTIONS(71), 2,
      anon_sym_LF,
      anon_sym_CR,
  [296] = 2,
    ACTIONS(73), 1,
      sym__identifier,
    STATE(26), 1,
      sym_script_name,
  [303] = 1,
    ACTIONS(75), 2,
      anon_sym_LF,
      anon_sym_CR,
  [308] = 1,
    ACTIONS(77), 2,
      anon_sym_LF,
      anon_sym_CR,
  [313] = 1,
    ACTIONS(79), 2,
      anon_sym_LF,
      anon_sym_CR,
  [318] = 2,
    ACTIONS(81), 1,
      sym__identifier,
    STATE(18), 1,
      sym_variable,
  [325] = 1,
    ACTIONS(83), 2,
      aux_sym_block_token1,
      sym__identifier,
  [330] = 1,
    ACTIONS(85), 2,
      anon_sym_LF,
      anon_sym_CR,
  [335] = 1,
    ACTIONS(87), 2,
      anon_sym_LF,
      anon_sym_CR,
  [340] = 1,
    ACTIONS(89), 1,
      sym__identifier,
  [344] = 1,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 56,
  [SMALL_STATE(5)] = 84,
  [SMALL_STATE(6)] = 106,
  [SMALL_STATE(7)] = 128,
  [SMALL_STATE(8)] = 150,
  [SMALL_STATE(9)] = 172,
  [SMALL_STATE(10)] = 194,
  [SMALL_STATE(11)] = 206,
  [SMALL_STATE(12)] = 220,
  [SMALL_STATE(13)] = 234,
  [SMALL_STATE(14)] = 248,
  [SMALL_STATE(15)] = 259,
  [SMALL_STATE(16)] = 267,
  [SMALL_STATE(17)] = 275,
  [SMALL_STATE(18)] = 283,
  [SMALL_STATE(19)] = 291,
  [SMALL_STATE(20)] = 296,
  [SMALL_STATE(21)] = 303,
  [SMALL_STATE(22)] = 308,
  [SMALL_STATE(23)] = 313,
  [SMALL_STATE(24)] = 318,
  [SMALL_STATE(25)] = 325,
  [SMALL_STATE(26)] = 330,
  [SMALL_STATE(27)] = 335,
  [SMALL_STATE(28)] = 340,
  [SMALL_STATE(29)] = 344,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 5),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat2, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(6),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(21),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__start_block, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game_feature, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inner_block, 2),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_declaration, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_name, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_type, 1),
  [91] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
