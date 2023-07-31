#include "lists.h"

/**
 * print_listint - prints all the elements of a list.
 *
 * @h: head of a list.
 *
 * Return: Series of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t nod = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;

		nod = nod + 1;
	}

	return (nod);

}