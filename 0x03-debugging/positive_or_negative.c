#include <stdio.h>

/**
 * positive_or_negative - validates number n
 *
 * @n: target number.
 *
 * Return: 1 and 0 otherwise
 */

void positive_or_negative(int i)
{
	if (i >= 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else if (i <= 0)
	{
		printf("%d is negative\n", i);
	}
}
