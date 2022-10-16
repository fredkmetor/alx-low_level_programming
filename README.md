0x00-hello_wrold.C is my first C project as a ALX student

Learning Objectives

General

-Why C programming is awesome
-Who invented C
-Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
-What happens when you type gcc main.c
-What is an entry point
-What is main
-How to print text using printf, puts and putchar
-How to get the size of a specific type using the unary operator sizeof
-How to compile using gcc
-What is the default program name when compiling with gcc
-What is the official C coding style and how to check your code with betty-style
-How to find the right header to include in your source code when using a standard library function
-How does the main function influence the return value of the program

Shell Scripts

-Allowed editors: vi, vim, emacs
-All your scripts will be tested on Ubuntu 20.04 LTS
-All your scripts should be exactly two lines long ($ wc -l file should print 2)
-All your files should end with a new line
-The first line of all your files should be exactly #!/bin/bash

Betty linter
To run the Betty linter just with command betty <filename>:

-Go to the Betty repository
-Clone the repo to your local machine
-cd into the Betty directory
-Install the linter with sudo ./install.sh
-emacs or vi a new file called betty, and copy the script below:

/ #!/bin/bash
/ # Simply a wrapper script to keep you from having to use betty-style
/ # and betty-doc separately on every item.
/ # Originally by Tim Britton (@wintermanc3r), multiargument added by
/ # Larry Madeo (@hillmonkey)

BIN_PATH="/usr/local/bin"
BETTY/_STYLE="betty-style"
BETTY_DOC="betty-doc"

if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
fi

for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
done

-Once saved, exit file and change permissions to apply to all users with chmod a+x betty
-Move the betty file into /bin/ directory or somewhere else in your $PATH with sudo mv betty /bin/
-You can now type betty <filename> to run the Betty linter!


