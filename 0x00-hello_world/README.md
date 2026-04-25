# 0x01. C - Variables, if, else, while

## Description

This project introduces basic concepts of the C programming language, including:

- The compilation process (pre-processing, compiling, assembling, linking)
- Writing simple C programs
- Using standard output functions like puts and printf
- Understanding C data types and their sizes

## Files and Tasks

### Scripts

+ 0-preprocessor
  Runs a C file through the preprocessor and saves the result into c.

+ 1-compiler
  Compiles a C file without linking and outputs an object file (.o).

+ 2-assembler
  Generates the assembly code of a C file and saves it with a .s extension.

+ 3-name
  Compiles a C file and creates an executable named cisfun.

+ 100-intel
  Generates assembly code in Intel syntax.

### Programs

+ 4-puts.c
  Prints: "Programming is like building a multilingual puzzle using puts.

+ 5-printf.c
  Prints: with proper grammar, but the outcome is a piece of art, using printf

+ 6-size.c
  Displays the size of various data types on the machine.

+ 101-quote.c
  Prints a quote to standard error without using printf or puts.

 
## Usage

+ Set the C file to be used:

  export CFILE=main.c

+ Run scripts:

  ./0-preprocessor
  ./1-compiler
  ./2-assembler
  ./3-name

+ Compile C programs:
  
  gcc -Wall -Werror -Wextra -pedantic file.c -o output

+ ./output


## Requirements

- Allowed editors: vi, vim, emacs
- Compiled using gcc
- Ubuntu environment
- All files end with a new line

Author

Shalom Alalade
