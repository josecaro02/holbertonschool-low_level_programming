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

	if ((s[0] >= 97 && s[0] <= 122))
	s[0] = s[0] - 32;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i - 1] == 32 || s[i - 1] == 10
		    || s[i - 1] == 9 || s[i - 1] == 46 || s[i - 1] == 44 ||
		    s[i - 1] == 59 || s[i - 1] == 33 || s[i - 1] == 63 ||
		    s[i - 1] == 34 || s[i - 1] == 40 || s[i - 1] == 41 ||
		    s[i - 1] == 123 || s[i - 1] == 125)
		{
			if ((s[i] >= 97 && s[i] <= 122))
				s[i] = s[i] - 32;
		}
	}
	return (s);
}
