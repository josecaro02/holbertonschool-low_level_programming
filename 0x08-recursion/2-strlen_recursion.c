#include "holberton.h"

/**
 *_strlen_recursion - calculate the lenght of a recursion
 *@s: string given by user
 *
 *Return: lenght of recursion
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));

}
