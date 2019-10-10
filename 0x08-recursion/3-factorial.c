#include "holberton.h"

/**
 *factorial - prints the factorial of any num
 *@n: number given by user
 *
 *Return: factorial of n
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
	{
		return (n * factorial(n - 1));
	}
}
