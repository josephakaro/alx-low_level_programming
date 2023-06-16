#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Prints all digit less than 10'
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	};
	putchar('\n');
	return (0);
}
