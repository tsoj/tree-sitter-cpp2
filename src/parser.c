#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 47
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_SEMI = 1,
  anon_sym_COLON = 2,
  sym_identifier = 3,
  sym_type_type = 4,
  anon_sym_LPAREN = 5,
  anon_sym_COMMA = 6,
  anon_sym_RPAREN = 7,
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  anon_sym_LBRACK = 10,
  anon_sym_RBRACK = 11,
  anon_sym_DOT = 12,
  anon_sym_DOT_DOT = 13,
  sym_source_file = 14,
  sym_declaration = 15,
  sym_no_definition_declaration = 16,
  sym_definition = 17,
  sym_type = 18,
  sym_function_type_without_return_type = 19,
  sym_comma_seperated_declarations = 20,
  sym_function_type = 21,
  sym_block = 22,
  sym_statement = 23,
  sym_expression = 24,
  sym_parentheses_expression = 25,
  sym_function_declaration_argument = 26,
  aux_sym_source_file_repeat1 = 27,
  aux_sym_comma_seperated_declarations_repeat1 = 28,
  aux_sym_block_repeat1 = 29,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_COLON] = ":",
  [sym_identifier] = "identifier",
  [sym_type_type] = "type_type",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DOT] = ".",
  [anon_sym_DOT_DOT] = "..",
  [sym_source_file] = "source_file",
  [sym_declaration] = "declaration",
  [sym_no_definition_declaration] = "no_definition_declaration",
  [sym_definition] = "definition",
  [sym_type] = "type",
  [sym_function_type_without_return_type] = "function_type_without_return_type",
  [sym_comma_seperated_declarations] = "comma_seperated_declarations",
  [sym_function_type] = "function_type",
  [sym_block] = "block",
  [sym_statement] = "statement",
  [sym_expression] = "expression",
  [sym_parentheses_expression] = "parentheses_expression",
  [sym_function_declaration_argument] = "function_declaration_argument",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_comma_seperated_declarations_repeat1] = "comma_seperated_declarations_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_identifier] = sym_identifier,
  [sym_type_type] = sym_type_type,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [sym_source_file] = sym_source_file,
  [sym_declaration] = sym_declaration,
  [sym_no_definition_declaration] = sym_no_definition_declaration,
  [sym_definition] = sym_definition,
  [sym_type] = sym_type,
  [sym_function_type_without_return_type] = sym_function_type_without_return_type,
  [sym_comma_seperated_declarations] = sym_comma_seperated_declarations,
  [sym_function_type] = sym_function_type,
  [sym_block] = sym_block,
  [sym_statement] = sym_statement,
  [sym_expression] = sym_expression,
  [sym_parentheses_expression] = sym_parentheses_expression,
  [sym_function_declaration_argument] = sym_function_declaration_argument,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_comma_seperated_declarations_repeat1] = aux_sym_comma_seperated_declarations_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_type_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_no_definition_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_function_type_without_return_type] = {
    .visible = true,
    .named = true,
  },
  [sym_comma_seperated_declarations] = {
    .visible = true,
    .named = true,
  },
  [sym_function_type] = {
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
  [sym_parentheses_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declaration_argument] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comma_seperated_declarations_repeat1] = {
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
  [7] = 2,
  [8] = 8,
  [9] = 8,
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
      if (eof) ADVANCE(2);
      ADVANCE_MAP(
        '(', 10,
        ')', 12,
        ',', 11,
        '.', 17,
        ':', 4,
        ';', 3,
        '[', 15,
        ']', 16,
        't', 7,
        '{', 13,
        '}', 14,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 1:
      if (eof) ADVANCE(2);
      if (lookahead == '(') ADVANCE(10);
      if (lookahead == ')') ADVANCE(12);
      if (lookahead == ',') ADVANCE(11);
      if (lookahead == ';') ADVANCE(3);
      if (lookahead == '{') ADVANCE(13);
      if (lookahead == '}') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_type_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 1},
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_type_type] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(46),
    [sym_declaration] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_parentheses_expression,
    STATE(15), 2,
      sym_block,
      sym_expression,
    ACTIONS(9), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [22] = 7,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(20), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(26), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      sym_parentheses_expression,
    STATE(3), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(42), 2,
      sym_declaration,
      sym_expression,
  [46] = 7,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(28), 1,
      anon_sym_SEMI,
    ACTIONS(30), 1,
      sym_identifier,
    ACTIONS(32), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      sym_parentheses_expression,
    STATE(3), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(42), 2,
      sym_declaration,
      sym_expression,
  [70] = 9,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(34), 1,
      sym_identifier,
    ACTIONS(36), 1,
      anon_sym_COMMA,
    ACTIONS(38), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym_parentheses_expression,
    STATE(36), 1,
      sym_function_declaration_argument,
    STATE(38), 1,
      sym_expression,
    STATE(39), 1,
      sym_comma_seperated_declarations,
    STATE(40), 1,
      sym_declaration,
  [98] = 7,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(28), 1,
      anon_sym_SEMI,
    ACTIONS(30), 1,
      sym_identifier,
    ACTIONS(40), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      sym_parentheses_expression,
    STATE(4), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(42), 2,
      sym_declaration,
      sym_expression,
  [122] = 5,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_parentheses_expression,
    STATE(15), 2,
      sym_block,
      sym_expression,
    ACTIONS(9), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
  [141] = 6,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(42), 1,
      anon_sym_LPAREN,
    STATE(2), 1,
      sym_function_type_without_return_type,
    STATE(24), 1,
      sym_parentheses_expression,
    STATE(25), 1,
      sym_type,
    STATE(28), 2,
      sym_function_type,
      sym_expression,
  [161] = 6,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(42), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
      sym_function_type_without_return_type,
    STATE(24), 1,
      sym_parentheses_expression,
    STATE(25), 1,
      sym_type,
    STATE(28), 2,
      sym_function_type,
      sym_expression,
  [181] = 1,
    ACTIONS(44), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [191] = 1,
    ACTIONS(46), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [201] = 1,
    ACTIONS(46), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [211] = 1,
    ACTIONS(48), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [221] = 6,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      anon_sym_COMMA,
    ACTIONS(52), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym_parentheses_expression,
    STATE(38), 1,
      sym_expression,
  [240] = 1,
    ACTIONS(54), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [248] = 3,
    ACTIONS(56), 1,
      anon_sym_COLON,
    ACTIONS(58), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(18), 2,
      sym_no_definition_declaration,
      sym_definition,
  [260] = 4,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    ACTIONS(62), 1,
      anon_sym_SEMI,
    STATE(23), 2,
      sym_declaration,
      aux_sym_source_file_repeat1,
  [274] = 1,
    ACTIONS(64), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [282] = 1,
    ACTIONS(66), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [290] = 3,
    ACTIONS(56), 1,
      anon_sym_COLON,
    ACTIONS(58), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(18), 2,
      sym_no_definition_declaration,
      sym_definition,
  [302] = 1,
    ACTIONS(68), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [310] = 1,
    ACTIONS(70), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [318] = 4,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    ACTIONS(74), 1,
      anon_sym_SEMI,
    ACTIONS(77), 1,
      sym_identifier,
    STATE(23), 2,
      sym_declaration,
      aux_sym_source_file_repeat1,
  [332] = 1,
    ACTIONS(80), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [340] = 1,
    ACTIONS(82), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [348] = 1,
    ACTIONS(84), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [356] = 1,
    ACTIONS(86), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [364] = 1,
    ACTIONS(88), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [372] = 1,
    ACTIONS(90), 4,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
  [379] = 1,
    ACTIONS(92), 4,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
  [386] = 3,
    ACTIONS(56), 1,
      anon_sym_COLON,
    ACTIONS(80), 1,
      anon_sym_SEMI,
    STATE(18), 2,
      sym_no_definition_declaration,
      sym_definition,
  [397] = 3,
    ACTIONS(94), 1,
      sym_identifier,
    STATE(37), 1,
      sym_function_declaration_argument,
    STATE(40), 1,
      sym_declaration,
  [407] = 3,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    ACTIONS(98), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      aux_sym_comma_seperated_declarations_repeat1,
  [417] = 2,
    ACTIONS(100), 1,
      anon_sym_COLON,
    STATE(18), 2,
      sym_no_definition_declaration,
      sym_definition,
  [425] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    ACTIONS(105), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      aux_sym_comma_seperated_declarations_repeat1,
  [435] = 3,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
    STATE(33), 1,
      aux_sym_comma_seperated_declarations_repeat1,
  [445] = 1,
    ACTIONS(105), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [450] = 2,
    ACTIONS(109), 1,
      anon_sym_COMMA,
    ACTIONS(111), 1,
      anon_sym_RPAREN,
  [457] = 2,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    ACTIONS(115), 1,
      anon_sym_RPAREN,
  [464] = 1,
    ACTIONS(58), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [469] = 1,
    ACTIONS(117), 1,
      anon_sym_RPAREN,
  [473] = 1,
    ACTIONS(119), 1,
      anon_sym_SEMI,
  [477] = 1,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
  [481] = 1,
    ACTIONS(123), 1,
      anon_sym_RPAREN,
  [485] = 1,
    ACTIONS(111), 1,
      anon_sym_RPAREN,
  [489] = 1,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 70,
  [SMALL_STATE(6)] = 98,
  [SMALL_STATE(7)] = 122,
  [SMALL_STATE(8)] = 141,
  [SMALL_STATE(9)] = 161,
  [SMALL_STATE(10)] = 181,
  [SMALL_STATE(11)] = 191,
  [SMALL_STATE(12)] = 201,
  [SMALL_STATE(13)] = 211,
  [SMALL_STATE(14)] = 221,
  [SMALL_STATE(15)] = 240,
  [SMALL_STATE(16)] = 248,
  [SMALL_STATE(17)] = 260,
  [SMALL_STATE(18)] = 274,
  [SMALL_STATE(19)] = 282,
  [SMALL_STATE(20)] = 290,
  [SMALL_STATE(21)] = 302,
  [SMALL_STATE(22)] = 310,
  [SMALL_STATE(23)] = 318,
  [SMALL_STATE(24)] = 332,
  [SMALL_STATE(25)] = 340,
  [SMALL_STATE(26)] = 348,
  [SMALL_STATE(27)] = 356,
  [SMALL_STATE(28)] = 364,
  [SMALL_STATE(29)] = 372,
  [SMALL_STATE(30)] = 379,
  [SMALL_STATE(31)] = 386,
  [SMALL_STATE(32)] = 397,
  [SMALL_STATE(33)] = 407,
  [SMALL_STATE(34)] = 417,
  [SMALL_STATE(35)] = 425,
  [SMALL_STATE(36)] = 435,
  [SMALL_STATE(37)] = 445,
  [SMALL_STATE(38)] = 450,
  [SMALL_STATE(39)] = 457,
  [SMALL_STATE(40)] = 464,
  [SMALL_STATE(41)] = 469,
  [SMALL_STATE(42)] = 473,
  [SMALL_STATE(43)] = 477,
  [SMALL_STATE(44)] = 481,
  [SMALL_STATE(45)] = 485,
  [SMALL_STATE(46)] = 489,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 1, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type_without_return_type, 4, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type_without_return_type, 3, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type_without_return_type, 2, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 3, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration_argument, 1, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 2, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parentheses_expression, 4, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parentheses_expression, 2, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_definition_declaration, 2, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parentheses_expression, 3, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comma_seperated_declarations, 2, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comma_seperated_declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comma_seperated_declarations_repeat1, 2, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comma_seperated_declarations, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [125] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
