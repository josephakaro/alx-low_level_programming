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
	if (n == 1)
	{
		return (1);
	}
	else if (n == 0)
	{
		fact = n * factorial(n - 1);

		return (fact);
	}
}
