#include "variadic_functions.h"

/**
 * sum_them_all - Add the sum of all parameters
 *
 * @n: Parameter to check
 *
 * Return: Sum, if n == 0 return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list li;

	va_start(li, n);

	for (i = 0; i < n; i++)
		sum += va_arg(li, int);

	va_end(li);

	return (sum);
}
