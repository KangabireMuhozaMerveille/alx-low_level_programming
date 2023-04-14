#!/bin/bash
gcc -c *.c && chmod u+x *.o && ar rcs liball.a *.o
