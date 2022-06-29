#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Free allocated memory
 *
 * @grid: Memory to free
 * @height: Height of 2D Array
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid + i);
	free(grid);
}