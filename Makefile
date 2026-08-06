# Build the tree-sitter parser as parser/nemo.so so Neovim can load it directly
# (the plugin directory is on the runtimepath). No nvim-treesitter required.

CC ?= cc
CFLAGS ?= -O2 -Wall -Wextra -fPIC -std=c11
SRC := src/parser.c src/scanner.c
OUT := parser/nemo.so

UNAME_S := $(shell uname -s)
ifeq ($(UNAME_S),Darwin)
	SHARED := -dynamiclib -Wl,-undefined,dynamic_lookup
else
	SHARED := -shared
endif

.PHONY: all clean generate test

all: $(OUT)

$(OUT): $(SRC)
	@mkdir -p parser
	$(CC) $(CFLAGS) $(SHARED) -Isrc -o $(OUT) $(SRC)

# Regenerate src/parser.c from grammar.js (requires the tree-sitter CLI).
generate:
	tree-sitter generate

# Run the corpus tests (requires the tree-sitter CLI).
test:
	tree-sitter test

clean:
	rm -rf parser build
