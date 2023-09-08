#!bin/bash
gcc -wall -pendatic -werror --wextra -c *.c
ar cr liball.a *.o
