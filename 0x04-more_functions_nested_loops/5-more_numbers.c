#include "main.h"

/**
 * more_numbers - Print numbers 1 - 14 ten times
 *
 * Return: void
 */
void more_numbers(void)
{
	int i = 0;

	for (; i < 10; i++)
	{
		int j = 0;

		for (; j < 15; j++)
		{
			if (j > 9)
				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
