#include "holberton.h"

/**
 *set_bit - sets a bit to 1
 *@n: number target
 *@index: index of the binary number to change to 1
 *
 *Return: 1 if works -1 else
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int *) - 1)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
