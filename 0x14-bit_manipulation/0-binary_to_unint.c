#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 * @b: binary numbers.
 *
 * Return: unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int u;
	int l, base;

	if (!b)
		return (0);

	u = 0;

	for (l = 0; b[l] != '\0'; l++)
		;

	for (l--, base = 1; l >= 0; l--, base *= 2)
	{
		if (b[l] != '0' && b[l] != '1')
		{
			return (0);
		}

		if (b[l] & 1)
		{
			u += base;
		}
	}

	return (u);
}