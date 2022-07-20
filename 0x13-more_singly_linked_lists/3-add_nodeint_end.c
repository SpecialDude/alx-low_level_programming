#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Add new node at the end of linked list
 *
 * @head: Head of the linked list
 * @n: interger
 *
 * Return: listint_t*
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *ptr = *head;

	newnode = malloc(sizeof(listint_t));

	if (!newnode)
		return NULL;

	newnode->n = n;

	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (ptr->next)
		ptr = ptr->next;

	ptr->next = newnode;

	return (newnode);
}