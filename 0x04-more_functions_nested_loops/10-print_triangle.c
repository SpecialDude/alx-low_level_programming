#include "main.h"

/**
 * print_triangle - Draw a triangle
 *
 * @size: how big (int)
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i = 0;

	for (; i < size; i++)
	{
		int j = size - i - 1;
		int k = 0;

		for (; j > 0; j--)
		{
			_putchar(' ');
		}

		for (; k < i + 1; k++)
		{
			_putchar('#');
		}
		if (i < size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}

