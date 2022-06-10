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
	int l;
	int d = 10;
	int k;


	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	if (n == 0)
		l = 1;
	else
		l = 0;

	k = n;

	while (k)
	{
		k /= d;

		l++;
	}

	for (k = l - 1; k > -1; k--)
	{
		int p  = 0;

		d = 1;

		for (; p < k; p++)
		{
			d *= 10;
		}

		_putchar(((n / d) % 10) + '0');
	}

}
