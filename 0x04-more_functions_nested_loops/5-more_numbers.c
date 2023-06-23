#include "main.h"

/**
 * more_numbers - Entry point
 *
 * Description: prints int from 0 to 14 ten times.
 *
 * Return: Always 0 (success)
 */

void more_numbers(void)
{
	int t;

	t = 0;

	while (t < 10)
	{
		int n = 0;

		while (n <= 14)
		{
			if (n >= 10)
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			n++;
		}
		_putchar('\n');
		t++;
	}
}
