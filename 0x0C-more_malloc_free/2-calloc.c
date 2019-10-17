#include "holberton.h"
#include <stdlib.h>

/**
 *_calloc - alloc an space of memory and fill the array with 0
 *@nmemb: number of members of the array
 *@size: size of characters
 *
¨*Return: nothing it's a void
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ar = malloc(nmemb * size);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		ar[i] = 0;
	}
	return (ar);
}
