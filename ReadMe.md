TES 4: Oblivion scripting language (obl) grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter).


# Status

- Top Level
    - Scriptname
    - Blocks
    - Variable Declarations
- Blocks
    - Structure
    - Feature Type
    - Parameters
    - User-Defined Functions
- Inner Block
    - Set Statement
    - Let Statement
    - User-defined Function Call
    - Conditional Statement
        - `elseif`, `else`
    - While Loop Statement
    - ForEach Loop Statement
    - Return, Break, Continue Statement
    - Goto Statement
    - Label Statement
    - Expressions
        - Built-in Functions
                - OBSE Plugins
        - Binary Expressions
        - Unary Expressions
        - Parentheses
        - Method-type Functions
        - Filter Operator
    - Variables
        - Array Variables
        - Quest Variables


# Built-in Functions

Built in functions have to be defined statically, as the syntax for calling them is generally
identical to that of a general variable/reference. Because of this, any function not found within
the parser itself will simply not be able to be parsed, and will present a warning to the user

Currently this warning is highlighting the entire statement with the hl-group `@warning`. This may
be subject to change.