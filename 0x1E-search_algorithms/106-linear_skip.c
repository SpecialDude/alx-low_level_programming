#include "search_algos.h"

/**
 * linear_skip - Linear search of a skiplist
 *
 * @list: A skip_list
 * @value: Value to search
 *
 * Return: skiplist_t* or NULL if not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *prev, *current;

	if (list == NULL)
		return (NULL);

	prev = list;
	current = list->express;
	while (current && current->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		prev = current;
		current = current->express;
	}

	if (current == NULL)
	{
		current = prev->next;
		while (current->next)
			current = current->next;
	}
	else
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
	printf("Value found between indexes [%lu] and [%lu]\n",
		prev->index, current->index);
	while (prev && prev->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		prev = prev->next;
	}
	if (prev == NULL)
		return (NULL);

	if (prev->n == value)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		return (prev);
	}
	else
		return (NULL);
}
