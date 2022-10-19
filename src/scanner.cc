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

  int space_handler(TSLexer *lexer) {
    int prevCol = 0;
    while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
      int col = lexer->get_column(lexer);
      skip(lexer);
      // if at end of line, and nothing but whitespace
      // end the mark and return true
      // we've found what we were looking for
      if (lexer->lookahead == '\n'
        || lexer->lookahead == '\r'
        || lexer->lookahead == ';'
        || lexer->lookahead == 0)
      {
        lexer->mark_end(lexer);
        return true;
        // Any other character is **NOT** the terminator for the whitespace
      } else if (lexer->lookahead != ' ' && lexer->lookahead != '\t') {
        lexer->mark_end(lexer);
        return false;
        // if we somehow got to the next line, we were at eol anyways
      } else if (col == 0) {
        lexer->mark_end(lexer);
        return true;
      }
      prevCol = col;
    }
  }

  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    int breakChar = -1;
    if (valid_symbols[TERMINATOR]) {
      while (lexer->lookahead >= 0) {
        int currChar;
        currChar = lexer->lookahead;
        if (currChar == '\n'
          || currChar == '\r'
          || currChar == ';'
          || currChar == 0)
        {
          lexer->mark_end(lexer);
          breakChar = currChar;
          break;
          /* Spaces need to be handled specially */
        } else if (currChar == ' ' || currChar == '\t') {
          if (space_handler(lexer) == true) {
            breakChar = currChar;
            break;
          } else {
            breakChar = -1;
            break;
          }
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
