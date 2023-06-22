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
	for (c = 97; c <= 122; c++)
	{
		while (c <= 122)
		{
			if (c >= 65 &&  c <= 90)
			{	
				_putchar(65);
				_putchar(58);
				return (1);
			}
			else if (c >= 97 && c <= 122)
			{
				_putchar(97);
				_putchar(58);
				return (0);
			}
			c++;
		}
		_putchar('\n');
	}
}
