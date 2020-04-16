#include "search_algos.h"
/**
 *interpolation_search - find a value in an array with interpolation method
 *@array: given array of integers
 *@size: size of the array
 *@value: value to try to find in array
 *
 *Return: index if finded, otherwise -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low, high, mid;

	if (array == NULL)
		return (-1);
	low = 0;
	high = size - 1;
	while ((array[high] != array[low]) && (value >= array[low])
	       && (value <= array[high]))
	{
		mid = low + (((double)(high - low) / (array[high] - array[low]))
			     * (value - array[low]));
		printf("Value checked array[%d] = [%d]\n", mid, array[mid]);
		if (array[mid] < value)
			low = mid + 1;
		else if (value < array[mid])
			high = mid - 1;
		else
			return (mid);
	}

	if (value == array[low])
		return (low);
	else
		return (-1);
}
