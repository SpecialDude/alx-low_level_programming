#include <stdio.h>

/**
 * main - Weird Combination
 *
 * Return: 0 Success
 */
int main(void)
{
	int n;
	int m;

	for (n = 0; n < 100; n++)
	{
		for (m = n + 1; m < 100; m++)
		{
			putchar((n / 10) + 48);
			putchar ((n % 10) + 48);
			putchar(' ');
			putchar((m / 10) + 48);
			putchar((m % 10) + 48);

			if (n != 98 || m != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
