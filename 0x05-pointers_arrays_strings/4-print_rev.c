#include "holberton.h"

/**
 *print_rev - prints a string, in reverse, followed by a new line.
 *@s: char given by user
 *Return: nothing it's a void
 */
void print_rev(char *s)
{
	int len, i;
	char letter;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	s--;
	for (i = 0; i < len; i++)
	{
		letter = *s;
		_putchar(letter);
		s--;
	}
	_putchar('\n');

}
