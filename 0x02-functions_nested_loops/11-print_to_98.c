#include <stdio.h>
#include "holberton.h"

/**
 *print_to_98 - print al the numbers of difference to 98
 *@num: number given by user
 *
 *Return: always 0
 */
int print_to_98(int num)
{
	if (num < 98)
	{
		while (num <= 98)
		{
			printf("%d", num);
			if (num != 98)
			{
				printf(", ");
			}
			num++;
		}

	}
	else if (num > 98)
	{
		while (num >= 98)
		{
			printf("%d", num);
			if (num != 98)
			{
				printf(", ");
			}
			num--;
		}
	}
	else
		printf("98");

	printf("\n");

	return (0);
}
