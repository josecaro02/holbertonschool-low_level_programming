#include "holberton.h"

/**
 *_strcmp - compare two strings
 *@s1: first string
 *@s2: string to compare
 *
 *Return: 0 if strings are the same, otherwise strings are different
 */
int _strcmp(char *s1, char *s2)
{
	int compare, i;

	for (i = 0; s2[i] != '\0'; i++)
	{
		compare = s1[i] - s2[i];
		if (compare != 0)
			break;
	}
	return (compare);
}
