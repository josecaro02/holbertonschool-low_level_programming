#include "holberton.h"

/**
 *flip_bits - count how many bits are need to convert numb n to numb m
 *@n: number 1
 *@m: number 2
 *
 *Return: quantity of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flips;

	flips = 0;
	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			flips++;
		n = n >> 1;
		m = m >> 1;
	}
	return (flips);
}
