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

	if (n < 0)
	{
		return (-1);
	}
	return (sqrt_recursion(n, 0));
}

/**
 * sqrt_recursion - recurse to find natural number of n
 *
 * @n: nth number
 * @i: number of iteration
 *
 * Return the square root
 */

int sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_recursion(n, i + 1));
}
