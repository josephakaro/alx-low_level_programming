#include "main.h"

/**
 * print_line - Entry point
 *
 * Description: Draw a straight line in the terminal
 *
 * @n: nth number of '_' to print
 *
 * Return: Always 0 (success)
 */
void print_line(int n)
{
	if (n <= 0)
	{
		 _putchar('\n');
	} 
	else
	{
	
		int i;
		
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
