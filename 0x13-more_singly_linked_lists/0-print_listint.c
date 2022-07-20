#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints the nodes of a linked list
 *
 * @h: singly linked list
 *
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);

		h = h->next;
		nodes++;
	}

	return (nodes);
}
