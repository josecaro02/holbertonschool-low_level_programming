#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

typedef struct op{
	int op;
	void (*f)(va_list);
}op_t;
void print_c(va_list a)
{
	printf("%c",va_arg(a, int));
}
void print_i(va_list a)
{
	printf("%d",va_arg(a, int));
}
void print_s(va_list a)
{
	printf("%s",va_arg(a, char *));
}
void print_f(va_list a)
{
	printf("%f",va_arg(a, double));
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
		{102, print_f}
	};
	i = 0;
		va_start(valist, format);
	while (format[i] != '\0')
	{
		k = 0;
		while(ops[k].op != '\0')
		{
			if (ops[k].op == format[i])
			{
				ops[k].f(valist);
				if(format[i + 1] != '\0')
					printf(", ");
			}
			k++;
		}
		i++;
	}
	printf("\n");
	va_end(valist);
}
