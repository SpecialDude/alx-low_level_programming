#include "main.h"

/**
 * print_numbers - Print the numbers 0 - 9
 *
 * Return: void
 */
void print_numbers(void)
{
	char i = '0';

	for (; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}
