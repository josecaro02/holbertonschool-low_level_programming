#include "holberton.h"
#include <stdio.h>

/**
 *_strstr - locates a substring.
 *@haystack: string target
 *@needle: string to find
 *
 *Return: turn strin haystack with the pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int l_needle, l_haystack, i, j, cont, ver;

	cont = 0;
	ver = 0;
	for (l_needle = 0; needle[l_needle] != '\0'; l_needle++)
	{}
	for (l_haystack = 0; haystack[l_haystack] != '\0'; l_haystack++)
	{}
	for (i = 0; i <= (l_haystack - l_needle); i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] == needle[j])
			{
				cont++;
			}
		}
		if (cont == l_needle)
		{
			haystack = haystack + i;
			ver = 1;
			break;
		}
		else
			cont = 0;
	}
	if (ver == 0)
		return (NULL);
	else
		return (haystack);
}
