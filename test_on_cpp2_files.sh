#!/bin/bash
set -e

echo "Generating parser ..."
tree-sitter generate
echo "Done"

# Directory to search
search_dir="$1"

echo "Looking for files in \"${search_dir}\""
# Find and concatenate files, stopping on failure
find "$search_dir" -type f \( -name "*.cpp2" -o -name "*.h2" \) -exec sh -c 'tree-sitter parse -q "$1" || exit 255' _ {} \;
echo "Done"

# Usage: ./script_name.sh /path/to/directory
