#include "holberton.h"
#include <stdlib.h>

/**
 *alloc_grid - fills a matrix with zeros
 *@width: quantity of columns
 *@height: quantity of rows
 *
 *Return : matrix full of zeros
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int i, j;

	matrix = malloc(width * sizeof(int *));
	if (matrix == NULL)
		return (NULL);
	for (i = 0;  i < width; i++)
	{
		matrix[i] = malloc(height * sizeof(int));
		if (matrix[i] == NULL)
			return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			matrix[i][j] = 0;
		}
	}
	return (matrix);
}
