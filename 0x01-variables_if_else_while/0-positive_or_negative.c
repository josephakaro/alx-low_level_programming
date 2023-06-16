#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: 'This program will assign randon number to n'
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	time_t t;

	srand((unsigned) time(&t));
	n = rand();

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	};
	return (0);
}
