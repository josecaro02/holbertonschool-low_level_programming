#include "holberton.h"

/**
 *wildcmp - calc if strin 1 is equal to string 2
 *@s1: string 1 given by user
 *@s2: string 2 given by user
 *
 *Return: 1 if strings are identical 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == '*' && *(s2 + 1) == '*')
		return (wildcmp(s1, s2 + 1));
	if (*s1 == '\0' && *s2 == '*' && *(s2 + 1) != '\0')
		return (0);
	if (*s2 == *s1)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	return (0);
}
