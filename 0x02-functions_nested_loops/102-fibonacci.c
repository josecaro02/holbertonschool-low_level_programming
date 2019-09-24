#include <stdio.h>
#include "holberton.h"

/**
 *main - print 50 first numbers of fibonacci
 */
void main(void)
{
	int i;
	long  f1 = 1;
	long  f2 = 2;
	long fibo = 0;

	printf("%li, ", f1);
	printf("%li, ", f2);

	for (i = 3; i <= 50; i++)
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
