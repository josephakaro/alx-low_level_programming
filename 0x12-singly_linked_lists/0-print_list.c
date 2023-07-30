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
	size_t i = 0;
	const list_t *n = h;

	while (n != NULL) {
		if (n->str != NULL)
		{
			printf("[%d] %s\n", n->len, n->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
			i++;
			n = n->next;
		}

	return (i);
}