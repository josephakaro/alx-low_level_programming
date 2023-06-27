#include "main.h"

/**
 * print_rev - reverse print a string
 *
 * @s: string to print
 *
 * Return: Always 0 (success)
 */

void print_rev(char *s)
{
	int r, i, length;

	r = 0;

	while (s[r] != '\0')
	{
		r++;
	}

	length = r;

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
