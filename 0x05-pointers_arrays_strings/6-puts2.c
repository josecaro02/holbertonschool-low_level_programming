#include "holberton.h"

/**
 *puts2 - prints between lines of a string
 *@str: string given by user
 *Return: nothing it's a void
 */
void puts2(char *str)
{
	int len, i;
	char letter;

	len  = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
		{
			letter = *str;
			_putchar(letter);
			str++;
		}
		else
			str++;
	}
	_putchar('\n');
}
