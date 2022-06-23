#include "main.h"

/**
 * is_prime - Check if a number is prime recursively
 *
 * @n: number
 * @i: Start number
 *
 * Return: int
 */
int is_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (is_prime(n, i - 1));
}

/**
 * is_prime_number - Check if a number is prime recursively
 *
 * @n: number
 *
 * Return: int
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, (n / 2) + 1));
}
