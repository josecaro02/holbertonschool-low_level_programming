#include "holberton.h"

/**
 *_strspn - gets the length of a prefix substring.
 *@s: string target
 *@accept: string with the accept characters
 *
 *Return: int with the amount of accepted characters
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, ver, amount;

	ver = 0;
	amount = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				ver = 1;
		}
		if (ver == 1)
		{
			amount++;
			ver = 0;
		}
		else
			break;
	}
	return (amount);
}
