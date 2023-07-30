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
	list_t *n;
	unsigned int len = 0;

	while (str[len])
		len++;

	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);

	n->str = strdup(str);
	n->len = len;
	n->next = (*head);
	(*head) = n;

	return (*head);
}
