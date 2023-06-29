#include "main.h"

/**
 * _strncat - similar to strcat but uses n bytes from src.
 *
 * @dest: string 1
 * @src: string 2
 * @n: nth byte to be used
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, s;

	i = 0;
	s = 0;

	while (dest[i] != '\0')
		i++;

	while (src[s] != '\0' && s < n)
	{
		dest[i] = src[s];
		s++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
