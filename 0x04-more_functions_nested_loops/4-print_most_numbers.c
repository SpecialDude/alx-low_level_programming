#include "main.h"

/**
 * print_most_numbers - Print numbers without 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	char i = '0';

	for (; i <= '9'; i++)
	{
		if (i != 2 && i != 4)
			_putchar(i);
	}
	_putchar('\n');
}
