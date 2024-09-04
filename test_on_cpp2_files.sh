#!/bin/bash
set -e

# Directory to search
search_dir="$1"
echo "Looking for files in \"${search_dir}\""

exclude_patterns=(
    "mixed-lifetime-safety-and-null-contracts.cpp2"
    "pure2-cpp1-multitoken-fundamental-types-error.cpp2"
    "pure2-cpp1-prefix-expression-error.cpp2"
    "pure2-statement-parse-error.cpp2"
    "msvc-msstl-e.cpp2"
    "gcc-10-libstdc++-e.cpp2"
    "clang-12-libstdc++-e.cpp2"
)

find_command="find \"$search_dir\" -type f \( -name \"*.cpp2\" -o -name \"*.h2\" \)"

for pattern in "${exclude_patterns[@]}"; do
    find_command+=" ! -name \"$pattern\""
done

if [ -f cpp2_files.txt ]; then
    echo "Aborting: 'cpp2_files.txt' already exists"
    exit 1
fi

# find_command="$find_command -exec sh -c 'tree-sitter parse -q "\$1" || exit 255' _ {} \;"
echo "Command: " $find_command
eval $find_command > cpp2_files.txt

while IFS= read -r file; do
    echo "Parsing '$file'"
    tree-sitter parse -q "$file"
done < cpp2_files.txt

rm cpp2_files.txt

echo "Done"

# Usage: ./test_on_cpp2_files.sh /path/to/directory
