#include <stdio.h>

/**
 * main - Combination (Two digits)
 *
 * Return: 0 Success
 */
int main(void)
{
	int n;
	int m;

	for (n = 48; n < 58; n++)
	{
		for (m = n + 1; m < 58; m++)
		{
			putchar(n);
			putchar(m);

			if (n != 56 || m != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
