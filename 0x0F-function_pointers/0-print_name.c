#include "function_pointers.h"
/**
 *print_name - calls a function that prints a name
 *@name: name of the person
 *@f: function to call
 *
 *Return: nothing, it's a void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
