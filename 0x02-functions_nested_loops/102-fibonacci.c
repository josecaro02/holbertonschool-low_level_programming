#include <stdio.h>
#include "holberton.h"

/**
 *main - print 50 first numbers of fibonacci
 */
void main(void)
{
	int i;
	long long int f1 = 1;
	long long int f2 = 2;
	long long int fibo = 0;

	printf ("%lli, ",f1);
	printf ("%lli, ",f2);

	for (i=3; i<= 50; i++)
	{
		fibo = f2 + f1;
		if (i != 50)
			printf ("%lli, ", fibo);
		else
			printf("%lli", fibo);
		f1 = f2;
		f2 = fibo;
	}
	printf("\n");
}
