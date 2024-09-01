#!/bin/bash
set -e

echo "Generating parser ..."
tree-sitter generate
echo "Done"

# Directory to search
search_dir="$1"
echo "Looking for files in \"${search_dir}\""

exclude_patterns=("mixed-lifetime-safety-and-null-contracts.cpp2" "pure2-cpp1-multitoken-fundamental-types-error.cpp2" "pure2-cpp1-prefix-expression-error.cpp2")

find_command="find \"$search_dir\" -type f \( -name \"*.cpp2\" -o -name \"*.h2\" \)"

for pattern in "${exclude_patterns[@]}"; do
    find_command+=" ! -name \"$pattern\""
done

find_command="$find_command -exec sh -c 'tree-sitter parse -q "\$1" || exit 255' _ {} \;"
echo "Command: " $find_command
eval $find_command

echo "Done"

# Usage: ./test_on_cpp2_files.sh /path/to/directory
