#include "lists.h"

/**
 * get_nodeint_at_index - Get the node at index
 *
 * @head: Head of a singly linked list
 * @index: node index
 *
 * Return: listint_t*
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index && head)
	{
		head = head->next;
		i++;
	}

	return (head);
}
