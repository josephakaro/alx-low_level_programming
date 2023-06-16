#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Program to print alphabets [a-z] in lowercases'
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
