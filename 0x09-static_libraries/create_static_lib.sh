#!/bin/bash

# Compile all the .c files into object files
gcc -c *.c

# Create the static library
ar -rc liball.a *.o

# Display the contents of the library
ar -t liball.a

