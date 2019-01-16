#!/bin/bash
#
# Command Crop
#
# Description:
#     Generates function requirements for each script via a variation of my
#     solution that prints out function names in the following format:
#     **[function_name] (block_num)
#
# Example Input:
#     **[backpatch] (2)
#     **[m] (2)
#     **[n] (2)
#
# Example Output:
#     backpatch, m, n
#
# Author:
#     Clara Nguyen
#

for FILE in "../gradescript/input/"*".c"; do
	# Generate Functions that are used in the program
	func_name=$(
		./csem < "$FILE" \
			| sed -ne 's/^\*\*\[\(.*\)\].*$/\1/p' \
			| sort \
			| uniq \
			| sed 's/ *$//' \
			| tr '\n' ',' \
			| tr '[:upper:]' '[:lower:]' \
			| sed -e 's/,/, /g' -e 's/, $/\n/g'
	)
	
	exfile="../gradescript/input/post/${FILE##*/}"

	# Redundant remove call.
	rm -f "$exfile"

	# Write new file with "Required Functions:" injected at the top
	cat $FILE | head -n 2 > "$exfile"
	printf " *\n * Required Functions:\n *     " >> "$exfile"
	echo $func_name >> "$exfile"
	cat $FILE | tail -n +3 >> "$exfile"
done
