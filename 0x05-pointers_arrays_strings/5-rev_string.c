#include "holberton.h"
#include <stdio.h>

/**
 *rev_string - reverse an string
 *@s: string given by user
 *Return: nothing it's a void
 */
void rev_string(char *s)
{
	int len, i;
	char *rev, *beg, value;

	rev = s;
	beg = s;
	len = 0;
	while (*rev != '\0')
	{
		rev++;
		len++;
	}
	rev--;
	for (i = 0; i < len / 2; i++)
	{
		value = *rev;
		*rev = *beg;
		*beg = value;
		beg++;
		rev--;
	}
}
