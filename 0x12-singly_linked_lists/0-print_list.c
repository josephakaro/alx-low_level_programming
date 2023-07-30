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
	size_t nod;

	for (h; h != NULL; nod++)
	{
		if (!h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", node->len, node->str);
		h = h->next;
	}

	return (nod);
}
