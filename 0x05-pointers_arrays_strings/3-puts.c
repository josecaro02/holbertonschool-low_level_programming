#include "holberton.h"

/**
 *_puts - prints a string, followed by a new line, to stdout.
 *@str: string given by user
 *
 *Return: nothing it's a void
 */
void _puts(char *str)
{
	char letter;

	while (*str != '\0')
	{
		letter = *str;
		_putchar(letter);
		str++;
	}
	_putchar('\n');
}
