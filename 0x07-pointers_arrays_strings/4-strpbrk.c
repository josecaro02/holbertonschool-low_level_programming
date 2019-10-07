#include "holberton.h"

/**
 *_strpbrk - searches a string for any of a set of bytes.
 *@s: string target
 *@accept: string with the characters to finde
 *
 *Return: sTring with the pointer on the first occurrence
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, ver;

	ver = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				ver = 1;
			}
		}
		if (ver == 1)
		{
			s = s + i;
			break;
		}
	}
	if (ver == 0)
		return (NULL);
	else
		return (s);
}
