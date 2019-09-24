#include <stdio.h>
#include "holberton.h"

/**
 *main - print sum of even fibonacci numbers
 *
 *Return: 0 (Success)
 */
int main(void)
{
	long f1;
	long f2;
	long fibo;
	long even;


	f1 = 0;
	f2 = 1;
	even = 0;
	fibo = 0;
	while (fibo <= 4000000)
	{
		fibo = f2 + f1;
		if ((fibo <= 4000000) && (fibo % 2 == 0))
			even = even + fibo;
		f1 = f2;
		f2 = fibo;
	}
	printf("%ld\n", even);

	return (0);
}
