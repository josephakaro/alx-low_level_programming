#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* More Header files goes here */

/**
 * main - Entry point
 *
 * Description: 'Prints numbers from 0 to 10'
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int j = 0;

	while (j <= 9)
	{
		putchar('0' + j);
		j++;
	}
	putchar('\n');
	return (0);
}
