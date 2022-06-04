#include <stdio.h>

/**
 * main - Print alphabet in revers
 *
 */
int main(void)
{
	char c;

	for (c = 'z'; c <= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
