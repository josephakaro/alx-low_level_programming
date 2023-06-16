#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Reverse printing of alphabets'
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
