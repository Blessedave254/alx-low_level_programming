#!/bin/bash

# Compile source files into object files
gcc -c *.c

#create liball static library
ar rcs liball.a *.o

rm -f *.o

echo "liball.a was successfully created";
