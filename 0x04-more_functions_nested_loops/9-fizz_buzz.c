#include <stdio.h>

/**
 * fizzbuzz - Print numbers from 1 - 100
 *
 * Return: void
 */
void fizzbuzz(void)
{
	int i = 1;

	for (; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0);
			printf("Buzz");
		else
			printf("%d", i)
		if (i < 100)
			printf(" ");
	}
	printf("\n");
}
