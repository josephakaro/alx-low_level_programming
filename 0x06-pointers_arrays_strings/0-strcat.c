#include "main.h"

/**
 * _strcat - This function appends the src string to the dest string...
 *
 * @src: string to be appended.
 * @dast: string to get appended to.
 *
 * Return: dast
 */

char *_strcat(char *dest, char *src)
{
	int i, d;

	for (i = 0; dast[i] != '\0'; i++)
	{
		d = 0;

		while (src[d] != '\0')
		{
			
			dast[i] = src[d];
			i++;
			d++;

		}
	}

	dast[i] = '\0';

	return (dast);
}
