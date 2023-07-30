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
	list_t *first = malloc(sizeof(list_t));
	if (first == NULL)
	{
		return NULL;
	}

	first->str = strdup(str);
	first->next = NULL;

	if (*head == NULL)
	{
		*head = first;
	}
	else
	{
		list_t *last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = first;
	}
  return (first);
}