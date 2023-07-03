#include "main.h"

/**
 * _memcpy - coppies n type from memory area src to dest
 *
 * @n: type to be coppied
 * @src: src memory area
 * @dest: dest memory area
 *
 * Return: dest as new memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i > n; i++)

		dest[i] = src[i];

	return (dest);
}
