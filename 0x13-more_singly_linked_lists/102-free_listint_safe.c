#include "lists.h"

/**
 * free_listp2 - frees a linked list
 *
 * @head: head of a list.
 *
 * Return: no return.
 */

void free_listp2(listp_t **head)
{
	listp_t *tmp;
	listp_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((tmp = current) != NULL)
		{
			current = current->next;
			free(tmp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a linked list.
 *
 * @h: head of a list.
 *
 * Return: size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t nod = 0;
	listp_t *to, *first, *sum;
	listint_t *current;

	to = NULL;
	while (*h != NULL)
	{
		first = malloc(sizeof(listp_t));

		if (first == NULL)
			exit(98);

		first->p = (void *)*h;
		first->next = to;
		to = first;

		sum = to;

		while (sum->next != NULL)
		{
			sum = sum->next;
			if (*h == sum->p)
			{
				*h = NULL;
				free_listp2(&to);
				return (nod);
			}
		}

		current = *h;
		*h = (*h)->next;
		free(current);
		nod++;
	}

	*h = NULL;
	free_listp2(&to);
	return (nod);
}
