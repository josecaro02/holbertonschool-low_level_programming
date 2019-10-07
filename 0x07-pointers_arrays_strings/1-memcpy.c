#include "holberton.h"

/**
 *_memcpy - copies memory area
 *@dest: string destiny
 *@src: string to copy
 *@n: number of characters to change
 *
 *Return: string destino
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = src[i];
	}
	return (dest);
}
