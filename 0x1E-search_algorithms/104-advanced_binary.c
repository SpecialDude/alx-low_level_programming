#include "search_algos.h"

int find_first_index(int *array, int value, size_t low, size_t index)
{
	printf("Searching in array: ");
	print_array(array, low, index);

	if ((index - 1 < low) || (array[index - 1] != value))
		return (index);

	return find_first_index(array, value, low, index - 1);
}

int ad_binary(int *array, int value, size_t low, size_t high)
{
	size_t mid;

	if (low > high)
		return (-1);
	
	printf("Searching in array: ");
	print_array(array, low, high);
	
	mid = (low + high) / 2;

	if (array[mid] > value)
		return (ad_binary(array, value, low, mid - 1));
	else if (array[mid] < value)
		return (ad_binary(array, value, mid + 1, high));
	else
		return find_first_index(array, value, low, mid);
}

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	
	return ad_binary(array, value, 0, size - 1);
}

/**
 * print_array - Prints the content of an array
 *
 * @array: Array to print
 * @low: Lower bound to start printing from
 * @high: Upper bound to stop printing
 *
 * Return:void
 */
void print_array(int *array, size_t low, size_t high)
{
	size_t i;

	if (array == NULL)
		return;

	for (i = low; i <= high; i++)
	{
		if (i != low)
			printf(", ");
		printf("%d", *(array + i));
	}
	printf("\n");
}
