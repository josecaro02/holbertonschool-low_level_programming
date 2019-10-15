#include "holberton.h"
#include <stdlib.h>

/**
 *free_grid - free memory of a pointer
 *@grid: matrix
 *@height: number of rows
 *
 *Return: nothing it's a void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
