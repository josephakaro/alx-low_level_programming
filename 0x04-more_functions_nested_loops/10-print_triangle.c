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
		_putchar(10);
	}
	else
	{
		int k, l;

		for (k = 1; k <= size; k++)
		{
			l = k;

			while (l < size)
			{
				_putchar(8);
				l++;
			}

			l = 1;

			while (l <= k)
			{
				_putchar(35);
				l++;
			}
			_putchar(10);
		}
	}
}
