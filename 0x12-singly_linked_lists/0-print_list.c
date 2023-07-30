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
	nod = 0;

	while(h != NULL)
	{
		if (!h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nod++;
	}

	return (nod);
}
