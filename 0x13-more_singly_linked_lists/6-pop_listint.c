#include "lists.h"

/**
 * pop_listint - deletes the head node.
 *
 * @head: head of a list.
 *
 * Return: head node's data.
 */

int pop_listint(listint_t **head)
{
	int nod;
	listint_t *first;
	listint_t *this;

	if (*head == NULL)
		return (0);

	this = *head;

	nod = this->n;

	first = this->next;

	free(this);

	*head = first;

	return (nod);
}
