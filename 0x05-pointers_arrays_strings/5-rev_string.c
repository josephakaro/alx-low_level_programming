#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string to reverse
 *
 * Return: Always 0 (success)
 */

void rev_string(char *s)
{
	char sw;
	int n, l1, l2;

	l1 = 0;
	l2 = 0;

	while (s[l1] != '\0')
	{
		l1++;
	}

	l2 = l1 - 1;

	for (n = 0; n < l2 / 2; n++)
	{
		sw = s[n];
		s[n] = s[l2];
		s[l2--] = sw;
	}
}
