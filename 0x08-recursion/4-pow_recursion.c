#include "main.h"

/**
 * _pow_recursion - function tha returns the value of x to the power of y
 *
 * @x: base integer
 * @y: power integer
 *
 * Return: -1 if y is lower than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if ( y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
