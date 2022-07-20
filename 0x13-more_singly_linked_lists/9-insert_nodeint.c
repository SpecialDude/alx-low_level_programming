#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts new node at index
 *
 * @head: head of the linked list
 * @idx: index
 * @n: integer
 *
 * Return: listint_t*
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	listint_t *ptr = *head;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	newnode = malloc(sizeof(listint_t));

	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	while (ptr && (i < idx))
	{
		if (i == idx - 1)
		{
			newnode->next = ptr->next;
			ptr->next = newnode;
			return (newnode);
		}

		i++;
		ptr = ptr->next;
	}

	free(newnode);
	return (NULL);

}
