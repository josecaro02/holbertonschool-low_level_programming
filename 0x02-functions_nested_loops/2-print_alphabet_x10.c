#include "holberton.h"

/**
 *print_alphabet_x10 - print 10 alphabets
 *
 *Return: always 0 ;
 */
int print_alphabet_x10(void)
{
	int i;
	int itera = 0;

	while (itera < 10)
	{
		i = 97;
		while (i < 123)
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		itera++;
	}

	return (0);
}
