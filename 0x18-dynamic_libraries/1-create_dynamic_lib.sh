#!/bin/bash
gcc -c -Wall -Werror -pedantic -Wextra -fPIC *.c
gcc -Wall -Werror -pedantic -Wextra -shared -o liball.so *.o