#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'A program to print bothlower and uppercase alphabets'
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char up, low;

	for (low = 'a'; low <= 'z'; ++low)
	{
		putchar(low);
	};
	for (up = 'A'; up <= 'Z'; ++up)
	{
		putchar(up);
	};
	putchar('\n');
	return (0);
}
