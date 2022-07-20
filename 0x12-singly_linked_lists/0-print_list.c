#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints the nodes of a linked list
 *
 * @h: singly linked list
 *
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;
	list_t *ptr = h;

	while (ptr)
	{
		if (ptr->str)
		{
			printf("[0] (nill)\n");
		}
		else
		{
			printf("[%d] (%s)\n", ptr->len, ptr->str);
		}

		ptr = ptr->next;
		nodes++;
	}

	return (nodes);

}