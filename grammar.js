/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "cpp2",

  rules: {
    // TODO: add the actual grammar rules
    source_file: ($) => "hello",
  },
});
