#include "lists.h"

/**
 * dlistint_len - Returns number of nodes in a linked list
 *
 * @h: Head of the list
 *
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int n = 0;

	while (current)
	{
		current = current->next;
		n++;
	}

	return (n);
}
