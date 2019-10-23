#include <stdio.h>
#include "function_pointers.h"
/**
 *array_iterator - calls a function that prints all position of the array
 *@array: array given by user
 *@size: size of the array
 *@action: function to call
 *
 *Return: nothing, it's a void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
