#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string
 *
 * @s: string to modify
 *
 * Return: the resulting string
 */

char *string_toupper(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
	}

	return (s);
}
