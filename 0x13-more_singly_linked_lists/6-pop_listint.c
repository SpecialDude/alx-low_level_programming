#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Remove and return the first node of a linked list
 *
 * @head: Pointer to head of a singly linked list
 *
 * Return: int
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *ptr;

	if (*head)
	{
		ptr = *(head);
		*(head) = (*head)->next;

		n = ptr->n;
		free(ptr);
	}

	return (n);
}
