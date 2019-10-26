#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_numbers - print numbers based in the separator
 *@separator: character separator in the arguments
 *@n: number of arguments
 *
 *Return: nothing it's a void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num_list;
	unsigned int i;

	va_start(num_list, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num_list, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(num_list);
}
