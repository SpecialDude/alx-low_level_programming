#include "lists.h"

/**
 * free_dlistint - Free a doubly linked list
 *
 * @head: Head of the list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head)
	{
		current = head->next;
		free(head);
		head = current;
	}

}
