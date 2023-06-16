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
	for (int v = 0; v <= 9; v++)
	{
		putchar('0' + v);
	};
	putchar('\n');
	return (0);
}
