#include "holberton.h"

/**
 *_strncat - concatenates two strings
 *@dest: recieve a string destiny
 *@src: string that will be append to dest
 *@n: number of bys to be copied
 *
 *Return: char with the straing destiny
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len;
	int i;
	char *copy;

	copy = dest;
	dest_len = 0;
	while (*copy != '\0')
	{
		dest_len++;
		copy++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
