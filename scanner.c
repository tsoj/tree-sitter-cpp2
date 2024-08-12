#include "tree_sitter/alloc.h"
#include "tree_sitter/array.h"
#include "tree_sitter/parser.h"

enum TokenType {
  UNARY_POSTFIX_OP_STAR,
  BINARY_OP_STAR,
};

void *tree_sitter_cpp2_external_scanner_create(void) { return NULL; }

void tree_sitter_cpp2_external_scanner_destroy(void *payload) {}

unsigned tree_sitter_cpp2_external_scanner_serialize(void *payload,
                                                     char *buffer) {
  return 0;
}

void tree_sitter_cpp2_external_scanner_deserialize(void *payload,
                                                   const char *buffer,
                                                   unsigned length) {}

bool tree_sitter_cpp2_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {
  if (valid_symbols[UNARY_POSTFIX_OP_STAR] || valid_symbols[BINARY_OP_STAR]) {

  }
}
