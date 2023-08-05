#!/bin/bash
find . -type f -name "*.c"
gcc -c *c
ar rc liball.a *.o
ranlib liball.a
