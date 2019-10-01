#include "holberton.h"

/**
 *swap_int - swaps the values of two integers.
 *@a: int given by user
 *@b: int giveb by user
 *
 *Return: nothing it is a void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*b = c;
	*a = *b;
}
