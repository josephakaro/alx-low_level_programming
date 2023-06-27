#include "main.h"

/**
 * print_rev - reverse print a string
 *
 * @str: string to print
 *
 * Return: Always 0 (success)
 */

void print_rev(char *s);
{
	int r;

	r = 0;

	while (st[r] != '\0')
	{
		_putchar(str[r]);
		
		r--;
	}
	_putchar('\n');
}
