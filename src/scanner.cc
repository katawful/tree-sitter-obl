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
  EOL,
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
    // we only want to look for a eol
    int breakChar;
    if (valid_symbols[EOL]) {
      /* std::cout << "BLANK: " << iswblank(lexer->lookahead) << std::endl; */
      /* std::cout << "SPACE: " << iswspace(lexer->lookahead) << std::endl; */
      /* std::cout << "ALPHANUM: " << iswalnum(lexer->lookahead) << std::endl; */
      /* std::cout << "TYPE: " << typeid(lexer->lookahead).name() << std::endl; */
      /* std::cout << "VALUE: " << lexer->lookahead << std::endl; */
      while (lexer->lookahead) {
        int currChar;
        currChar = lexer->lookahead;
        breakChar = 0;
        if (currChar == ' ' || currChar == '\t') {
          /* std::cout << "Advance lexer" << std::endl; */
          advance(lexer);
          continue;
        } else if (iswalnum(currChar)) {
          /* std::cout << "Break lexer on unexpected" << std::endl; */
          lexer->mark_end(lexer);
          breakChar = currChar;
          break;
        } else if (currChar == '\n') {
          /* std::cout << "Break lexer on nl" << std::endl; */
          lexer->mark_end(lexer);
          breakChar = currChar;
          break;
        }
      }
    }

    /* std::cout << "Break char: " << breakChar << std::endl; */

    if (breakChar == '\n' || breakChar == 0) {
      lexer->result_symbol = EOL;
      /* std::cout << "true" << std::endl; */
      return true;
    } else {
      /* std::cout << "false" << std::endl; */
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
