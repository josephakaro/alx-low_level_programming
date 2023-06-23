#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int f;

	f = 1;

	while (f <= 100)
	{
		if (f % 3 == 0 && f % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (f % 5 == 0 && f % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (f % 3 == 0 && f % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (f == 1)
		{
			printf("%d", f);
		}
		else
		{
			printf(" %d", f);
		}
			f++;
	}
	printf("\n");

	return (0);
}
