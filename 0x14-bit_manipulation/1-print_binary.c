#include "holberton.h"
#include <stdio.h>

/**
 *print_binary - prints any number in binary
 *@n: number to print
 *
 *Return: nothing, it's a void
 */
void print_binary(unsigned long int n)
{
	unsigned long int size;
	int size_bin;
	char num;

	size_bin = 0;
	size = n;
	while (size != 0)
	{
		size = size >> 1;
		size_bin++;
	}
	if(size_bin != 0)
		size_bin = size_bin - 1;
	for(;size_bin != -1; size_bin--)
	{
		num = ((n >> size_bin) & 1) + '0';
		_putchar(num);
	}
}
