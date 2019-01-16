#!/bin/bash
#
# COSC 461 - Homework Packager
#
# Description:
#     Makes my life easier and packages up the files for me with a single
#     command... also helps prevent fuckups like deleting source code.
#     
#     Will make "pkg/master.tar.gz". And it will remove it first if it
#     already exists. For gradescripted homeworks, it will also make a
#     "pkg/gradescript.tar.xz".
# 
# Author:
#     Clara Van Nguyen
#

red=$(tput setaf 1)
green=$(tput setaf 2)
normal=$(tput sgr0)

function check_error {
	if [ $? -ne 0 ]; then
		printf "[${red}FAILED${normal}]\n"
		cat "__err"
		rm "__err"
		exit $?
	fi
	printf "[  ${green}OK${normal}  ]\n"
}

printf "COSC 461 PA4 Packager\n\n"

# Forcibly remove the file (even if it doesn't exist!)
printf "%-48s" "(1/5) Checking if *.tar.gz already exists."
rm -f "pkg/*.tar."{gz,xz}
printf "[  ${green}OK${normal}  ]\n"

# Copy the PDF documentation over
printf "%-48s" "(2/5) Copying files to working_directory."
cp "doc/pdf/csem.pdf" . 2> "__err"
check_error

# Tar that shit up
printf "%-48s" "(3/5) Creating Master TAR."
tar -czf "pkg/master.tar.gz" \
	"csem.pdf" "Makefile" "csem" "ref_csem" *".sh" *"."{c,y,h} "input" \
	"gradescript" "cn_gen" "sample" 2> "__err"
check_error

# Tar gradescripts individually too
printf "%-48s" "(4/5) Creating Gradescript TAR."
tar -cJf "pkg/gradescript.tar.xz" \
	*".sh" "cn_gen" "gradescript/input/"*".c" "gradescript/output" 2> "__err"
check_error

# Clean Up
printf "%-48s" "(5/5) Cleaning up."
rm -f "csem.pdf" "__err"
printf "[  ${green}OK${normal}  ]\n"

# Have a nice day
printf "\nDone! Please go to \"pkg/\" to see your files! :)\n"
