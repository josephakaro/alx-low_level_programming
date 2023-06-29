#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: string 1
 * @src: source
 * @n: number of bytes to copy
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int s;

	s = 0;

	while (src[s] != '\0' && s < n)
	{
		dest[s] = src[s];
		s++;
	}

	while (s < n)
	{
		dest[s] = '\0';
		s++;
	}

	return (dest);
}
