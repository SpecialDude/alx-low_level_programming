#include "main.h"

/**
 * print_diagonal - Print diagonal line
 *
 * @n: how long
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		int j = 0;

		for (; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		if (i < n - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
