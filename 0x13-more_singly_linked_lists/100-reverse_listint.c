#include "lists.h"

/**
 * reverse_listint - Reverses a linked list
 *
 * @head: Head of the linked list
 *
 * Return: listint_t*
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptrnext = NULL, *ptrprev = NULL;

	while (*head)
	{
		ptrnext = (*head)->next;
		(*head)->next = ptrprev;
		ptrprev = *head;
		*head = ptrnext;
	}

	*head = ptrprev;

	return (*head);
}
