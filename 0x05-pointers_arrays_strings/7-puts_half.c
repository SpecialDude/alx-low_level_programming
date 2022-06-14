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
	int m = l / 2;

	for (; m < l; m++)
	{
		_putchar(str[m]);
	}
	_putchar('\n');
}


