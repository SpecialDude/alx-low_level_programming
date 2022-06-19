#include "main.h"

/**
 * reverse_array - Reverse the Elements in an integer array
 *
 * @a: Array pointer
 * @n: number of element in the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int m = n / 2;
	int i = 0;
	int temp;

	for (; i < n + 1; i++)
	{
		temp = *(a + i);

		*(a + i) = *(a + m - i - 1);
		*(a + m -i - 1) = temp;
	}
}
