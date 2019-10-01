#include "holberton.h"

/**
 *print_rev - prints a string, in reverse, followed by a new line.
 *@s: char given by user
 *Return: nothing it's a void
 */
void print_rev(char *s)
{
	int len, i;

	len = strlen(s);
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

}
