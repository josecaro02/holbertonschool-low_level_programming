#include "holberton.h"

/**
 *print_square -  print a square of # signs
 *@size: height and width of square
 *
 *Return: no return, it is a void
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
