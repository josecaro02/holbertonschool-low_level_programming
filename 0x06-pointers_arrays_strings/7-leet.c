#include "holberton.h"

/**
 *leet - encodes a string into 1337.
 *@s: string to encode
 *
 *Return: string encoded with 1337
 */
char *leet(char *s)
{
	int i, j;
	char letter[] = "aAeEoOlLtT";
	char numbers[] = "4433001177";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letter[j] != '\0'; j++)
		{
			if (s[i] == letter[j])
				s[i] = numbers[j];
		}
	}
	return (s);
}
