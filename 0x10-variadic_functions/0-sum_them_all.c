#include "variadic_functions.h"

/**
 * int sum_them_all - Add the sum of all parameters
 *
 * @n: Parameter to check
 *
 * Return: Sum, if n == 0 return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int i, sum;

	sum = 0;

	va_list par;
	va_start(par, n);

	if (n == 0)
	{
		return (0);
	}
	else
	{
		i = 0;

		while (i < n)
		{
			int number = va_arg(par, int);
			
			sum += number;
		}
	}
	va_end(par);
	return (sum);
}


