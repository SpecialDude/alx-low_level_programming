#include "main.h"

/**
 * squareroot - Find the natural square root
 *
 * @n: Number
 * @i: Starting root number
 *
 * Return: int
 */
int squareroot(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (squareroot(n, i + 1));
}

/**
 * _sqrt_recursion - Square root of a number
 *
 * @n: number
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (squareroot(n, 0));
}
