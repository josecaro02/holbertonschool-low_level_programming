#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *str_concat - concatenate 2 strings
 *@s1: string number 1
 *@s2: string number 2
 *
 *Return: concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;
	char *ar;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	for (size1 = 0; s1[size1] != '\0'; size1++)
	{}
	for (size2 = 0; s2[size2] != '\0'; size2++)
	{}
	ar = malloc((size1 + size2 + 1) * sizeof(char));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < (size1 + size2); i++)
	{
		if (*s1 != '\0')
		{
			ar[i] = *s1;
			s1++;
		}
		else
		{
			ar[i] = *s2;
			s2++;
		}
	}
	ar[i] = '\0';
	return (ar);
}
