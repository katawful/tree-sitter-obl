#include <tree_sitter/parser.h>
#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>
#include <typeinfo>
#include <set>
#include <cwctype>

namespace {

using std::string;
using std::set;
using namespace std;

enum TokenType {
  TERMINATOR,
  NO_WHITESPACE,
  DOT,
  OPEN_SUBSCRIPT,
};

struct Scanner {

  void skip(TSLexer *lexer) {
    lexer->advance(lexer, true);
  }

  void advance(TSLexer *lexer) {
    lexer->advance(lexer, false);
  }

  unsigned serialize(char *buffer) {
    // if the length of our terminator is bigger than our buffer size, return 0
    if (terminator.length() >= TREE_SITTER_SERIALIZATION_BUFFER_SIZE) return 0;
    // copy the contents of the buffer character into our string
    terminator.copy(&buffer[0], terminator.length());
    return terminator.length();
  }

  void deserialize(const char *buffer, unsigned length) {
    // reset our string if empty
    if (length == 0) {
      terminator.clear();
      // else just assign it to the buffer to deserialize it
    } else {
      terminator.assign(&buffer[0], &buffer[length]);
    }
  }

  bool space_handler(TSLexer *lexer) {
    int prevCol = 0;
    while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
      int col = lexer->get_column(lexer);
      skip(lexer);
      // If at end of line, and nothing but whitespace
      // end the mark and return true we've found what we were looking for
      if (lexer->lookahead == '\n'
        || lexer->lookahead == '\r'
        || lexer->lookahead == ';'
        || lexer->lookahead == 0)
      {
        /* lexer->mark_end(lexer); */
        return true;
        // Any other character is **NOT** the terminator for the whitespace
      } else if (lexer->lookahead != ' ' && lexer->lookahead != '\t') {
        /* lexer->mark_end(lexer); */
        return false;
        // if we somehow got to the next line, we were at eol anyways
      } else if (col == 0) {
        /* lexer->mark_end(lexer); */
        return true;
      }
      prevCol = col;
    }
  }

  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    int char_code = lexer->lookahead;
    /* For FUNCTION
     * We want to make sure we have the set of functions
     * as well as the current lookahead is an alphanumeric.
     */
     if (lexer->lookahead == '.' && valid_symbols[DOT]) {
      lexer->result_symbol = DOT;
      return true;
    } else if (lexer->lookahead == '[' && valid_symbols[OPEN_SUBSCRIPT]) {
      lexer->result_symbol = OPEN_SUBSCRIPT;
      return true;
    } else if ((lexer->lookahead == '\n'
            || lexer->lookahead == '\r'
            || lexer->lookahead == ';'
            || lexer->lookahead == 0)
      && valid_symbols[TERMINATOR])
    {
      lexer->result_symbol = TERMINATOR;
      return true;
      /* Spaces need to be handled specially */
    } else if (lexer->lookahead == ' ' || lexer->lookahead == '\t'
      && valid_symbols[TERMINATOR]) {
      if (space_handler(lexer) == true) {
        lexer->result_symbol = TERMINATOR;
        return true;
      } else {
        return false;
      }
    } else if (valid_symbols[NO_WHITESPACE] && valid_symbols[NO_WHITESPACE]) {
      lexer->result_symbol = NO_WHITESPACE;
      return true;
    } else {
      return false;
    }
  }
  string terminator;

};
}
extern "C" {

void *tree_sitter_obl_external_scanner_create() {
  return new Scanner();
  /* return NULL; */
}

bool tree_sitter_obl_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->scan(lexer, valid_symbols);
}

unsigned tree_sitter_obl_external_scanner_serialize(void *payload, char *state) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->serialize(state);
}

void tree_sitter_obl_external_scanner_deserialize(void *payload, const char *state, unsigned length) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  scanner->deserialize(state, length);
}

void tree_sitter_obl_external_scanner_destroy(void *payload) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  delete scanner;
}

}
