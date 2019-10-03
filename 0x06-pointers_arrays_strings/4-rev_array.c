#include "holberton.h"

/**
 *reverse_array - reverse an array of numbers
 *@a: array of numbers
 *@n: size of the array
 *
 *Return: no return it's a void
 */
void reverse_array(int *a, int n)
{
	int i, cp_int;

	for (i = 0; i < n / 2; i++)
	{
		cp_int = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = cp_int;
	}
}
