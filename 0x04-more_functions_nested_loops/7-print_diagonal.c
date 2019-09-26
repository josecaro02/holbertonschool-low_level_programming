#include "holberton.h"

/**
 *print_diagonal - prints a diagonal in the shell
 *@n: size of the diagonal
 *
 *Return: no return it is a void
 */
void print_diagonal(int n)
{
	int i, j;

	j = 0;
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			while (i > 0 &&  j < i)
			{
				_putchar(' ');
				j++;
			}
			j = 0;
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
