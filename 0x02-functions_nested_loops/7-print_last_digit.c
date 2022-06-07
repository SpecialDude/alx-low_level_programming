#include "main.h"

/**
 * print_last_digit - Last Digit of a number
 *
 * @n: Number
 *
 * Return: int
 */
int print_last_digit(int n)
{
	int l;

	if (n < 0)
		n = n * -1;

	l = n % 10;

	_putchar(l + 30);

	return (l);
}
