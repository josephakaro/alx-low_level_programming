#include "variadic_functions.h"

/**
 * print_all - A function that prints anything
 *
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *gap = "";

	va_list lst;

	va_start(lst, format);

	if (format)
	{
		while (format[i])
		{
			while (format[i])
			{
				case 'c':
					printf("%s%c", gap, va_arg(lst, int));
					break;
				case 'i':
					printf("%s%d", gap, va_arg(lst, int));
					break;
				case 'f':
					printf("%s%f", gap, va_arg(lst, double));
					break;
				case 's':
					str = va_arg(lst, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", gap, str);
					break;
				default:
					i++;
					continue;
			}
			gap = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(lst);
}
