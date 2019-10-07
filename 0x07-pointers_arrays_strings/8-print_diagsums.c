#include "holberton.h"
#include <stdio.h>

/**
 *print_diagsums - prints the sum of the two diagonals of a square matrix
 *@a: matrix given by user
 *@size: size of matrix
 *
 *Return: nothing it's a void
 */
void print_diagsums(int *a, int size)
{
	int i, j, diag1, diag2;

	diag1 = 0;
	diag2 = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				diag1 = diag1 + a[(i * size) + j];
			}
			if ((i + j) == (size - 1))
			{
				diag2 = diag2 + a[(i * size) + j];
			}
		}
	}
	printf("%d, %d\n", diag1, diag2);
}
