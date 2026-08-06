" Vim regex syntax for Nemo single-file components (.nemo).
" Fallback highlighter used when a tree-sitter `nemo` parser is not available.

if exists("b:current_syntax")
  finish
endif

syntax case match
syntax sync minlines=50

" Comments and CDATA.
syntax region nemoComment start=/<!--/ end=/-->/ contains=@Spell keepend
syntax region nemoCData  start=/<!\[CDATA\[/ end=/\]\]>/ keepend

" ${ ... } interpolation (usable inside strings and text).
syntax region nemoInterp matchgroup=nemoInterpDelim start=/\${/ end=/}/ contained contains=nemoInterpFunc,nemoInterpScope,nemoInterpString,nemoInterpNumber
syntax match  nemoInterpScope  /\<\%(data\|var\|env\|route\|item\|loop\)\>/ contained
syntax match  nemoInterpFunc   /\<\%(upper\|lower\|trim\|length\|coalesce\|env\)\ze(/ contained
syntax region nemoInterpString start=/'/ end=/'/ contained
syntax match  nemoInterpNumber /\<\d\+\%(\.\d\+\)\?\>/ contained

" Attribute string values.
syntax region nemoString start=/"/ skip=/\\"/ end=/"/ contained contains=nemoInterp
syntax region nemoString start=/'/ skip=/\\'/ end=/'/ contained contains=nemoInterp

" Special attribute names: n:*, bind-*, on-*.
syntax match nemoDirective /\<n:[a-zA-Z][a-zA-Z0-9-]*/ contained
syntax match nemoBinding   /\<bind-[a-zA-Z][a-zA-Z0-9-]*/ contained
syntax match nemoHandler   /\<on-[a-zA-Z][a-zA-Z0-9-]*/ contained
syntax match nemoAttribute /[a-zA-Z_][a-zA-Z0-9_.-]*/ contained

" Tags. The tag name is the first identifier after < or </.
syntax match nemoTagName /[a-zA-Z_][a-zA-Z0-9_:.-]*/ contained
syntax region nemoTag
      \ matchgroup=nemoTagDelim
      \ start=+</\?+
      \ end=+/\?>+
      \ contains=nemoTagName,nemoDirective,nemoBinding,nemoHandler,nemoAttribute,nemoString
      \ keepend

" Raw-text blocks: <script> (Rhai) and <style> (CSS). Highlighted as plain
" regions here; tree-sitter injects the real sub-languages.
syntax region nemoScript matchgroup=nemoTagDelim
      \ start=+<script\%(\s[^>]*\)\?>+ end=+</script>+
      \ contains=@Spell keepend
syntax region nemoStyle matchgroup=nemoTagDelim
      \ start=+<style\%(\s[^>]*\)\?>+ end=+</style>+
      \ contains=@Spell keepend

highlight default link nemoComment       Comment
highlight default link nemoCData         Comment
highlight default link nemoTagName       Tag
highlight default link nemoTagDelim      Delimiter
highlight default link nemoAttribute     Identifier
highlight default link nemoDirective     Keyword
highlight default link nemoBinding       PreProc
highlight default link nemoHandler       PreProc
highlight default link nemoString        String
highlight default link nemoInterp        Normal
highlight default link nemoInterpDelim   Special
highlight default link nemoInterpScope   Type
highlight default link nemoInterpFunc    Function
highlight default link nemoInterpString  String
highlight default link nemoInterpNumber  Number

let b:current_syntax = "nemo"
