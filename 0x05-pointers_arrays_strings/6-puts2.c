#include "main.h"

/**
 * puts2 - prints one char out of 2.
 *
 * @str: string to print the chars from
 */

void puts2(char *str)
{
	int len, n;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (n = 0; n < len; n += 2)
	{
		_putchar(str[n]);
	}

	_putchar('\n');
}
