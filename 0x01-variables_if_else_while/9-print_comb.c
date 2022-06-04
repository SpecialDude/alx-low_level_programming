#include <stdio.h>

/**
 * main - Combination
 *
 * Return: 0 Success
 */
int main(void)
{
	int n;

	for (n = 48; n < 57; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar(57);

	return (0);
}

