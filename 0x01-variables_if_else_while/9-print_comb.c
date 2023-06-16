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
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int k = i * 10 + j;

			putchar(k % 10 + '0');
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
