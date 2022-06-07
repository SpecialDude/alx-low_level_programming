#include "main.h"

/**
 * print_sign - Check if number is positive, negative or zero
 * and print the sign
 *
 * @n: Number
 *
 * Return: 1 if positive 0 if zero and -1 of negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1)
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
