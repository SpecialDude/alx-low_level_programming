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
	listint_t *ptr = h;

	while (ptr)
	{
		nodes++;
		ptr = ptr->next;
	}

	return (nodes);
}