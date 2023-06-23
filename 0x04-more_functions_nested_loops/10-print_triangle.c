#include "main.h"

/**
 * print_triangle - Entry point
 *
 * Description: prints a triangle, followed by a new line
 *
 * @size: size of the triangle
 *
 * Return: Always 0 (success)
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int k, l;

		for (k = 1; k <= size; k++)
		{
			l = k;

			while (l < size)
			{
				_putchar(' ');
				l++;
			}

			l = 1;

			while (l <= k)
			{
				_putchar('#');
				l++;
			}
			_putchar('\n');
		}
	}
}
