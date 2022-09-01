#include "lists.h"

/**
 * sum_dlistint - Return Sum of nodes of a linked list
 *
 * @head: head of a linked list
 *
 * Return: int
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current)
	{
		sum += current->n;

		current = current->next;
	}

	return (sum);
}
