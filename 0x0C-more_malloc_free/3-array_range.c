#include "holberton.h"
#include <stdlib.h>

/**
 *array_range - alloc an array an fill it with numbers
 *@min: min number to allocate
 *@max: max number to allocate
 *
 *Return: array of integers
 */
int *array_range(int min, int max)
{
	int *ar;
	int size, i;

	if (min > max)
		return (NULL);
	size = max - min;
	ar = malloc((size + 1) * sizeof(int));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
	{
		ar[i] = min;
		min++;
	}
	return (ar);
}
