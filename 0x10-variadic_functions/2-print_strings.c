#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_strings - prints all the strings given by user
 *@separator: string separator between strings
 *@n: number of strings
 *
 *Return: nothing, it's a void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str_list;
	unsigned int i;
	char *text;

	va_start(str_list, n);
	for (i = 0; i < n; i++)
	{
		text  = va_arg(str_list, char*);
		if(text == NULL)
			printf("%p", text);
		else
			printf("%s", text);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str_list);
}
