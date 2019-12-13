#include "holberton.h"
#include <stdio.h>

int check_char(const char *s);
/**
 *binary_to_uint - convert a binary number to decimal number
 *@b: pointer to a string with the binary number
 *
 *Return: int with decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int conv;
	int check, size, i;

	check = 0;
	conv = 0;
	size = 0;
	if (b == NULL)
		return (0);
	check = check_char(b);
	if (check == 1)
	{
		for (size = 0; b[size] != '\0'; size++)
		{}
		size = size - 1;
		for (i = 0; size != -1; size--, i++)
		{
			conv = conv + ((b[i] - '0') << size);
		}
		return (conv);
	}
	else
		return (0);
}

/**
 *check_char - checks if an arguments has a char
 *@s: string with the argument
 *
 *Return: 1 if the argument only has numbers, 0 if not
 */
int check_char(const char *s)
{
	if (*s == '\0')
		return (1);
	else if (*s <= 47 || *s >= 58)
		return (0);
	else
		return (check_char(s + 1));
}
