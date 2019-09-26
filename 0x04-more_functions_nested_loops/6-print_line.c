#include "holberton.h"

/**
 *print_line - prints a line based in the number given by user
 *@n: number given by user, represents the size of the line
 *
 *Return: 0, it is a void
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
		_putchar('\n');
}
