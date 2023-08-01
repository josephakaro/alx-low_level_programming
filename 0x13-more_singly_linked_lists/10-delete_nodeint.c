#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index.
 *
 * @head: head of a list.
 * @index: index of the list where the node is
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *end;
	listint_t *next;

	end = *head;

	if (index != 0)
	{
		for (count = 0; count < index - 1 && end != NULL; count++)
		{
			end = end->next;
		}
	}

	if (end == NULL || (end->next == NULL && index != 0))
	{
		return (-1);
	}

	next = end->next;

	if (index != 0)
	{
		end->next = next->next;
		free(next);
	}
	else
	{
		free(end);
		*head = next;
	}

	return (1);
}
