#include <string.h>
#include "main.h"

/**
 * puts_half - Prints half of a string
 *
 * @str: string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int l = strlen(str);
	int m = m / 2;

	for (m = m + 1; m < l; m++)
	{
		_putchar(str[m]);
	}
	_putchar('\0');
}


