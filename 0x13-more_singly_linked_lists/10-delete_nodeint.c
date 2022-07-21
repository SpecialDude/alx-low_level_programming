#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes a node at an index
 *
 * @head: Head of the singly linked list *
 * @index: index to delete
 *
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = *head;
	listint_t *deleted;
	int status = -1;
	unsigned int i = 0;

	if (!head || !(*head))
		return (status);

	if (index == 0)
	{
		deleted = *head;
		*head = (*head)->next;
		free(deleted);
	}

	while (ptr && (i < index - 1))
	{
		ptr = ptr->next;
		i++;
	}

	if (ptr && ptr->next)
	{
		deleted = ptr->next;
		ptr->next = ptr->next->next;

		free(deleted);
		status = 1;
	}

	return (status);

}
