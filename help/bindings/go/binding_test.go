package tree_sitter_help_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-help"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_help.Language())
	if language == nil {
		t.Errorf("Error loading Help grammar")
	}
}
