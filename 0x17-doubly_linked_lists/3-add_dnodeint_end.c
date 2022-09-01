#include "lists.h"

/**
 * add_dnodeint_end - Add a node at the end of list
 *
 * @head: Doubly Linked List
 * @n: Data for new node
 *
 * Return: dlistint_t*
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end_node, *new_node;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		end_node = *head;

		while (end_node->next)
			end_node = end_node->next;

		end_node->next = new_node;
		new_node->prev = end_node;
	}

	return (new_node);
}
