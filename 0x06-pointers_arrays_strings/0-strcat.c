#include "main.h"

/**
 * *_strcat - This function appends the src string to the dest string...
 *
 * @src: string to be appended.
 * @dest: string to get appended to.
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, s;

	i = 0;
	s = 0;

	while (dest[i] != '\0')
		i++;

	while (src[s] != '\0')
	{
		dest[i] = src[s];
		s++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
