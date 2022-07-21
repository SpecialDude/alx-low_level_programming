#include "lists.h"

/**
 * find_listint_loop - Check if loops exists in a linked list
 *
 * @head: head of the singly linked list
 *
 * Return: listint_t*
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptrahead = head;
	listint_t *ptrbehind = head;

	if (!head)
		return (NULL);

	while (ptrbehind && ptrahead && ptrahead->next)
	{
		ptrahead = ptrahead->next->next;
		ptrbehind = ptrbehind->next;
		if (ptrahead == ptrbehind)
		{
			ptrbehind = head;
			while (ptrbehind != ptrahead)
			{
				ptrbehind = ptrbehind->next;
				ptrahead = ptrahead->next;
			}
			return (ptrahead);
		}
	}

	return (NULL);
}
