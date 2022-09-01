#include "lists.h"

/**
 * print_dlistint - Prints a doubly linked list
 *
 * @h: D List Head
 *
 * Return: size_t
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int nodes = 0;

	while (current)
	{
		printf("%d\n", current->n);

		current = current->next;
		nodes++;
	}

	return (nodes);

}
