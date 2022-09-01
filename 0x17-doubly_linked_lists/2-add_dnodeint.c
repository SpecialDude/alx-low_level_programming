#include "lists.h"

/**
 * add_dnodeint - Add a new node at the head of list
 *
 * @head: Doubly linked head
 * @n: Node data
 *
 * Return: dlistint_t*
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;

	new_node->next = *head;
	(*head) = new_node;

	return (new_node);
}
