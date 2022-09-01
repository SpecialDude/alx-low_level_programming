#include "main.h"

/**
 * print_line - Print a line to the console
 *
 * @n: How long (int)
 *
 * Return: void
 */
void print_line(int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
