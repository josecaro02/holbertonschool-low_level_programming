#ifndef VAR_FUNC
#define VAR_FUNC

#include <stdarg.h>

/**
 *struct op - struct op
 *
 *@op: entry char
 *@f: string of the function
 */
typedef struct op
{
	char *op;
	void (*f)(va_list valist);
} op_t;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VAR_FUNC */
