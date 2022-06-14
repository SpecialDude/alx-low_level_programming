#include "main.h"

/**
 * print_rev - Print string in reverse
 *
 * @s: string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int l = strlen(s);

	for (l = l - 1; l < -1; l--)
	{
		_putchar(s[l]);
	}
	_putchar('\n');
}
