#include "function_pointers.h"

/**
 * array_iterator - Iterate over each element of an array
 * and execute an action
 *
 * @array: Array to Iterate over
 * @size: Size of the array
 * @action: Action (Function) to perform on each array element
 *
 * Return: Void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	for (; i < size; i++)
	{
		action(*(array + i));
	}
}

