#include "holberton.h"

/**
 *print_triangle -  prints triangles
 *@size: size of the triangle to print
 *
 *Return: no return
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (j <= (size-i))
			{
				_putchar(' ');
			}
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
