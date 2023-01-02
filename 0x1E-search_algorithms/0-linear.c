#include "search_algos.h"

/**
 * linear_search - Searches an element
 * from an array using linear searching algorithm
 *
 * @array: Array to search element from
 * @size: Size of the array
 * @value: Value to search for in the array
 *
 * Return: Index where the value is found or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n",i ,*(array + i));
		if (*(array + i) == value)
			return (i);
	}
	return (-1);
}

