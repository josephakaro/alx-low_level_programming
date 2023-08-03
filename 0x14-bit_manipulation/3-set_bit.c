#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 *
 * @n: pointer of long int input.
 * @index: bit index.
 *
 * Return: 1 on success, -1 otherwise.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int get;

	if (index > 63)
		return (-1);

	get = 1 << index;
	*n = (*n | get);

	return (1);
}
