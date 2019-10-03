#include "holberton.h"

/**
 *cap_string - capitalize all the words in a string
 *@s: string given by user
 *
 *Return: string with capitalize words
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i - 1] == 32 || s[i - 1] == 10
		    || s[i - 1] == 9 || s[i - 1] == 46)
		{
			if (s[i - 1] == 9)
				s[i - 1] = 32;
			if ((s[i] >= 97 && s[i] <= 122))
				s[i] = s[i] - 32;
		}
	}
	return (s);
}
