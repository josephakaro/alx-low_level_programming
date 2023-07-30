#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free lists.
 *
 * @head: head list to be freed.
 */
void free_list(list_t *head)
{
	list_t *t;

	while (head)
	{
		t = head->next;
		free(head->str);
		free(head);
		head = t;
	}
}
