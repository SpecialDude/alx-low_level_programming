#include "lists.h"

/**
 * listint_len - Returns the number of nodes in a linked list
 *
 * @h: singly linked list
 *
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
