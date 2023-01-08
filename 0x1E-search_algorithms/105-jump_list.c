#include "search_algos.h"
#include <math.h>
#define min(x, y) ((x < y) ? x : y)

/**
 * jump - Jump some steps forward in
 * a linked list
 *
 * @list: The linked list
 * @step: Steps to jump
 *
 * Return: jumped to listint_t*
 */
listint_t *jump(listint_t *list, size_t step)
{
	while (step-- > 0 && list->next)
		list = list->next;
	return (list);
}

/**
 * jump_list - Jump searching algorithm on
 * a linked list
 *
 * @list: A linked list to search from
 * @size: Size of the list
 * @value: Value to search for in the list
 *
 * Return: listint_t* or NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t low, high;
	int step;
	listint_t *prev, *current;

	if (list == NULL)
		return (NULL);

	step = sqrt(size);
	low = 0;
	high = step;
	prev = list;
	current = jump(list, step);
	while (current->n < value)
	{
		printf("Value checked at index[%lu] = [%d]\n", high, current->n);
		prev = current;
		current = jump(current, step);
		low = high;
		high += step;
		if ((high) >= size)
			break;
	}
	high = min(high, size - 1);
	printf("Value checked at index[%lu] = [%d]\n", high, current->n);
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	while (prev && prev->n < value)
	{
		printf("Value checked at index[%lu] = [%d]\n", low, prev->n);
		low++;
		prev = prev->next;
	}
	if (prev == NULL)
		return (NULL);
	if (prev->n == value)
	{
		printf("Value checked at index[%lu] = [%d]\n", low, prev->n);
		return (prev);
	}
	else
		return (NULL);
}
