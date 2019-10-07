#include "holberton.h"

/**
 *_memset - fills memory with a constant byte.
 *@s: string target
 *@b: constant byte to fill the string
 *@n: number of bytes to fill
 *
 *Return: string filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
