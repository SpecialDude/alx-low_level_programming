#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees allocated memory for a linked list
 * and sets head to NULL
 *
 * @head: Head of the singly linked list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;

	while (*head)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}

	*head = NULL;
}
