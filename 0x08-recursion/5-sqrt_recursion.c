#include "holberton.h"

/**
 *sqrt_h - recursive function
 *@x: number given
 *@y: number to iterate
 *
 *Return: answer
 */
int sqrt_h(int x, int y)
{
	if (y * y == x)
		return (y);
	else if (y * y > x)
		return (-1);
	else
		return (sqrt_h(x, (y + 1)));
}
/**
 *_sqrt_recursion - returns square root of any number
 *@n: number given by user
 *
 *Return: sqrt of the number
 */
int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	else if (n < 0)
		return (-1);
	else
		return (sqrt_h(n, 0));
}
