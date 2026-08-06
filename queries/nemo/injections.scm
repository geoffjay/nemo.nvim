; Language injections for Nemo single-file components (.nemo)

; <script> bodies are Rhai.
(script_element
  (raw_text) @injection.content
  (#set! injection.language "rhai"))

; <style> bodies are a CSS subset.
(style_element
  (raw_text) @injection.content
  (#set! injection.language "css"))

; XML-style comments spell-check as comments (handled in highlights); nothing
; else to inject.
