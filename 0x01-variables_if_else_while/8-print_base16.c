#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints Hexadecimal
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n = 0;
	char l = 'a';

	while (n <= 9)
	{
		putchar('0' + n);
		n++;
	}
	while (l <= 'f')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
