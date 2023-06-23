#include "main.h"

/**
 * print_diagonal - Entry point
 *
 * @n: number of times the character \ should be printed
 *
 * Return: Always 0 (success)
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int l, m;

		l = 0;

		while (l < n)
		{
			m = 0;

			while (m < n)
			{
				if (m == l)
					_putchar('\\');
				else if (m < l)
					_putchar(' ');
				m++;
			}
			_putchar('\n');
			l++;
		}
	}
}
