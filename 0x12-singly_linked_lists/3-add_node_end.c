#include <stdio.h>
#include <string>
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
		list_t *next_node;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	next_node = malloc(sizeof(list_t));
	if (!next_node)
		return (NULL);

	next_node->str = strdup(str);
	next_node->len = len;
	next_node->next = NULL;

	if (*head == NULL)
	{
		*head = next_node;
		return (next_node);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = next_node;

	return (next_node);	
}