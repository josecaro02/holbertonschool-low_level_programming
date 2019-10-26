#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 *print_c - function that prints a char
 *@a: valist with the entry arguments
 *
 *Return: nothing, it's a void
 */
void print_c(va_list a)
{
	printf("%c", va_arg(a, int));
}

/**
 *print_i - function that prints a char
 *@a: valist with the entry arguments
 *
 *Return: nothing, it's a void
 */
void print_i(va_list a)
{
	printf("%d", va_arg(a, int));
}

/**
 *print_s - function that prints a char
 *@a: valist with the entry arguments
 *
 *Return: nothing, it's a void
 */
void print_s(va_list a)
{
	char *text;

	text  = va_arg(a, char *);
	printf(text == NULL ? "%p" : "%s", text);
}

/**
 *print_f - function that prints a char
 *@a: valist with the entry arguments
 *
 *Return: nothing, it's a void
 */
void print_f(va_list a)
{
	printf("%f", va_arg(a, double));
}

/**
 *print_all - print all the input arguments
 *@format: format of the input arguments
 *
 *Return: nothing, it's a void
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	int i, k;
	op_t ops[] = {
		{99, print_c},
		{105, print_i},
		{115, print_s},
		{102, print_f},
		{0, NULL}
	};

	va_start(valist, format);
	i = 0;
	while (format[i] != '\0' && format)
	{
		k = 0;
		while (ops[k].op != '\0')
		{
			if (ops[k].op == format[i])
			{
				ops[k].f(valist);
				if (format[i + 1] != '\0')
					printf(", ");
			}
			k++;
		}
		i++;
	}
	va_end(valist);
	printf("\n");
}
