#include "holberton.h"

/**
 *_isdigit - evaluate if a char is digit or not
 *@c: int given by user
 *
 *Return: 1 if c is a digit, otherwise 0
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
