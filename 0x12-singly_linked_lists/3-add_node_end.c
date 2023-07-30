#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 *
 * @head: head.
 * @str: string
 *
 * Return: New Address, NULL otherwise
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nxt, *tmp;
	size_t nod;

	nxt = malloc(sizeof(list_t));
	if (nxt == NULL)
		return (NULL);

	nxt->str = strdup(str);

	for (nod = 0; str[nod]; nod++)
		;

	nxt->len = nod;
	nxt->next = NULL;
	tmp = *head;

	if (tmp == NULL)
	{
		*head = nxt;
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = nxt;
	}

	return (*head);
}
