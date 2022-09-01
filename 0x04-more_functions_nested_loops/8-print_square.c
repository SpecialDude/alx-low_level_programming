#include "main.h"

/**
 * print_square - Print a square to the console
 *
 * @size: size of the square (int)
 *
 * Return: void
 */
void print_square(int size)
{
	int i = 0;

	for (; i < size; i++)
	{
		int j = 0;

		for (; j < size; j++)
		{
			_putchar('#');
		}

		if (i < size - 1)
			_putchar('\n');
	}

	_putchar('\n');
}
