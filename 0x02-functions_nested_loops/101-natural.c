#include <stdio.h>

/**
 * main - Entry point
 *
 * Decription: Prints natural int < 1024
 *
 * Return: Always 0.
 */

int main(void)
{
	int x, y;

	for (x = 1; x < 1024; x++)
	{
		if ((x % 3) == 0 || (x % 5) == 0)
			y += x;
	}
	printf("%d\n", y);
	return (0);
}
