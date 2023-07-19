#ifndef CALC_H
#define CALC_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct op - Structure operator
 *
 * @op: The operator.
 * @f: The function.
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

extern int op_add(int a, int b);
extern int op_sub(int a, int b);
extern int op_mul(int a, int b);
extern int op_div(int a, int b);
extern int op_mod(int a, int b);
extern int (*get_op_func(char *s))(int, int);

#endif
