#include <stdio.h>

/**
 * main - Printing alphabets omitting q and e
 *
 * Return: 0 Success
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
			putchar(c);
	}
	putchar('\n');

	return (0);
}
