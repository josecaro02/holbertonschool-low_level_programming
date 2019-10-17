#include "holberton.h"
#include <stdlib.h>

/**
 *string_nconcat - concate 2 strings
 *@s1: string1
 *@s2: string2
 *@n: amount
 *
 *Return: pointer with the concatenated strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int sz1, sz2, i, j, k;

	if (s1 == NULL)
		sz1 = 0;
	else
	{
		for (sz1 = 0; s1[sz1] != '\0'; sz1++)
		{}
	}
	if (s2 == NULL)
		sz2 = 0;
	else
	{
		for (sz2 = 0; s2[sz2] != '\0'; sz2++)
		{}
	}
	if (n > sz2)
		n = sz2;
	concat = malloc((sz1 + n + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);
	j = k = 0;
	for (i = 0; i < (sz1 + n); i++)
	{
		if (i < sz1)
		{
			concat[i] = s1[j];
			j++;
		}
		else if (i < (sz1 + n))
		{
			concat[i] = s2[k];
			k++;
		}
	}
	return (concat);

}
