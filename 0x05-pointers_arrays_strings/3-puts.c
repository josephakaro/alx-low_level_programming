#include "main.h"

/**
 * _puts - function that prints string
 *
 * @str: string to print
 *
 * Return: Always 0 (success)
 */

void _puts(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);

		i++;
	}
	_putchar('\n');
}
