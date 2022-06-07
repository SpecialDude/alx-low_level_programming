#include "main.h"

/**
 * times_table - Print multiplication table 9
 *
 * Return: void
 */
void times_table(void)
{
	int i = 0;

	for (; i < 10; i++)
	{
		int j = 0;

		for (; j < 10; j++)
		{
			int m = i * j;

			if (m > 9)
				_putchar((m / 10) + '0');
			else if (i != 0)
				_putchar(' ');

			_putchar((m % 10) + '0');


			if (j < 9)
			{
				_putchar(',');

				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
