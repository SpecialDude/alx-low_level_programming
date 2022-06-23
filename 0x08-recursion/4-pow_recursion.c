#include "main.h"

/**
 * _pow_recursion - Power of a number recursively
 *
 * @x: base number
 * @y: power
 *
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
