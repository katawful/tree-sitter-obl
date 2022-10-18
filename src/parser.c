#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 50
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 44
#define ALIAS_COUNT 1
#define TOKEN_COUNT 24
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
  aux_sym_user_defined_function_token2 = 15,
  anon_sym_LBRACE = 16,
  anon_sym_COMMA = 17,
  anon_sym_RBRACE = 18,
  aux_sym__end_block_token1 = 19,
  anon_sym_SEMI = 20,
  aux_sym_comment_token1 = 21,
  sym__compile_with_oblivion_expr = 22,
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
  sym_parameter_list = 35,
  sym_parameter = 36,
  sym__inner_block = 37,
  sym__end_block = 38,
  sym_statement = 39,
  sym_comment = 40,
  aux_sym_source_file_repeat1 = 41,
  aux_sym_block_repeat1 = 42,
  aux_sym_parameter_list_repeat1 = 43,
  anon_alias_sym_parameter = 44,
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
  [aux_sym_user_defined_function_token1] = "user_defined_function_token1",
  [aux_sym_user_defined_function_token2] = "function",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [aux_sym__end_block_token1] = "end",
  [anon_sym_SEMI] = ";",
  [aux_sym_comment_token1] = "comment_token1",
  [sym__compile_with_oblivion_expr] = "_compile_with_oblivion_expr",
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
  [aux_sym_user_defined_function_token2] = aux_sym_user_defined_function_token2,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym__end_block_token1] = aux_sym__end_block_token1,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym__compile_with_oblivion_expr] = sym__compile_with_oblivion_expr,
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
    .visible = false,
    .named = false,
  },
  [aux_sym_user_defined_function_token2] = {
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
  [sym__compile_with_oblivion_expr] = {
    .visible = false,
    .named = true,
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
  [36] = 21,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == ',') ADVANCE(11);
      if (lookahead == ';') ADVANCE(14);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '_') ADVANCE(9);
      if (lookahead == '{') ADVANCE(10);
      if (lookahead == '}') ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 2:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(17);
      if (lookahead == '\r') ADVANCE(19);
      END_STATE();
    case 3:
      if (eof) ADVANCE(8);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 4:
      if (eof) ADVANCE(8);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (eof) ADVANCE(8);
      if (lookahead == '\n') SKIP(7)
      END_STATE();
    case 6:
      if (eof) ADVANCE(8);
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (eof) ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == ';') ADVANCE(14);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == '}') ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_user_defined_function_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == ';') ADVANCE(15);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(17);
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
      if (lookahead == '_') ADVANCE(2);
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
      ACCEPT_TOKEN(sym__compile_with_oblivion_expr);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(14);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(7);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(10);
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
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 7:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(20);
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
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(25);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(26);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(27);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 14:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(19);
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
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 20:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(33);
      END_STATE();
    case 21:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(34);
      END_STATE();
    case 22:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 23:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 24:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(37);
      END_STATE();
    case 25:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(38);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 26:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 27:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(41);
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
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(45);
      END_STATE();
    case 33:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_type_token1);
      END_STATE();
    case 35:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(47);
      END_STATE();
    case 36:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(48);
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
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 41:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(51);
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
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(55);
      END_STATE();
    case 46:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(56);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_type_token3);
      END_STATE();
    case 48:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(57);
      END_STATE();
    case 49:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(58);
      END_STATE();
    case 50:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(59);
      END_STATE();
    case 51:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 52:
      if (lookahead == '_') ADVANCE(61);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym__start_block_token1);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_type_token4);
      END_STATE();
    case 55:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 56:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 57:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 58:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(65);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_type_token2);
      END_STATE();
    case 60:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(66);
      END_STATE();
    case 61:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(67);
      END_STATE();
    case 62:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 63:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 64:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 65:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 66:
      if (lookahead == '_') ADVANCE(72);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 68:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 69:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 70:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 71:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 72:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(78);
      END_STATE();
    case 73:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_user_defined_function_token2);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_game_feature_token1);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_game_feature_token2);
      END_STATE();
    case 77:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(80);
      END_STATE();
    case 78:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_type_token6);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 81:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_script_declaration_token2);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_type_token7);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 7},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0, .external_lex_state = 1},
  [32] = {.lex_state = 0, .external_lex_state = 1},
  [33] = {.lex_state = 0, .external_lex_state = 1},
  [34] = {.lex_state = 0, .external_lex_state = 1},
  [35] = {.lex_state = 0, .external_lex_state = 1},
  [36] = {.lex_state = 0, .external_lex_state = 1},
  [37] = {.lex_state = 0, .external_lex_state = 1},
  [38] = {.lex_state = 0, .external_lex_state = 1},
  [39] = {.lex_state = 0, .external_lex_state = 1},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 18},
  [43] = {.lex_state = 0, .external_lex_state = 1},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 0, .external_lex_state = 1},
  [46] = {.lex_state = 0, .external_lex_state = 1},
  [47] = {.lex_state = 0, .external_lex_state = 1},
  [48] = {.lex_state = 0, .external_lex_state = 1},
  [49] = {(TSStateId)(-1)},
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
    [aux_sym_user_defined_function_token2] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym__end_block_token1] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(3),
    [sym__compile_with_oblivion_expr] = ACTIONS(1),
    [sym__terminator] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(41),
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
    STATE(6), 1,
      sym__top_level,
    STATE(13), 1,
      sym__start_block,
    STATE(26), 1,
      sym_type,
    STATE(10), 2,
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
    STATE(6), 1,
      sym__top_level,
    STATE(13), 1,
      sym__start_block,
    STATE(26), 1,
      sym_type,
    STATE(3), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(10), 2,
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
    STATE(6), 1,
      sym__top_level,
    STATE(13), 1,
      sym__start_block,
    STATE(26), 1,
      sym_type,
    STATE(10), 2,
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
  [238] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(39), 1,
      aux_sym_user_defined_function_token1,
    ACTIONS(41), 1,
      aux_sym_user_defined_function_token2,
    STATE(12), 1,
      sym_comment,
    ACTIONS(37), 2,
      aux_sym_game_feature_token1,
      aux_sym_game_feature_token2,
    STATE(37), 2,
      sym_game_feature,
      sym_user_defined_function,
  [259] = 8,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(43), 1,
      sym__identifier,
    ACTIONS(45), 1,
      aux_sym__end_block_token1,
    STATE(8), 1,
      sym__end_block,
    STATE(13), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym_block_repeat1,
    STATE(28), 1,
      sym__inner_block,
    STATE(47), 1,
      sym_statement,
  [284] = 8,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(43), 1,
      sym__identifier,
    ACTIONS(45), 1,
      aux_sym__end_block_token1,
    STATE(5), 1,
      sym__end_block,
    STATE(14), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_block_repeat1,
    STATE(28), 1,
      sym__inner_block,
    STATE(47), 1,
      sym_statement,
  [309] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(47), 1,
      sym__identifier,
    ACTIONS(50), 1,
      aux_sym__end_block_token1,
    STATE(28), 1,
      sym__inner_block,
    STATE(47), 1,
      sym_statement,
    STATE(15), 2,
      sym_comment,
      aux_sym_block_repeat1,
  [329] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(52), 1,
      sym__identifier,
    ACTIONS(54), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      sym_comment,
    STATE(17), 1,
      sym_parameter,
    STATE(25), 1,
      sym_variable,
  [348] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(56), 1,
      anon_sym_COMMA,
    ACTIONS(58), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      sym_comment,
    STATE(20), 1,
      aux_sym_parameter_list_repeat1,
  [364] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(52), 1,
      sym__identifier,
    STATE(18), 1,
      sym_comment,
    STATE(25), 1,
      sym_variable,
    STATE(29), 1,
      sym_parameter,
  [380] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(60), 1,
      anon_sym_COMMA,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    STATE(19), 2,
      sym_comment,
      aux_sym_parameter_list_repeat1,
  [394] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(56), 1,
      anon_sym_COMMA,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      aux_sym_parameter_list_repeat1,
    STATE(20), 1,
      sym_comment,
  [410] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(21), 1,
      sym_comment,
    ACTIONS(67), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [421] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(69), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_comment,
    STATE(32), 1,
      sym_parameter_list,
  [434] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(71), 1,
      sym__identifier,
    STATE(23), 1,
      sym_comment,
    STATE(45), 1,
      sym_script_name,
  [447] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(24), 1,
      sym_comment,
    ACTIONS(73), 2,
      aux_sym__end_block_token1,
      sym__identifier,
  [458] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(25), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [469] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(77), 1,
      sym__identifier,
    STATE(26), 1,
      sym_comment,
    STATE(35), 1,
      sym_variable,
  [482] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(27), 1,
      sym_comment,
    ACTIONS(79), 2,
      aux_sym__end_block_token1,
      sym__identifier,
  [493] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(28), 1,
      sym_comment,
    ACTIONS(81), 2,
      aux_sym__end_block_token1,
      sym__identifier,
  [504] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(29), 1,
      sym_comment,
    ACTIONS(63), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [515] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(69), 1,
      anon_sym_LBRACE,
    STATE(30), 1,
      sym_comment,
    STATE(38), 1,
      sym_parameter_list,
  [528] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(83), 1,
      sym__terminator,
    STATE(31), 1,
      sym_comment,
  [538] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(85), 1,
      sym__terminator,
    STATE(32), 1,
      sym_comment,
  [548] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(87), 1,
      sym__terminator,
    STATE(33), 1,
      sym_comment,
  [558] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(89), 1,
      sym__terminator,
    STATE(34), 1,
      sym_comment,
  [568] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(91), 1,
      sym__terminator,
    STATE(35), 1,
      sym_comment,
  [578] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(67), 1,
      sym__terminator,
    STATE(36), 1,
      sym_comment,
  [588] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(93), 1,
      sym__terminator,
    STATE(37), 1,
      sym_comment,
  [598] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(95), 1,
      sym__terminator,
    STATE(38), 1,
      sym_comment,
  [608] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      sym__terminator,
    STATE(39), 1,
      sym_comment,
  [618] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(99), 1,
      aux_sym_user_defined_function_token2,
    STATE(40), 1,
      sym_comment,
  [628] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    STATE(41), 1,
      sym_comment,
  [638] = 3,
    ACTIONS(103), 1,
      anon_sym_SEMI,
    ACTIONS(105), 1,
      aux_sym_comment_token1,
    STATE(42), 1,
      sym_comment,
  [648] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(107), 1,
      sym__terminator,
    STATE(43), 1,
      sym_comment,
  [658] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(109), 1,
      sym__identifier,
    STATE(44), 1,
      sym_comment,
  [668] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(111), 1,
      sym__terminator,
    STATE(45), 1,
      sym_comment,
  [678] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(113), 1,
      sym__terminator,
    STATE(46), 1,
      sym_comment,
  [688] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(115), 1,
      sym__terminator,
    STATE(47), 1,
      sym_comment,
  [698] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(117), 1,
      sym__terminator,
    STATE(48), 1,
      sym_comment,
  [708] = 1,
    ACTIONS(119), 1,
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
  [SMALL_STATE(13)] = 259,
  [SMALL_STATE(14)] = 284,
  [SMALL_STATE(15)] = 309,
  [SMALL_STATE(16)] = 329,
  [SMALL_STATE(17)] = 348,
  [SMALL_STATE(18)] = 364,
  [SMALL_STATE(19)] = 380,
  [SMALL_STATE(20)] = 394,
  [SMALL_STATE(21)] = 410,
  [SMALL_STATE(22)] = 421,
  [SMALL_STATE(23)] = 434,
  [SMALL_STATE(24)] = 447,
  [SMALL_STATE(25)] = 458,
  [SMALL_STATE(26)] = 469,
  [SMALL_STATE(27)] = 482,
  [SMALL_STATE(28)] = 493,
  [SMALL_STATE(29)] = 504,
  [SMALL_STATE(30)] = 515,
  [SMALL_STATE(31)] = 528,
  [SMALL_STATE(32)] = 538,
  [SMALL_STATE(33)] = 548,
  [SMALL_STATE(34)] = 558,
  [SMALL_STATE(35)] = 568,
  [SMALL_STATE(36)] = 578,
  [SMALL_STATE(37)] = 588,
  [SMALL_STATE(38)] = 598,
  [SMALL_STATE(39)] = 608,
  [SMALL_STATE(40)] = 618,
  [SMALL_STATE(41)] = 628,
  [SMALL_STATE(42)] = 638,
  [SMALL_STATE(43)] = 648,
  [SMALL_STATE(44)] = 658,
  [SMALL_STATE(45)] = 668,
  [SMALL_STATE(46)] = 678,
  [SMALL_STATE(47)] = 688,
  [SMALL_STATE(48)] = 698,
  [SMALL_STATE(49)] = 708,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_declaration, 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, .production_id = 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__top_level, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__end_block, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(33),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(18),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inner_block, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__start_block, 3),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game_feature, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_defined_function, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_defined_function, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [101] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_name, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
