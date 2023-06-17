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
		putchar('0' + i);
		putchar(',');
		i++;
	}
	putchar('\n');
	return (0);
}
