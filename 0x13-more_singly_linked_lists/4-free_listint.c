#include "lists.h"
#include <stdlib.h>

/**
 * free+listint - Frees allocated memory for a linked list
 *
 * @head: Head of the singly linked list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}

}
