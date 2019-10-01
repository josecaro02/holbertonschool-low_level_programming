#include "holberton.h"

/**
 *_strlen - returns the lenght of a string
 *@s: char string given by user
 *Return: int the size of the string
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while ( *s != '\0' )
	{
		s++;
		len++;
	}
	return (len);
}
