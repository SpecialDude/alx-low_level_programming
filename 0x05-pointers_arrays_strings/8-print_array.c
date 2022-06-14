#include "main.h"

/**
 * print_array - Prints element of an array
 *
 * @a: The array
 * @n: Size of array
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n - 1; i++)
	{
		printf("%d, ");
	}
	printf("%d\n", a[n - 1]);
}
