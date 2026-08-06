-- Buffer-local settings for Nemo single-file components.

vim.bo.commentstring = "<!-- %s -->"
vim.bo.comments = ""
vim.bo.suffixesadd = ".nemo"

-- Sensible defaults for authoring .nemo markup.
vim.bo.expandtab = true
vim.bo.shiftwidth = 2
vim.bo.softtabstop = 2

-- Prefer tree-sitter highlighting when a `nemo` parser is available; otherwise
-- fall back to the bundled regex syntax so the buffer is never left plain.
local ts_ok = false
if vim.treesitter and vim.treesitter.language and vim.treesitter.language.add then
  ts_ok = pcall(vim.treesitter.language.add, "nemo")
end
if ts_ok then
  ts_ok = pcall(vim.treesitter.start)
end

if not ts_ok then
  vim.bo.syntax = "nemo"
end
