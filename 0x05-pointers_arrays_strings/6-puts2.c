#include <string.h>
#include "main.h"

/**
 * puts2 - Printss every other char
 *
 * @str: string
 *
 * Return: void
 */
void puts2(char *str)
{
	int l = strlen(str);
	int i = 0;

	for (; i < l; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
