TES 4: Oblivion scripting language (obl) grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter).


# Status

- [x] Top Level
    - [x] Scriptname
    - [x] Blocks
    - [x] Variable Declarations
- [x] Blocks
    - [x] Structure
    - [x] Feature Type
    - [x] Parameters
    - [x] User-Defined Functions
- [x] Inner Block
    - [x] Set Statement
    - [x] Let Statement
    - [x] User-defined Function Call
    - [x] Conditional Statement
        - [x] `elseif`, `else`
    - [x] While Loop Statement
    - [x] ForEach Loop Statement
    - [x] Return, Break, Continue Statement
    - [x] Goto Statement
    - [x] Label Statement
    - [x] Expressions
        - [x] Built-in Functions
            - [x] OBSE Plugins
        - [x] Binary Expressions
        - [x] Unary Expressions
        - [x] Parentheses
        - [x] Method-type Functions
        - [x] Filter Operator
    - [x] Variables
        - [x] Array Variables
        - [x] Quest Variables


# Built-in Functions

Built in functions have to be defined statically, as the syntax for calling them is generally
identical to that of a general variable/reference. Because of this, any function not found within
the parser itself will simply not be able to be parsed, and will present a warning to the user

Currently this warning is highlighting the entire statement with the hl-group `@text.underline`.

If you happen upon functions that do not appear highlighted properly in any way, please report it
in the pinned issue on GitHub or make a PR and submit to said pinned issue for bookkeeping.
