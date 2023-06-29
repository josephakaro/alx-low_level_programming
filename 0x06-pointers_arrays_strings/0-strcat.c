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
	int i, d;

	i = 0;

	while (dest[i] != '\0')
		i++;

		for (d = 0; src[d] != '\0'; d++)
		{

			dest[i] = src[d];
			i++;
		}

	dest[i] = '\0';

	return (dest);
}
