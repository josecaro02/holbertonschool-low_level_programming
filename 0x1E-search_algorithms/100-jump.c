#include "search_algos.h"
/**
 *min_v - find min value
 *@a: value 1
 *@b: value 2
 *
 *Return: min value
 */
size_t min_v(size_t a, size_t b)
{
	if (a > b)
		return (b);
	else
		return (a);
}
/**
 *jump_search - find value in an array with jump search method
 *@array: array of integers
 *@size: size of array
 *@value: value to find
 *
 *Return: position of value or -1 if not finded
 */
int jump_search(int *array, size_t size, int value)
{
	size_t a, b;

	if (array == NULL)
		return (-1);
	a = 0;
	b = sqrt(size);
	printf("Value checked array[%lu] = [%d]\n", a, array[a]);
	while (array[min_v(b, size)] < value && b < size)
	{
		a = b;
		b = b + sqrt(size);
		printf("1Value checked array[%lu] = [%d]\n", a, array[a]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", a, b);
	while (a <= min_v(b, size - 1))
	{
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);
		if (array[a] == value)
			return (a);
		a++;
	}
	return (-1);
}
