#include "main.h"

/**
 * print_times_table - Print Multiplication table up to n
 *
 * @n: number (int)
 *
 * Return: void
 */
void print_times_table(int n)
{

	if (n < 0 || n > 15)
		return;

	int i;

	for (i = 0; i <= n; i++)
	{
		int j;

		for (j = 0; j <= n; j++)
		{
			int m;

			m = i * j;

			if (j == 0)
			{
				_putchar(m + '0');
			}
			else if (m < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else if (m >=10 && k < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');

			}
			else if (k >= 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((m / 100) + '0');
				_putchar(((m / 10) % 10) + '0');
				_putchar((m % 10) + '0');

			}
		}
		_putchar('\n');
	}
}
