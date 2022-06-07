#include "main.h"

/**
 * print_to_98 - Print number starting from n to 98
 *
 * @n: integer number
 *
 * Return: void
 */
void print_to_98(int n)
{
	for (; n < 99; n++)
	{
		if (n < 0)
		{
			_putchar('-');
			n = -n;
		}

		if (n > 9)
		{
			_putchar((n / 10) + '0');
		}

		_putchar((n % 10) + '0');

		if (n < 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}
