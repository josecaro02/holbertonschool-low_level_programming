#include "holberton.h"

/**
 *_strchr - locates a character in a string.
 *@s: string target
 *@c: char to find
 *
 *Return: string with the result
 */
char *_strchr(char *s, char c)
{
	int i, ver;

	ver = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			s = s + i;
			ver = 1;
			break;
		}
	}
	if (ver == 0)
		return (NULL);
	else
		return (s);

}
