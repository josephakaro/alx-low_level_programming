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
	int r;

	r = 0;

	while (s[r] != '\0')
	{
		_putchar(s[r]);
		
		r--;
	}
	_putchar('\n');
}
