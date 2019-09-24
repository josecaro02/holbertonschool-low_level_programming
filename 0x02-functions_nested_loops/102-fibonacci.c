#include "holberton.h"
#include <stdio.h>

/**
 *main - print 50 first numbers of fibonacci
 *
 *Return: 0 no value
 */
int main(void)
{
	int i;
	long  f1;
	long  f2;
	long fibo = 0;

	f1 = 0;
	f2 = 1;
	for (i = 0; i < 50; i++)
	{
		fibo = f2 + f1;
		if (i != 49)
			printf("%ld, ", fibo);
		else
			printf("%ld", fibo);
		f1 = f2;
		f2 = fibo;
	}
	printf("\n");
	return (0);
}
