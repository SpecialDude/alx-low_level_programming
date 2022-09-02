#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete node at index
 *
 * @head: head of doubly linked list
 * @index: index to delete
 *
 * Return: int
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int c = 0;
	dlistint_t *at_node;

	if (!head || !(*head))
		return (-1);

	at_node = *head;

	if (index == 0)
	{
		if (at_node->next)
			at_node->next->prev = NULL;
		(*head) = at_node->next;
	}
	else
	{
		while (at_node)
		{
			if (c == index)
				break;
			at_node = at_node->next;
			c++;
		}

		if (!at_node)
			return (-1);

		if (at_node->next)
			at_node->next->prev = at_node->prev;

		at_node->prev->next = at_node->next;
	}

	free(at_node);
	return (1);
}
