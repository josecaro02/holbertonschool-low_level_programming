#include "holberton.h"

/**
prime_n - iterate numbers
 *@x: base number
 *@y: iterate number
 *
 *Return: 1 if number is prime, 0 if it isn't
 */
int prime_n(int x, int y)
{
	if (x % y != 0 && y < x)
		return (prime_n (x, y + 1));
	else if (((x % y) == 0) && (y < x))
		return (0);
	else
		return (1);
}
/**
 *is_prime_number - calc if a number is prime or not
 *@n: number given by user
 *
 *Return: 1 if is prime, 0  if isn't
 */
int is_prime_number(int n)
{
	if(n <= 1)
		return (0);
	else
		return (prime_n(n, 2));
}
