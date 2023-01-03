#include "lists.h"

/**
 * get_dnodeint_at_index - Get the dnodeint at index
 *
 * @head: Double linked list head
 * @index: Well, index
 *
 * Return: dlistint_t*
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int idx = 0;

	current = head;

	while (current)
	{
		if (index == idx)
			return (current);

		current = current->next;
		idx++;
	}

	return (NULL);
}
