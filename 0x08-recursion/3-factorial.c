#include "main.h"

/**
 * factorial - Factorial of a number
 *
 * @n: number
 *
 * Return: int
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	return (n * factorial(n-1));
}
