#include "function_pointers.h"

/**
 * int_index - Search for an integer
 *
 * @array: Array to search in
 * @size: Size of the array
 * @cmp: Pointer to the comparing function
 *
 * Return: index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
