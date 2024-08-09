#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 40
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 29
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_COLON = 1,
  anon_sym_EQ = 2,
  aux_sym_identifier_token1 = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_DASH_GT = 6,
  anon_sym_COMMA = 7,
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  anon_sym_SEMI = 10,
  anon_sym_return = 11,
  sym_number = 12,
  sym_source_file = 13,
  sym_declaration = 14,
  sym_identifier = 15,
  sym_type = 16,
  sym_function_type = 17,
  sym_basic_type = 18,
  sym_parameters = 19,
  sym_parameter = 20,
  sym_definition = 21,
  sym_block = 22,
  sym_statement = 23,
  sym_expression = 24,
  sym_return_statement = 25,
  aux_sym_source_file_repeat1 = 26,
  aux_sym_parameters_repeat1 = 27,
  aux_sym_block_repeat1 = 28,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [aux_sym_identifier_token1] = "identifier_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
  [anon_sym_return] = "return",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym_declaration] = "declaration",
  [sym_identifier] = "identifier",
  [sym_type] = "type",
  [sym_function_type] = "function_type",
  [sym_basic_type] = "basic_type",
  [sym_parameters] = "parameters",
  [sym_parameter] = "parameter",
  [sym_definition] = "definition",
  [sym_block] = "block",
  [sym_statement] = "statement",
  [sym_expression] = "expression",
  [sym_return_statement] = "return_statement",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_return] = anon_sym_return,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym_declaration] = sym_declaration,
  [sym_identifier] = sym_identifier,
  [sym_type] = sym_type,
  [sym_function_type] = sym_function_type,
  [sym_basic_type] = sym_basic_type,
  [sym_parameters] = sym_parameters,
  [sym_parameter] = sym_parameter,
  [sym_definition] = sym_definition,
  [sym_block] = sym_block,
  [sym_statement] = sym_statement,
  [sym_expression] = sym_expression,
  [sym_return_statement] = sym_return_statement,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
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
  [anon_sym_DASH_GT] = {
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
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_function_type] = {
    .visible = true,
    .named = true,
  },
  [sym_basic_type] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
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
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      ADVANCE_MAP(
        '(', 12,
        ')', 13,
        ',', 15,
        '-', 1,
        ':', 4,
        ';', 18,
        '=', 5,
        'r', 6,
        '{', 16,
        '}', 17,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 1:
      if (lookahead == '>') ADVANCE(14);
      END_STATE();
    case 2:
      if (eof) ADVANCE(3);
      ADVANCE_MAP(
        '(', 12,
        ')', 13,
        ',', 15,
        '-', 1,
        ':', 4,
        ';', 18,
        '=', 5,
        '{', 16,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_identifier_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(34),
    [sym_declaration] = STATE(18),
    [sym_identifier] = STATE(39),
    [aux_sym_source_file_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_identifier_token1] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      anon_sym_RBRACE,
    ACTIONS(11), 1,
      anon_sym_return,
    STATE(39), 1,
      sym_identifier,
    STATE(4), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(35), 2,
      sym_declaration,
      sym_return_statement,
  [21] = 6,
    ACTIONS(13), 1,
      aux_sym_identifier_token1,
    ACTIONS(16), 1,
      anon_sym_RBRACE,
    ACTIONS(18), 1,
      anon_sym_return,
    STATE(39), 1,
      sym_identifier,
    STATE(3), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(35), 2,
      sym_declaration,
      sym_return_statement,
  [42] = 6,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      anon_sym_return,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      sym_identifier,
    STATE(3), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(35), 2,
      sym_declaration,
      sym_return_statement,
  [63] = 2,
    ACTIONS(25), 1,
      anon_sym_DASH_GT,
    ACTIONS(23), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      aux_sym_identifier_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [75] = 2,
    ACTIONS(29), 1,
      anon_sym_DASH_GT,
    ACTIONS(27), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      aux_sym_identifier_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [87] = 6,
    ACTIONS(5), 1,
      aux_sym_identifier_token1,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym_number,
    STATE(23), 1,
      sym_identifier,
    STATE(24), 1,
      sym_definition,
    STATE(25), 2,
      sym_block,
      sym_expression,
  [107] = 1,
    ACTIONS(35), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      aux_sym_identifier_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [116] = 1,
    ACTIONS(37), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      aux_sym_identifier_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [125] = 1,
    ACTIONS(39), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      aux_sym_identifier_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [134] = 1,
    ACTIONS(41), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      aux_sym_identifier_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [143] = 4,
    ACTIONS(43), 1,
      aux_sym_identifier_token1,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    STATE(8), 1,
      sym_type,
    STATE(11), 2,
      sym_function_type,
      sym_basic_type,
  [157] = 5,
    ACTIONS(5), 1,
      aux_sym_identifier_token1,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      sym_parameter,
    STATE(36), 1,
      sym_parameters,
    STATE(37), 1,
      sym_identifier,
  [173] = 4,
    ACTIONS(43), 1,
      aux_sym_identifier_token1,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    STATE(10), 1,
      sym_type,
    STATE(11), 2,
      sym_function_type,
      sym_basic_type,
  [187] = 4,
    ACTIONS(43), 1,
      aux_sym_identifier_token1,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    STATE(32), 1,
      sym_type,
    STATE(11), 2,
      sym_function_type,
      sym_basic_type,
  [201] = 4,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      aux_sym_identifier_token1,
    STATE(39), 1,
      sym_identifier,
    STATE(16), 2,
      sym_declaration,
      aux_sym_source_file_repeat1,
  [215] = 4,
    ACTIONS(43), 1,
      aux_sym_identifier_token1,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym_type,
    STATE(11), 2,
      sym_function_type,
      sym_basic_type,
  [229] = 4,
    ACTIONS(5), 1,
      aux_sym_identifier_token1,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    STATE(39), 1,
      sym_identifier,
    STATE(16), 2,
      sym_declaration,
      aux_sym_source_file_repeat1,
  [243] = 1,
    ACTIONS(56), 4,
      ts_builtin_sym_end,
      anon_sym_COLON,
      aux_sym_identifier_token1,
      anon_sym_SEMI,
  [250] = 4,
    ACTIONS(5), 1,
      aux_sym_identifier_token1,
    ACTIONS(33), 1,
      sym_number,
    STATE(23), 1,
      sym_identifier,
    STATE(38), 1,
      sym_expression,
  [263] = 2,
    ACTIONS(60), 1,
      anon_sym_EQ,
    ACTIONS(58), 3,
      ts_builtin_sym_end,
      aux_sym_identifier_token1,
      anon_sym_SEMI,
  [272] = 3,
    ACTIONS(5), 1,
      aux_sym_identifier_token1,
    STATE(33), 1,
      sym_parameter,
    STATE(37), 1,
      sym_identifier,
  [282] = 1,
    ACTIONS(62), 3,
      ts_builtin_sym_end,
      aux_sym_identifier_token1,
      anon_sym_SEMI,
  [288] = 1,
    ACTIONS(64), 3,
      ts_builtin_sym_end,
      aux_sym_identifier_token1,
      anon_sym_SEMI,
  [294] = 1,
    ACTIONS(66), 3,
      ts_builtin_sym_end,
      aux_sym_identifier_token1,
      anon_sym_SEMI,
  [300] = 3,
    ACTIONS(68), 1,
      anon_sym_RPAREN,
    ACTIONS(70), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      aux_sym_parameters_repeat1,
  [310] = 3,
    ACTIONS(72), 1,
      anon_sym_RPAREN,
    ACTIONS(74), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      aux_sym_parameters_repeat1,
  [320] = 1,
    ACTIONS(77), 3,
      ts_builtin_sym_end,
      aux_sym_identifier_token1,
      anon_sym_SEMI,
  [326] = 3,
    ACTIONS(70), 1,
      anon_sym_COMMA,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      aux_sym_parameters_repeat1,
  [336] = 2,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    ACTIONS(81), 2,
      aux_sym_identifier_token1,
      anon_sym_return,
  [344] = 1,
    ACTIONS(85), 3,
      ts_builtin_sym_end,
      aux_sym_identifier_token1,
      anon_sym_SEMI,
  [350] = 1,
    ACTIONS(87), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [355] = 1,
    ACTIONS(72), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [360] = 1,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
  [364] = 1,
    ACTIONS(91), 1,
      anon_sym_SEMI,
  [368] = 1,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
  [372] = 1,
    ACTIONS(95), 1,
      anon_sym_COLON,
  [376] = 1,
    ACTIONS(97), 1,
      anon_sym_SEMI,
  [380] = 1,
    ACTIONS(99), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 21,
  [SMALL_STATE(4)] = 42,
  [SMALL_STATE(5)] = 63,
  [SMALL_STATE(6)] = 75,
  [SMALL_STATE(7)] = 87,
  [SMALL_STATE(8)] = 107,
  [SMALL_STATE(9)] = 116,
  [SMALL_STATE(10)] = 125,
  [SMALL_STATE(11)] = 134,
  [SMALL_STATE(12)] = 143,
  [SMALL_STATE(13)] = 157,
  [SMALL_STATE(14)] = 173,
  [SMALL_STATE(15)] = 187,
  [SMALL_STATE(16)] = 201,
  [SMALL_STATE(17)] = 215,
  [SMALL_STATE(18)] = 229,
  [SMALL_STATE(19)] = 243,
  [SMALL_STATE(20)] = 250,
  [SMALL_STATE(21)] = 263,
  [SMALL_STATE(22)] = 272,
  [SMALL_STATE(23)] = 282,
  [SMALL_STATE(24)] = 288,
  [SMALL_STATE(25)] = 294,
  [SMALL_STATE(26)] = 300,
  [SMALL_STATE(27)] = 310,
  [SMALL_STATE(28)] = 320,
  [SMALL_STATE(29)] = 326,
  [SMALL_STATE(30)] = 336,
  [SMALL_STATE(31)] = 344,
  [SMALL_STATE(32)] = 350,
  [SMALL_STATE(33)] = 355,
  [SMALL_STATE(34)] = 360,
  [SMALL_STATE(35)] = 364,
  [SMALL_STATE(36)] = 368,
  [SMALL_STATE(37)] = 372,
  [SMALL_STATE(38)] = 376,
  [SMALL_STATE(39)] = 380,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [16] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 2, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 3, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 5, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_type, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 4, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 3, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 1, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_cpp2(void) {
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
