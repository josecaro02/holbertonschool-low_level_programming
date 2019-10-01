#include "holberton.h"
#include <stdio.h>

/**
 *_strcpy - copies the string pointed to by src, including the terminating null
 * byte (\0), to the buffer pointed to by dest.
 *@dest: char where the string will be copied
 *@src: char with the content to be copied
 *
 *Return: char with the addition of two strings
 */
char *_strcpy(char *dest, char *src)
{
	int i, len;
	char *base;

	base = src;
	while (*base != '\0')
	{
		base++;
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = *src;
		src++;
	}
	return (dest);
}
