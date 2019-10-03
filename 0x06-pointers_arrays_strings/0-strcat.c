#include "holberton.h"

/**
 *_strcat - concatenates two strings
 *@dest: recieve a string destiny
 *@src: string that will be append to dest
 *
 *Return: char with the straing destiny
 */
char *_strcat(char *dest, char *src)
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
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
