#include "variadic_functions.h"

/**
 * print_numbers - prints numbers as parameters
 *
 * @separator: string between parameter
 * @n: number passed into function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list li;

	va_start(li, n);

	for (i = 0; i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(li, int));
		else if (separator && i == 0)
			printf("%d", va_arg(li, int));
		else
			printf("%s%d", separator, va_arg(li, int));
	}

	va_end(li);

	printf("\n");
}
