#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all possible combination of digits
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 0;

	while(i <= 9)
	{
		putchar(' ');
		putchar(',');
		putchar('0' + i);
		i++;
	}
	putchar('\n');
	return (0);
}
