#include "main.h"

/**
 * flip_bits - returns the number of bits to flip.
 *
 * @n: first bit.
 * @m: second bit.
 *
 * Return: number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bit;

	for (bit = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			bit = bit + 1;
	}

	return (bit);
}
