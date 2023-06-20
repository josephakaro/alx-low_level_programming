#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description 'X10 alphabet from a-z'
 *
 * Return: always 0 (success)
 */

void print_alphabet_x10(void)
{
	int l = 0;

	while (l <= 9)
	{
		int n;

		for (n = 97; n <= 122; n++)
		{
			_putchar(n);
		}

		l++;
		_putchar('\n');
	}
}
