#include "lists.h"

/**
 * sum_listint - Sum up nodes of a linked list
 *
 * @head: Head of a linked list
 *
 * Return: int
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
	}

	return (sum);
}
