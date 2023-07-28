#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t freed
 */
void free_list(list_t *head)
{
	list_t *fo;

	while (head)
	{
		fo = head->next;
		free(head->str);
		free(head);
		head = fo;
	}
}
