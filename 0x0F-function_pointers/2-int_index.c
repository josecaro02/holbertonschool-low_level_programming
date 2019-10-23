#include "function_pointers.h"
/**
 *int_index - calc if a number of an array is true in a function
 *@array: array of numbers;
 *@size: size of the array;
 *@cmp: function to test
 *
 *Return: the index of the number that fulfill the condition
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != NULL && cmp != NULL)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
