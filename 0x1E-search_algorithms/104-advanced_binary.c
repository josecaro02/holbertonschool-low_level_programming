#include "search_algos.h"

/**
 *recursive_binary - find the index of a value
 *@array: array of integers
 *@left: min index to test
 *@right: max index to test
 *@value: value to find in the array
 *
 *Return: index of the value, otherwise -1
 */
int recursive_binary(int *array, size_t left, size_t right, int value)
{
	if (right >= left)
	{
		int mid;
		size_t i;

		printf("Searching in array: ");
		for (i = left; i < right - 1; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);
		mid = left + (right - left) / 2;
		if (array[mid] ==  value)
			return (mid);
		if (array[mid] > value)
			return (recursive_binary(array, left, mid - 1, value));
		return (recursive_binary(array, mid + 1, right, value));
	}
	return (-1);
}

/**
 *binary_search - find a value in an array with binary search
 *@array: array of integers
 *@size: size of array
 *@value: value to find in the array
 *
 *Return: index of value, -1 otherwise
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t left, right;

	left = 0;
	right = size;
	if (array == NULL)
		return (-1);
	return (recursive_binary(array, left, right, value));
}
