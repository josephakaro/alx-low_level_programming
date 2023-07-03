#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 *
 * @a: square matrix of which we print the sum of diagonals
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int i;

	unsigned int s1, s2;

	s1 = 0;
	s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 += a[(size * i) + i];
		s2 += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", s1, s2);
}
