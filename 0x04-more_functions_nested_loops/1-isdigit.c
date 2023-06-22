#include "main.h"

/**
 * _isdigit - Entry point
 *
 * Description: checks for digit.
 *
 * @c: Search for digit from 0 to 9
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
