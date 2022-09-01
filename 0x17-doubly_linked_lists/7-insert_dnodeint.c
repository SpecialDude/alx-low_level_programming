#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert new node at index
 *
 * @h: Head
 * @idx: Insertion index
 * @n: data for new node
 *
 * Return: dlistint_t*
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int c = 0;
	dlistint_t *at_index, *new_node;

	if (!h)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	at_index = *h;
	while (at_index)
	{
		if (c == idx)
			break;

		at_index = at_index->next;
		c++;
	}

	if (!at_index)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;

	new_node->next = at_index;
	new_node->prev = at_index->prev;

	at_index->prev->next = new_node;
	at_index->prev = new_node;

	return (new_node);
}
