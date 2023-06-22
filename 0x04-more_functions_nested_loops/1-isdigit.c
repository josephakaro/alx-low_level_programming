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
	for (c = 0; c <= 9; c++)
	{
		if (c == 0 && c <= 9)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
