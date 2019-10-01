#include "holberton.h"

/**
 *rev_string - reverse an string
 *@s: string given by user
 *Return: nothing it's a void
 */
void rev_string(char *s)
{
	int len, i;
	char *rev, *beg, value;

	len = strlen(s);
	rev = s;
	beg = s;
	for (i = 0; i < len - 1 ; i++)
		rev++;
	for (i = 0; i < len / 2; i++)
	{
		value = *rev;
		*rev = *beg;
		*beg = value;
		beg++;
		rev--;
	}
}
