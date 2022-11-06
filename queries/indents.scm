[
  (script_declaration)
  (variable_declaration)
  (block)
  "end"
] @zero_indent
(statement) @indent
[
  "loop"
  "else"
  "elseif"
  "endif"
] @branch

(block (statement)) @indent
