#include "lists.h"

/**
 * free_listp - frees a singly linked list
 *
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listp(listp_t **head)
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
 * print_listint_safe - prints a linked list.
 *
 * @head: head of a list.
 *
 * Return: number of nodes in the linked list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nod = 0;
	listp_t *to, *first, *sum;

	to = NULL;
	while (head != NULL)
	{
		first = malloc(sizeof(listp_t));

		if (first == NULL)
			exit(98);

		first->p = (void *)head;
		first->next = to;
		to = first;

		sum = to;

		while (sum->next != NULL)
		{
			sum = sum->next;
			if (head == sum->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&to);
				return (nod);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nod++;
	}

	free_listp(&to);
	return (nod);
}
