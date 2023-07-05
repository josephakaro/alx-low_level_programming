#include "main.h"

/**
 * factorial - returns factorial of nth number
 *
 * @n: number of factorial
 *
 * Return: nth factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
