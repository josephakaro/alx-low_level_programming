#include "main.h"

/**
 * _isupper - checks for an uppercase letter.
 *
 * Description: Checks if c is uppercase letter.
 *
 * @c: character case to check.
 *
 * Return: Always 1 for c is C, 0 otherwise
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
