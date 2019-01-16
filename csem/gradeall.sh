#!/bin/bash
#
# Clara Nguyen-styled gradescripts
# COSC461_FA17, PA4
#
# Description:
#     This will compare the output of the user's program with the cached output
#     straight from the solution executable. If it matches "exactly", it is
#     marked as "PASSED". Otherwise, it will mark the test case as "FAILED".
#     You may view the test case inputs and outputs inside of the "gradescript"
#     directory.
#
# Author:
#     Clara Van Nguyen
#

# Set up our colours
red=$(tput setaf 1)
green=$(tput setaf 2)
normal=$(tput sgr 0)

# Check if solution executable exists
#sol_exec="ref_calc"
#if [ ! -e "$sol_exec" ]; then
#	printf "[${red}FATAL${normal}] Missing \"$sol_exec\".\n"
#	exit 2
#fi

# Parametre
exec="csem"

# Check if user executable exists
if [ ! -e "$exec" ]; then
	printf "[${red}FATAL${normal}] Missing \"$exec\".\n"
	exit 3
fi

# Get the number of gradescript cases
num=0
for i in "gradescript/input/"*".c"; do
	let "num++"
done

# Get number of digits
s=$(echo "$num" | grep -o "[0-9]" | grep -c "")

# Iterate through and compare
correct=0
c=0

for i in "gradescript/input/"*".c"; do
	fname=$(printf "%03d.c" $c)
	let "c++"

	# Get the name of the test case
	scrname=$(cat "$i" | head -n 2 | tail -n 1 | cut -c 4- | sed 's/ (\(.*Brutal\))//')

	# str=$(printf "(%*d/%*d) Checking \"%s\"..." $s $c $s $num $fname)
	str=$(printf "(%*d/%*d) Check %s \"%s\"..." $s $c $s $num $fname "$scrname")
	printf "%-72s" "$str"

	# Run in an isolated instance of bash (catches segfaults and other errors)
	bash -c "./$exec < \"$i\" > __output.c 2> __eoutput.c" > /dev/null 2> /dev/null

	diff "__output.c" "gradescript/output/$fname" 2> /dev/null > /dev/null
	if [ $? -ne 0 ]; then
		printf "[${red}FAILED${normal}]\n"

		# Uncomment if you want to be pissed off
		#vimdiff "__output.c" "gradescript/output/$fname"
	else
		printf "[${green}PASSED${normal}]\n"
		let "correct++"
	fi
done

# Clean up
rm "__output.c" "__eoutput.c"

# Show results
printf "%s out of %s correct.\n" "$correct" "$num"
exit $correct
