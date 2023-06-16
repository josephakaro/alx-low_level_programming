#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: 'Prints out Random no. and checks for equality'
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int last, n;
	char *l, *i, *g, *eq, *lst;

	l = "Last digit of";
	i = " is ";
	g = "and is greater than 5";
	eq = "and is 0";
	lst = "and is less than 6 and not 0";
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	if (last > 5)
	{
		printf("%s %d %s %d %s\n", l, n, i, last, g);
	}
	else if (last == 0)
	{
		printf("%s %d %s %d %s\n", l, n, i, last, eq);
	}
	else if (!0 && last < 6)
	{
		printf("%s %d %s %d %s\n", l, n, i, last, lst);
	}
	return (0);
}
