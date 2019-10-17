#include "holberton.h"
#include <stdlib.h>

/**
 *_memcpy - copies memory area
 *@dest: string destiny
 *@src: string to copy
 *@n: number of characters to change
 *
 *Return: string destino
 */

char *_memcpy(char *dest,  char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = src[i];
	}
	return (dest);
}

/**
 *_realloc - realloc a pointer
 *@ptr: pointer to realloc memory
 *@old_size: old size of the pointer
 *@new_size: new size of the pointer
 *
 *Return: pointer with the new allocation memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr_cpy;
	unsigned int i,size = 0;

	if ( new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		ptr = malloc(new_size);
	if (ptr == NULL)
		return (NULL);
	if ( new_size == 0)
	{
		free (ptr);
		return (NULL);
	}
	ptr_cpy = malloc(new_size);
	if (ptr_cpy == NULL)
		return (NULL);
	if (new_size < old_size)
		size = new_size;
	else
		size = old_size;
	for (i = 0; i < size; i++)
	{
		_memcpy(ptr_cpy, ptr, size);
	}
	free(ptr);
	return (ptr_cpy);

}
