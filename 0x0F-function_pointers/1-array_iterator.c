#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - iterates through an array
 *
 * @array: Given array to iterate
 * @action: A pointer to the function
 * @size: size of an array
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
	{
		return;
	}
	else if (array || action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
