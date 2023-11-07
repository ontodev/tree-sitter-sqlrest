# tree-sitter-sqlrest

<!-- Please do not edit README.md directly. To generate a new readme from the crate documentation
     in the current file, install cargo-readme using `cargo install cargo-readme` and then run:
     `cargo readme > README.md`
     after making the desired edits to the current file.
-->

This crate provides sqlrest language support for the [tree-sitter][] parsing library.

Typically, you will use the [language][language func] function to add this language to a
tree-sitter [Parser][], and then use the parser to parse some code:

```rust
let code = "";
let mut parser = tree_sitter::Parser::new();
parser.set_language(tree_sitter_sqlrest::language()).expect("Error loading sqlrest grammar");
let tree = parser.parse(code, None).unwrap();
```

To modify the grammar, edit grammar.js and then run: `tree-sitter generate`

[Language]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Language.html
[language func]: fn.language.html
[Parser]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Parser.html
[tree-sitter]: https://tree-sitter.github.io/

License: MIT
