#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: 'Prints all Aphabets execpt q and e'
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; ++x)
	{
		if (x != 'e' &&  x != 'q')
		{
			putchar(x);
		};
	};
	putchar('\n');
	return (0);
}
