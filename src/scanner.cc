#include <tree_sitter/parser.h>
#include <iostream>
#include <string>
#include <typeinfo>
/* #include <set> */
#include <cwctype>

namespace {

using std::string;
/* using std::set; */

enum TokenType {
  TERMINATOR,
};

struct Scanner {

  void skip(TSLexer *lexer) {
    lexer->advance(lexer, true);
  }

  void advance(TSLexer *lexer) {
    lexer->advance(lexer, false);
  }

  unsigned serialize(char *buffer) {
    // if the length of our eol is bigger than our buffer size, return 0
    if (eol.length() >= TREE_SITTER_SERIALIZATION_BUFFER_SIZE) return 0;
    // copy the contents of the buffer character into our string
    eol.copy(&buffer[0], eol.length());
    return eol.length();
  }

  void deserialize(const char *buffer, unsigned length) {
    // reset our string if empty
    if (length == 0) {
      eol.clear();
      // else just assign it to the buffer to deserialize it
    } else {
      eol.assign(&buffer[0], &buffer[length]);
    }
  }

  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    int breakChar = -1;
    if (valid_symbols[TERMINATOR]) {
      while (lexer->lookahead >= 0) {
        int currChar;
        currChar = lexer->lookahead;
        if (currChar == ' '
          || currChar == '\t'
          || currChar == '\n'
          || currChar == '\r'
          || currChar == ';'
          || currChar == 0)
        {
          lexer->mark_end(lexer);
          breakChar = currChar;
          break;
        } else {
          lexer->mark_end(lexer);
          breakChar = -1;
          break;
        }
      }
    }

    // all whitespace, null, and ';', are valid terminators
    if (breakChar >= 0) {
      lexer->result_symbol = TERMINATOR;
      return true;
      // anything else is treated as an error
    } else {
      return false;
    }
  }
  string eol;

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
