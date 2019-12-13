#include "holberton.h"

/**
 *clear_bit - sets a bit to 1
 *@n: number target
 *@index: index of the binary number to change to 1
 *
 *Return: 1 if works -1 else
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int bit;

	if (index > sizeof(n) * 8 - 1)
		return (-1);
	bit = (*n >> index) & 1;
	if (bit == 1)
		*n = *n - (1 << index);
	return (1);
}
