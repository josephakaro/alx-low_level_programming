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
	int j = '0';

	while (j <= '9')
	{
		putchar(j);
		while (j != '9')
		{
			putchar(',');
			putchar(' ');
			break;
		}
		j++;
	}
	putchar('\n');
	return (0);
}
