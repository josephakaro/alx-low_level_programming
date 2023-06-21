#include <stdio.h>

/**
 * print_to_98 - Entry point
 *
 * Description: 'Print all natural numbers on screen'
 *
 * @n: input number
 *
 * Return: none
 */

void print_to_98(int n)
{
	int n;

	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	else if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	printf("%d\n", n);
}
