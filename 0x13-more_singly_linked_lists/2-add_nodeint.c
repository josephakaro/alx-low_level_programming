#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning
 *
 * @head: head of a list.
 * @n: number of the element.
 *
 * Return: address of the new element. NUll otherwise.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *go;

	go = malloc(sizeof(listint_t));

	if (go == NULL)
		return (NULL);

	go->n = n;
	go->next = *head;
	*head = go;

	return (*head);
}
