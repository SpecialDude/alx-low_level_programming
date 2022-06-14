#include "main.h"
#include "string.h"

/**
 * print_rev - Print string in reverse
 *
 * @s: string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;

	}

	for (l = l - 1; l < -1; l--)
	{
		_putchar(s[l]);
	}
	_putchar('\n');
}
