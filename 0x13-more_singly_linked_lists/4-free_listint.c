#include "lists.h"

/**
 * free_listint - frees the list.
 *
 * @head: head of a list.
 *
 * Return: void value.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
