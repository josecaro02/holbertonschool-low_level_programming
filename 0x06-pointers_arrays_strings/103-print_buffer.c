#include "holberton.h"
#include <stdio.h>

/**
 *print_buffer - prints a buffer
 *@b: string with the buffer
 *@size: tamaño del buffer
 *
 *Return: nothing it's a void function
 */
void print_buffer(char *b, int size)
{
	int i, j, salto10, res;

	salto10 = 1;
	res = !(size % 10) ? 0 : 10 - (size % 10);
	for (i = 0; i < size + res; i++)
	{
		if (salto10 % 10 == 1)
			printf("%08x: ", salto10 - 1);
		if (i < size)
			printf("%02x", b[i]);
		else
			printf("  ");
		if (salto10 % 2 == 0)
			printf(" ");
		if (salto10 % 10 == 0)
		{
			for (j = i - 9; j <= i; j++)
			{
				if (j < size)
				{
					if (b[j] >= 32 && b[j] <= 126)
					{
						printf("%c", b[j]);
					}
					else
						printf("%c", '.');
				}
			}
			printf("\n");
		}
		salto10++;
	}
	if (size <= 0)
		printf("\n");
}
