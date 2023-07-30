#include "lists.h"

/**
 * add_node - adds a new node at the beginning.
 *
 * @head: head
 * @str: string
 *
 * Return: New Address, Null otherwise.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nxt;
	size_t nod;

	nxt = malloc(sizeof(list_t));
	if (nxt == NULL)
		return (NULL);

	nxt->str = strdup(str);

	for (nod = 0; str[nod]; nod++)
		;

	nxt->len = nod;
	nxt->next = *head;
	*head = nxt;

	return (*head);
}
