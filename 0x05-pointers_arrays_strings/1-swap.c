#include "main.h"

/**
 * swap_int - swaps integers
 *
 * @a: first int
 * @b: second int
 *
 * Return: Always 0 (success)
 */

void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;

	*a = *b;
	*b = swp;
}
