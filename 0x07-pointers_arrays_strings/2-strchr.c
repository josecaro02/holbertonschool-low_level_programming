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
	int i, ver, l_s;

	ver = 0;
	for (l_s = 0; s[l_s] != '\0'; l_s++)
	{}
	for (i = 0; i <= l_s; i++)
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
