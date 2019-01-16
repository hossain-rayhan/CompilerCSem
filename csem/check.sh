#!/bin/bash
#
# COSC 461 - Programming Assignment 4: Checker Script (Cached)
#
# Description:
#     Checks if ./csem matches with ./ref_csem via cached answers stored in
#     the "gradescript/output/" directory. You need "./csem" but not
#     "./ref_csem", as its results are cached in the output directory. Run
#     "./check.sh" while it has the "x" permission (which you can get via
#     "chmod +x check.sh"). It'll tell you if it does not match the solution
#     code, and pop up a vimdiff showing you what is wrong.
#
# Synopsis:
#     ./check.sh c_file
#
# Author:
#     Clara Van Nguyen
#

if [[ $# -ne 1 ]]; then
	printf "Usage: %s txt_file\n" "$0"
	exit -1
fi

cp $(sed -e 's/input/output/;' <<< $1) "__output1.txt"
./csem < "$1" > "__output2.txt"

diff "__output1.txt" "__output2.txt" 2> /dev/null > /dev/null
if [[ $? -ne 0 ]]; then
	x='';
	while [[ "$x" -ne 'y' && "$x" -ne 'N' ]]; do
		printf "Does not match! Would you like to see a diff -y? [y/N]"
		read -n x
	done;

	if [[ "$x" -eq 'y' ]]; then
		#diff -y "__output1.l" "__output2.l" | less
		vimdiff "__output1.txt" "__output2.txt"
	fi
	

else
	printf "Matches!\n"
fi

rm -rf "__output1.txt" "__output2.txt"
