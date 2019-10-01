#include "holberton.h"

/**
 *print_array - prints n elements of an array of integers,
 *followed by a new line.
 *@a: int given by user
 *@n: size of array given by user
 *
 *Return: nothing it's a void
 */
void print_array(int *a, int n)
{
	int i;
	int val;

	for (i = 0; i < n; i++)
	{
		val = *a;
		printf("%d", val);
		a++;
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");

}
