#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t freed
 */
void free_list(list_t *head)
{
	if (head == NULL)
	{
		return;
	}

	list_t *next = head->next;
	free(head->str);
	free(head);

	free_list(next);
}
