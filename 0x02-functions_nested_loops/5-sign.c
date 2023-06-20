#include "main.h"

/**
 * print_sign - Entry point
 *
 * Description: prints - and + when n less or greater
 *
 * @n: parameter checks
 *
 *Return: Always 0 (success)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar(45);
	}

	return (-1);
}
