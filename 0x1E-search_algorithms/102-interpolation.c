#include "search_algos.h"

/**
 * interpolation_search - Searches value within array
 * using interpolation searching algorithm
 *
 * @array: Array to search from
 * @size: size of the array
 * @value: value to search for within the array
 *
 * Return: Index where value was found otherwise -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, mid;

	low = 0;
	high = size - 1;

	while ((array[high] != array[low]) &&
		(value >= array[low]) &&
		(value <= array[high]))
	{
		mid = low + ((value - array[low])  * (high - low) /
			(array[high] - array[low]));
		printf("Value checked array[%ld] = [%d]\n", mid, array[mid]);

		if (array[mid] < value)
			low = mid + 1;
		else if (value < array[mid])
			high = mid - 1;
		else
			return (mid);

	}

	if (value == array[low])
		return (low);
	else
		return (-1);
}
