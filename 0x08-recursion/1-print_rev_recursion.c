#include "holberton.h"

/**
 *_print_rev_recursion - prints a string in reverse
 *@s: string given by user
 *
 *Return: nothing it's a void
 */
void _print_rev_recursion(char *s)
{
	if(*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
