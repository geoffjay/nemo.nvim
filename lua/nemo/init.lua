-- nemo.nvim: filetype support and syntax highlighting for Nemo single-file
-- components (`.nemo` SFC).
--
-- Highlighting is tree-sitter based. Two ways to get the parser installed:
--
--   1. `make` in this repo builds `parser/nemo.so` directly (no dependency on
--      nvim-treesitter). Because the plugin dir is on the runtimepath, Neovim
--      picks it up automatically.
--   2. With nvim-treesitter installed, `require("nemo").setup()` registers the
--      grammar so `:TSInstall nemo` compiles and installs it.

local M = {}

-- Repo root: <root>/lua/nemo/init.lua -> :h:h:h
local function plugin_root()
  local source = debug.getinfo(1, "S").source:sub(2)
  return vim.fn.fnamemodify(source, ":h:h:h")
end

-- Register the grammar with nvim-treesitter so `:TSInstall nemo` works.
-- Supports both the `main` (rewrite) and `master` (classic) branches. No-op
-- when nvim-treesitter is absent. Building via `:TSInstall` needs the
-- `tree-sitter` CLI on PATH; the bundled `parser/nemo.so` (via `make`) does not.
local function register_with_nvim_treesitter()
  local ok, parsers = pcall(require, "nvim-treesitter.parsers")
  if not ok then
    return
  end

  local root = plugin_root()

  -- master branch (classic): parsers.get_parser_configs() -> config table.
  if type(parsers.get_parser_configs) == "function" then
    local configs = parsers.get_parser_configs()
    if not configs.nemo then
      configs.nemo = {
        install_info = {
          url = root,
          files = { "src/parser.c", "src/scanner.c" },
          generate_requires_npm = false,
          requires_generate_from_grammar = false,
        },
        filetype = "nemo",
      }
    end
    return
  end

  -- main branch (rewrite): `parsers` is a table<lang, ParserInfo>. Custom
  -- parsers are added on the `User TSUpdate` event, which `get_available()`
  -- (the source of `:TSInstall` completion) fires before reading the table.
  local function add()
    local p = require("nvim-treesitter.parsers")
    if not p.nemo then
      p.nemo = {
        install_info = {
          path = root,          -- local dir; compiled in place, no download
          queries = "queries/nemo",
          generate = false,     -- src/parser.c is committed
          generate_from_json = false,
        },
        tier = 3,
      }
    end
  end

  add()
  vim.api.nvim_create_autocmd("User", { pattern = "TSUpdate", callback = add })
end

function M.setup(_opts)
  vim.filetype.add({ extension = { nemo = "nemo" } })
  register_with_nvim_treesitter()
end

return M
