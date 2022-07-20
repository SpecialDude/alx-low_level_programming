#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Adds a new node to linked list
 *
 * @head: head of the linked list
 * @n: integer
 *
 * Return: listint_t*
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
