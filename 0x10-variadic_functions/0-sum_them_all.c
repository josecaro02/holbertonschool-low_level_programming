#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *sum_them_all - sum all the numbers given
 *@n: quantity of numbers to add
 *
 *Return: sum of numbers, if n is equal to 0 return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	int sum;

	sum = 0;
	va_start(valist, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(valist, int);
	}
	va_end(valist);
	return (sum);
}
