#include "holberton.h"
#include <stdlib.h>

/**
 *create_array - create an array and fill it with character given
 *@size: size of arrat
 *@c: character to fill the array
 *
 *Return: array
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ar = malloc(size * sizeof(char));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
