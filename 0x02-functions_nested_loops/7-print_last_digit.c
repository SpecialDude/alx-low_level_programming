#include "main.h"

/**
 * print_last_digit
 *
 * @n: Number
 *
 * Return: int
 */
int print_last_digit(int n)
{
	int l = n % 10;

	_putchar(char(l));

	return (l);
}
