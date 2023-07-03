#include "main.h"

/**
 * _memset - fills the n bytes pointed by s with constant b.
 *
 * @n: bytes to be filled
 * @s: bytes value
 * @b: constant bytes
 *
 * Return: Always 's' (success), with a new value of 'b'
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
