#include "main.h"

/**
 * _sqrt_recursion - Function to return the natural square root of a number
 *
 * @n: nth number.
 *
 * Return: Always 1, -1 otherwise
 */

int _sqrt_recursion(int n)
{
	int i;

	if (i * n < 0)
	{
		return (-1);
	}
	else if (i * n == 0)
	{
		return (i);
	}
	return (_sqrt_recursion(n, 0));
}
