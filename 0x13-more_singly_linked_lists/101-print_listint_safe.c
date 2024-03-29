#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Prints a linked list safely
 *
 * @head: Head of the linked list
 *
 * Return: size_t
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	long int d;

	while (head)
	{
		d = head - head->next;
		nodes++;

		printf("[%p] %d\n", (void *)head, head->n);
		if (d > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (nodes);
}
