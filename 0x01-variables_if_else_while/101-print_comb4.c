#include <stdio.h>

/**
 * main - Combination Three Digits
 *
 * Return: 0 Success
 */
int main(void)
{
	int n;
	int m;
	int l;

	for (n = 48; n < 58; n++)
	{
		for (m = n + 1; m < 58; m++)
		{
			for (l = m + 1; l < 58; l++)
			{
				putchar(n);
				putchar(m);
				putchar(l);

				if (n != 55 || m != 56 || l != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
