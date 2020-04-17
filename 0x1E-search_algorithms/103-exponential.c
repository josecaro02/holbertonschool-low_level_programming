#include "search_algos.h"
/**
 *binary_search_range - find a value in an array with binary search
 *@array: array of integers
 *@value: value to find
 *@min: start index in the array
 *@max: last index to look in the array
 *
 *Return: index of value, -1 otherwise
 */

int binary_search_range(int *array, int value, size_t min, size_t max)
{
	size_t left, right, index, i;

	left = min;
	right = max - 1;
	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i != right)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		index = (left + right) / 2;
		if (array[index] < value)
			left = index + 1;
		else if (array[index] > value)
			right = index - 1;
		else if (array[index] == value)
			return (index);
	}
	return (-1);
}

/**
 *exponential_search - find a value in an array of integers
 *@array: array of integers
 *@size: size of array
 *@value: value to find
 *
 *Return: index if value is in array, otherwise -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound, min;

	if (array == NULL)
		return (-1);
	if (size == 0)
		return (-1);
	bound = 1;
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	min = bound + 1;
	if (size < min)
		min = size;
	printf("Value found between indexes [%lu] and [%lu]\n",
	       bound / 2, min - 1);
	return (binary_search_range(array, value, bound / 2, min));
}
