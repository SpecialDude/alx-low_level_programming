#include "main.h"
#include "stdio.h"
/**
 * print_to_98 - Print number starting from n to 98
 *
 * @n: integer number
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n < 99; n++)
		{
			printf("%d", n);
			if (n < 98)
				printf(", ");
		}
	}
	else
	{
		for (; n > 97; n--)
		{
			printf("%d", n);
			if (n > 98)
				printf(", ");
		}
	}
	printf("\n");

}
