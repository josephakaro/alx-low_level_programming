#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements in a linked list
 *
 * @h: pointer to the list_t list to print
 *
 * Return: Nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t nod = 0;
	
	while(h)node = h; node; node = node->next)
	{
		if (!node->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", node->len, node->str);
		nod++;
	}

	return (nod);
}
