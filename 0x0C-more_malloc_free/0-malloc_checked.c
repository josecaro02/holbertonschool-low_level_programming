#include "holberton.h"
#include <stdlib.h>

/**
 *malloc_checked - return a pointer with the allocated memory
 *@b: amount of bytes to allocate
 *
 *Return: nothing it's a void
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	else
		return (p);
}
