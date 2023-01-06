#include "search_algos.h"
#include <math.h>

#define min(x, y) ((x < y) ? x : y)

/**
 * jump_search - Searches value from array using
 * jump searching algorithm
 *
 * @array: The array to search from
 * @size: Size of the array
 * @value: value to search for within the array
 *
 * Return: index where value was found otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t low, high;
	int step;

	if (array == NULL)
		return (-1);

	step = sqrt(size);
	low = 0;
	high = 0;

	while (array[high] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", high, array[high]);

		low = high;
		high += step;

		if ((high) >= size)
			break;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	high = min(high, size);

	while (array[low] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		low++;
		if (low == high)
			return (-1);
	}

	if (array[low] == value)
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		return (low);
	}
	else
		return (-1);
}
