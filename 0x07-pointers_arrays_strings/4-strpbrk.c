#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - searches a string for any of a set of bytes
 *
 * @s: string to search
 * @accept: stringcontaining the bytes to look for
 *
 * Return: NULL otherwise
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
