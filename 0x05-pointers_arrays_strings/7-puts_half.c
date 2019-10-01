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

	if ((strlen(str) % 2) == 0)
		n  = strlen(str) / 2;
	else
		n = (strlen(str) - 1) / 2;
	len  = strlen(str);
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
