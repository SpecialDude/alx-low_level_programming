#include "main.h"

/**
 * print_number - Prints any number character by character
 *
 * @n: number to print (int)
 *
 * Return: void
 */
void print_number(int n)
{
	int l = 1;
	int d = 100;
	int k

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	k = n;

	while (k)
	{
		k /= d;

		d *= 10;

		l++;
	}


	for (k = l; k > 0; k--)
	{
		d = 10 * k;

		_putchar(((n / d) % 10) + '0');
	}

	_putchar('\n');
}
