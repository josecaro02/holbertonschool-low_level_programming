#include "holberton.h"
#include <stdlib.h>

/**
 *_strdup - copies a string to another pointer created with malloc
 *@str: string given to copy
 *
 *Return: return a pointer with the string copied
 */
char *_strdup(char *str)
{
	char *ar;
	unsigned int i, size;

	if (str == NULL)
		return (NULL);
	for (size = 0; str[size] != '\0'; size++)
		ar = malloc(size * sizeof(char));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
	{
		ar[i] = str[i];
	}
	return (ar);
}
