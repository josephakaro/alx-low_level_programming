#include "lists.h"

/**
 * find_listint_loop - finds the loop in a singly linked list.
 *
 * @head: head of a list.
 *
 * Return: the address of the node where the loop starts.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *pointer;
	listint_t *last;

	pointer = head;
	last = head;
	while (head && pointer && pointer->next)
	{
		head = head->next;
		pointer = pointer->next->next;

		if (head == pointer)
		{
			head = last;
			last =  pointer;
			while (1)
			{
				pointer = last;
				while (pointer->next != head && pointer->next != last)
				{
					pointer = pointer->next;
				}
				if (pointer->next == head)
					break;

				head = head->next;
			}
			return (pointer->next);
		}
	}

	return (NULL);
}
