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

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	new_node->next = *head;
	(*head) = new_node;

	return (new_node);
}
