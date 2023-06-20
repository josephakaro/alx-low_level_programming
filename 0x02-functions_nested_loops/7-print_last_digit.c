#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * @n: target int
 *
 * Return: Always 0 (success)
 */

int print_last_digit(int n)
{
	int m;

	if (n < 0)
		n = -n;

	m = n % 10;

	if (m < 0)
		m = -m;
	_putchar(m + '0');

	return (m);
}
