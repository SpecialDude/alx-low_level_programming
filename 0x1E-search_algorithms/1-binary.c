#include "search_algos.h"

/**
 * binary_search - Searches an element from an
 * array using binary searching algorithm
 *
 * @array: Array to search value from
 * @size: Size of the array
 * @value: Element to search for
 *
 * Return: Index value of where the element is found or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
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
