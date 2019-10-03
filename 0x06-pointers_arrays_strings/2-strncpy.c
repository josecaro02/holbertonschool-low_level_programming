#include "holberton.h"

/**
 *_strncpy - copies a string.
 *@dest: recieve a string destiny
 *@src: string that will be append to dest
 *@n: number of bys to be copied
 *
 *Return: char with the straing destiny
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
