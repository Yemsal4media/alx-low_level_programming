#!/bin/bash

# this script creates a static library 'liball.a' from all the .c files
# in the current directory

gcc -c *.c
ar rc liball.a *.o
echo y | rm -I *.o

