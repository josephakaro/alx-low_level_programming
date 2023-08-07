# General
- Allowed editors: ``vi``, ``vim``, ``emacs``
- All your files will be compiled on ``Ubuntu 20.04 LTS`` using ``gcc``, using the options ``-Wall -Werror -Wextra -pedantic -std=gnu89``
- All your files should end with a new line
- A ``README.md`` file, at the root of the folder of the project is mandatory
- Your code should use the ``Betty style``. It will be checked using ``betty-style.pl`` and ``betty-doc.pl``
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are ``malloc``, ``free`` and ``exit``. Any use of functions like ``printf``, ``puts``, ``calloc``, ``realloc`` etc… is forbidden
- Allowed syscalls: ``read``, ``write``, ``open``, ``close``
- You are allowed to use [``_putchar``](https://github.com/alx-tools/_putchar.c/blob/master/_putchar.c)
- You don’t have to push ``_putchar.c``, we will use our file. If you do it won’t be taken into account
- In the following examples, the ``main.c`` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own ``main.c`` files at compilation. Our ``main.c`` files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function ``_putchar`` should be included in your header file called ``main.h``
- Don’t forget to push your header file
- All your header files should be include guarded
- Tip: always prefer using symbolic constants (``POSIX``) vs numbers when it makes sense. For instance read``(STDIN_FILENO, ... vs read(0, ...``


# Tasks

## Tread lightly, she is near

### Write a function that reads a text file and prints it to the POSIX standard output.
- Prototype: ``ssize_t read_textfile(const char *filename, size_t letters);``
- where letters is the number of letters it should read and print
- returns the actual number of letters it could read and print
- if the file can not be ``opened`` or ``read``, ``return 0``
- if ``filename`` is ``NULL`` ``return 0``
- if ``write`` fails or does not write the expected amount of bytes, ``return 0``

## Steps:
```c
    
```