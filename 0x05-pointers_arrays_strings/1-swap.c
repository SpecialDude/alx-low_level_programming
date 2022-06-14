#include "main.h"

/**
 * swap_int - swap two numbers;
 *
 * @a: First number
 * @b: Scond Number
 *
 * Return: Void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
