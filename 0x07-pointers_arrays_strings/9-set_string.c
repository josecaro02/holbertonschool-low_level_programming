#include "holberton.h"

/**
 *set_string - sets the value of a pointer to a char.
 *@s: string 1
 *@to: string 2
 *
 *Return: no return it's a void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
