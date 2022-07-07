#include "function_pointers.h"

/**
 * int_index - Find an element in an array
 *
 * @array: Array
 * @size: Size of Array
 * @cmp: Function to compare for searching
 *
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int r;

	if (size < 1)
		return (-1);

	for (i = 0; i < size; i++)
	{
		r = cmp(*(array + i));

		if (r != 0)
			return (i);
	}
	return (-1);
}
