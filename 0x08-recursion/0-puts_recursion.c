#include "main.h"

/**
 * _puts_recursion - a recursive unction that prints a string and new line
 *
 * @s: string to be printed
 *
 * Return: A string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_ptuchar(*s);
	_puts_recursion(s + 1);
}
