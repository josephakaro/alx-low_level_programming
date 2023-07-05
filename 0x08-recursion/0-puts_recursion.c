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
	s = _puts_recursion(s);

	_putchar('\n');

	return (s);
}
