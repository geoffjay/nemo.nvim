# nemo.nvim

Neovim filetype support and syntax highlighting for **Nemo single-file
components** — the `.nemo` SFC format.

Highlighting is [tree-sitter](https://tree-sitter.github.io/) based, with a
Vim regex fallback so a `.nemo` buffer is never left plain when no parser is
installed.

## What it understands

A `.nemo` file is a Vue-like single-file component. The grammar models:

- **Elements & tags** — start/end/self-closing tags, attributes, nested
  component trees. App-level and structural tags (`app`, `window`, `template`,
  `props`, `slot`, `data`, `router`, `route`, `nav-link`, …) highlight as
  builtins.
- **Raw-text blocks** — `<script>` bodies are injected as **Rhai** and
  `<style>` bodies as **CSS**. No `<![CDATA[…]]>` needed (an external scanner
  captures the body verbatim, exactly like the nemo parser); a CDATA wrapper is
  still tolerated.
- **`${ … }` interpolation** — scopes (`var`, `env`, `data`, `route`, `item`)
  as builtin variables, builtin functions (`upper`, `lower`, `trim`, `length`,
  `coalesce`, `env`), member paths, strings, and numbers.
- **Control-flow directives** — `n:for` / `n:if` / `n:key` with their
  expressions: the `in` keyword, iterables, comparison operators, string/number
  literals, and static arrays.
- **Special attributes** — `bind-<prop>` bindings and `on-<event>` handlers are
  distinguished from ordinary attributes.

## Requirements

- Neovim ≥ 0.9 (native tree-sitter). Tested on 0.12.
- **Recommended path — bundled parser:** a C compiler (`cc`). `make` builds
  `parser/nemo.so` from the committed `src/parser.c`; no `tree-sitter` CLI and
  no nvim-treesitter needed.
- **Alternative — `:TSInstall nemo`:** the `tree-sitter` CLI on your `PATH`
  (`brew install tree-sitter` or `cargo install tree-sitter-cli`).
  nvim-treesitter's `main` branch shells out to `tree-sitter build`; without the
  CLI `:TSInstall` will fail. Both the `main` and `master` branches are
  supported by `require("nemo").setup()`.
- Optional but recommended sibling parsers for the injected languages:
  `:TSInstall rhai css` (highlighting degrades gracefully without them).

## Install

### lazy.nvim

```lua
{
  "geoffjay/nemo.nvim",
  build = "make",             -- compiles parser/nemo.so
  ft = "nemo",
  config = function()
    require("nemo").setup()
  end,
}
```

### packer.nvim

```lua
use({
  "geoffjay/nemo.nvim",
  run = "make",
  config = function()
    require("nemo").setup()
  end,
})
```

### Manual

```sh
git clone https://github.com/geoffjay/nemo.nvim \
  ~/.local/share/nvim/site/pack/plugins/start/nemo.nvim
cd ~/.local/share/nvim/site/pack/plugins/start/nemo.nvim && make
```

## How the parser is found

`make` builds `parser/nemo.so` into the plugin directory. Because that
directory is on Neovim's `runtimepath`, `vim.treesitter` loads it automatically
for the `nemo` filetype — no nvim-treesitter required.

If you use **nvim-treesitter** (either the `main` or `master` branch),
`require("nemo").setup()` registers the grammar so you can instead run:

```
:TSInstall nemo
```

On the `main` branch `nemo` is added via the `User TSUpdate` hook, so it appears
in `:TSInstall` completion once `setup()` has run (i.e. after a `.nemo` buffer
has loaded the plugin, unless you load it eagerly). This path compiles with the
`tree-sitter` CLI — see Requirements. The bundled `make` parser needs neither
nvim-treesitter nor the CLI, so you rarely need `:TSInstall`.

## Development

The grammar lives in `grammar.js` with an external scanner in `src/scanner.c`
(raw-text capture for `<script>`/`<style>`). Requires the tree-sitter CLI
(`npm install`).

```sh
npm install            # installs tree-sitter-cli locally
make generate          # regenerate src/parser.c from grammar.js
make test              # run the corpus tests in test/corpus/
make                   # build parser/nemo.so
```

Layout:

```
grammar.js                 grammar definition
src/scanner.c              external scanner (raw-text <script>/<style>)
src/parser.c               generated parser (committed)
queries/nemo/*.scm         highlights / injections / folds
ftdetect/nemo.lua          *.nemo -> filetype=nemo
ftplugin/nemo.lua          buffer options + start tree-sitter (regex fallback)
syntax/nemo.vim            regex fallback highlighter
lua/nemo/init.lua          setup(): filetype + nvim-treesitter registration
test/corpus/*.txt          grammar tests
```

## License

MIT
