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

-- Register the parser with nvim-treesitter (classic API) so `:TSInstall nemo`
-- builds it from this repo. No-op when nvim-treesitter is absent.
local function register_with_nvim_treesitter()
  local ok, parsers = pcall(require, "nvim-treesitter.parsers")
  if not ok then
    return
  end

  local get_configs = parsers.get_parser_configs or parsers.configs
  if type(get_configs) ~= "function" then
    return
  end

  local configs = get_configs()
  if configs.nemo then
    return
  end

  configs.nemo = {
    install_info = {
      url = plugin_root(),
      files = { "src/parser.c", "src/scanner.c" },
      generate_requires_npm = false,
      requires_generate_from_grammar = false,
    },
    filetype = "nemo",
  }
end

function M.setup(_opts)
  vim.filetype.add({ extension = { nemo = "nemo" } })
  register_with_nvim_treesitter()
end

return M
