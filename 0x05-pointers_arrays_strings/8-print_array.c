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
		_putchar(a[i] + '0');
		_putchar(',');
		_putchar(' ');
	}
	_putchar(a[n - 1] + '0');
	_putchar('\n');
}
