#include <stdio.h>

/**
 * main - Print alphabet in revers
 *
 * Return: 0 Success
 */
int main(void)
{
	char c;
	int n;

	for (n = 48; n < 58; n++)
		putchar(n);

	for (c = 'a'; c < 'g'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
