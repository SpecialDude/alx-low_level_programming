#include "main.h"

/**
 * jack_bauer - Print Every minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i;
	for (i = 0; i < 24; i++)
	{
		int j;
		for (j = 0; j < 60; j++)
		{
			if (i < 10)
				_putchar('0');
			_putchar(i + '0');
			_putchar(':');
			if (j < 10)
				_putchar('0');
			_putchar(j + '0');
		}
		_putchar('\n');
	}
}
