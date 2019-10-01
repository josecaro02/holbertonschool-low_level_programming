#include "holberton.h"

/**
 *puts_half - prints half of a string, followed by a new line.
 *@str: char given by user
 *
 *Return: nothing it's a void
 */
void puts_half(char *str)
{
	int len, i, n, last_n;
	char letter;

	while (*str != '\0')
	{
		str++;
		len++;
	}

	if (len % 2) == 0)
		n  = len / 2;
	else
		n = (len - 1) / 2;
	last_n = len - n;
	for (i = 0; i < len; i++)
	{
		if (i < last_n)
			str++;
		else
		{
			letter = *str;
			_putchar(letter);
			str++;
		}
	}
	_putchar('\n');
}
