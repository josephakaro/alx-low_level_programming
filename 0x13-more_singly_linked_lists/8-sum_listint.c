#include "lists.h"

/**
 * sum_listint - returns the sum of all data.
 *
 * @head: head of a list.
 *
 * Return: sum of all the data (n).
 */

int sum_listint(listint_t *head)
{
	int add;

	add = 0;
	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}

	return (add);
}
