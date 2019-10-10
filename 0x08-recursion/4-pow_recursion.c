#include "holberton.h"

/**
 *_pow_recursion - returns result of pow
 *@x: firs number
 *@y: exponent
 *
 *Return: result of pow x to y
 */
int _pow_recursion(int x, int y)
{
	if (y == 1)
		return (x);
	else if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, (y - 1)));
}
