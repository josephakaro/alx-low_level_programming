#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 *
 * @head: head of a singly linked list.
 *
 * Return: pointer to the first node.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *pointer;
	listint_t *nod;

	pointer = NULL;
	nod = NULL;

	while (*head != NULL)
	{
		nod = (*head)->next;
		(*head)->next = pointer;
		pointer = *head;
		*head = nod;
	}

	*head = pointer;
	return (*head);
}
