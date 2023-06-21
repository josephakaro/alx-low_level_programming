#include "main.h"

/**
 * times_table - prints 9 time tables to the console
 *
 * Return: Always 0 (success)
 */

void times_table(void)
{
	int m, n, calc;

	m = 0;

	while (m <= 9)
	{
		_putchar(48);
		for (n = 1; n <= 9; n++)
		{
			calc = m * n;

			_putchar(44);
			_putchar(32);

			if (calc <= 9)
			{
				_putchar(32);
				_putchar(calc + 48);
			}
			else
			{
				_putchar((calc / 10) + 48);
				_putchar((calc % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
