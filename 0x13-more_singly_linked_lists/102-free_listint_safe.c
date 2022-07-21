#include "lists.h"

/**
 * free_listint_safe - Frees a linked list safely
 *
 * @h: head of the singly linked lists
 *
 * Return: size_t
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodes = 0;
	int d;
	listint_t *ptr;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		d = *h - (*h)->next;
		nodes++;
		if (d > 0)
		{
			ptr = (*h)->next;
			free(*h);
			*h = ptr;
		}
		else
		{
			free(*h);
			*h = NULL;
			break;
		}
	}

	*h = NULL;

	return (nodes);
}
