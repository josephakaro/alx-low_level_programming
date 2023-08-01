#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end
 *
 * @head: head of the linked list.
 * @n: n element.
 *
 * Return: address of the new element. NUll otherwise.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *first;
	listint_t *tmp;

	(void)tmp;

	first = malloc(sizeof(listint_t));

	if (first == NULL)
		return (NULL);

	first->n = n;
	first->next = NULL;
	tmp = *head;
	if (*head == NULL)
	{
		*head = first;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = first;
	}

	return (*head);
}
