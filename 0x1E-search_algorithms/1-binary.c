#include "search_algos.h"
/**
 *binary_search - find a value in an array with binary search
 *@array: array of integers
 *@size: size of array
 *@value: value to find in the array
 *
 *Return: index of value, -1 otherwise
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left, right, index, i;

	left = index = 0;
	right = size - 1;
	if (array == NULL || value < 0)
		return (-1);
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i != right)
				printf("%lu, ", i);
			else
				printf("%lu\n", i);
		}
		index = (left + right) / 2;
		if (array[index] < value)
			left = index + 1;
		else if (array[index] > value)
			right = index - 1;
		else
			return (index);
	}
	return (-1);
}
