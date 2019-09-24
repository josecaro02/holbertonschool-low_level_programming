#include <stdio.h>
#include "holberton"

/**
 *main - print even fibonacci numbers less 4'000.000
 *
 *Return: 0 no value
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
	printf("%ld", even);
	printf("\n");

	return (0);
}
