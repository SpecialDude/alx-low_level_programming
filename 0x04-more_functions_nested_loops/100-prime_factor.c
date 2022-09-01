#include <stdio.h>

/**
 * main - Find the largest Prime factor of a number
 *
 * Return: 0 Success
 */
int main(void)
{
	long int n = 612852475143;
	long int divider = 2;
	long int max_factor;

	while (n != 0)
	{
		if (n % divider != 0)
		{
			divider += 1;
		}
		else
		{
			max_factor = n;
			n = n / divider;

			if (n == 1)
			{
				break;
			}
		}
	}

	printf("%ld\n", max_factor);

	return (0);
}
