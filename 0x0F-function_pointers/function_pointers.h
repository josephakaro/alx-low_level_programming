#ifndef FUNC_H
#define FUNC_H
#include <stdlib.h>

extern void print_name(char *name, void (*f)(char *));
extern void array_iterator(int *array, size_t size, void (*action)(int));
extern int int_index(int *array, int size, int (*cmp)(int));

#endif
