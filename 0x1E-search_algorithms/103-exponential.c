#include "search_algos.h"
#define min(x, y) ((x < y) ? x : y)

/**
 * exponential_search - Searches value in array using
 * exponential searching algorithm
 *
 * @array: Array to search from
 * @size: size of array
 * @value: Element to search for
 *
 * Return: index where the element is found otherwise -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound, low, high;

	if (array == NULL)
		return (-1);

	bound = 1;
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound = bound << 1;
	}

	low = bound >> 1;
	high = min(bound, size - 1);

	printf("Value found between indexes [%ld] and [%ld]\n", low, high);

	return (binary_search_bound(array, value, low, high));
}

/**
 * binary_search_bound - Searches an element from an
 * array using binary searching algorithm
 *
 * @array: Array to search value from
 * @value: Element to search for
 * @low: Lower Index bound
 * @high: Upper Index bound
 *
 * Return: Index value of where the element is found or -1
 */
int binary_search_bound(int *array, int value, size_t low, size_t high)
{
	size_t mid;

	if (array == NULL)
		return (-1);

	while (low  <= high)
	{
		printf("Searching in array: ");
		print_array(array, low, high);

		mid = (low + high) / 2;

		if (*(array + mid) < value)
			low = mid + 1;
		else if (*(array + mid) > value)
			high = mid - 1;
		else
			return (mid);
	}
	return (-1);
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
