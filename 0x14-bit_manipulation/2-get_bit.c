#include "holberton.h"
/**
 *get_bit - get the value of the index a binary number
 *@n: number in decimal
 *@index: position of the binray number
 *
 *Return: number in the given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	unsigned int size_bin;
	unsigned long int size;

	size = n;
	size_bin = 0;
	while (size != 0)
	{
		size = size >> 1;
		size_bin++;
	}
	if (size_bin != 0)
		size_bin = size_bin - 1;
	if (size_bin < index)
		return (-1);
	bit = ((n >> index) & 1);
	return (bit);
}
