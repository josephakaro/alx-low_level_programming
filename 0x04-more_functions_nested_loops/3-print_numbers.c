#include "main.h"

/**
 * print_numbers - prints int from 0 to 9
 *
 * Return: Always 0 (success)
 */
void print_numbers(void)
{
	int c;

	while (c >= 48 && c <= 57)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}

