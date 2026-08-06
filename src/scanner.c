#include "tree_sitter/parser.h"

#include <string.h>

// External tokens for the raw-text bodies of <script> (Rhai) and <style>
// (CSS subset). Modeled on the tree-sitter-html raw-text scanner: consume
// everything up to (but not including) the matching close tag, so the grammar
// can re-lex the `</script>` / `</style>` end tag and injections can target
// the captured body.

enum TokenType {
  RAW_TEXT_SCRIPT,
  RAW_TEXT_STYLE,
};

void *tree_sitter_nemo_external_scanner_create(void) { return NULL; }
void tree_sitter_nemo_external_scanner_destroy(void *payload) { (void)payload; }
unsigned tree_sitter_nemo_external_scanner_serialize(void *payload, char *buffer) {
  (void)payload;
  (void)buffer;
  return 0;
}
void tree_sitter_nemo_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  (void)payload;
  (void)buffer;
  (void)length;
}

static char to_upper(int32_t c) {
  if (c >= 'a' && c <= 'z') {
    return (char)(c - ('a' - 'A'));
  }
  return (char)c;
}

// Scan a raw-text body up to `delimiter` (e.g. "</SCRIPT"), which must be
// supplied in uppercase. Returns false when the body is empty (so the grammar's
// optional(raw_text) yields an absent node), matching nemo's "empty block ->
// None" behavior.
static bool scan_raw_text(TSLexer *lexer, const char *delimiter, enum TokenType symbol) {
  const size_t delimiter_len = strlen(delimiter);
  bool has_content = false;

  lexer->mark_end(lexer);

  size_t delimiter_index = 0;
  while (lexer->lookahead != 0) {
    if (to_upper(lexer->lookahead) == delimiter[delimiter_index]) {
      delimiter_index++;
      if (delimiter_index == delimiter_len) {
        break;
      }
      lexer->advance(lexer, false);
    } else {
      delimiter_index = 0;
      lexer->advance(lexer, false);
      lexer->mark_end(lexer);
      has_content = true;
    }
  }

  if (!has_content) {
    return false;
  }

  lexer->result_symbol = symbol;
  return true;
}

bool tree_sitter_nemo_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  (void)payload;

  if (valid_symbols[RAW_TEXT_SCRIPT]) {
    return scan_raw_text(lexer, "</SCRIPT", RAW_TEXT_SCRIPT);
  }
  if (valid_symbols[RAW_TEXT_STYLE]) {
    return scan_raw_text(lexer, "</STYLE", RAW_TEXT_STYLE);
  }
  return false;
}
