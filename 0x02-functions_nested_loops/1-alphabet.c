#include "main.h"

/**
 * main - Entry point
 *
 * Description: 'print lowercase alphabets'
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	int x;
	
	for (x = 97; x <= 122; x++)
	{
		_putchar(x);
	}

	_putchar('\n');
}
