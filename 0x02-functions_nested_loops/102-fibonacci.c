#include <stdio.h>
#include "holberton.h"

/**
 *main - print 50 first numbers of fibonacci
 */
void main(void)
{
	int i;
	long  f1 = 0;
	long  f2 = 1;
	long fibo = 0;

	for (i = 1; i <= 50; i++)
	{
		fibo = f2 + f1;
		if (i != 50)
			printf("%li, ", fibo);
		else
			printf("%li", fibo);
		f1 = f2;
		f2 = fibo;
	}
	printf("\n");
}
