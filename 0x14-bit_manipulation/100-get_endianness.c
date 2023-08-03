#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 otherwise.
 */

int get_endianness(void)
{
	unsigned int e;
	char *ch;

	e = 1;
	ch = (char *) &e;

	return ((int)*ch);
}
