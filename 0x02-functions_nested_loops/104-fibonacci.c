#include "holberton.h"
#include <stdio.h>

/**
 *main - print firts 100 fibonacci numbers
 *
´*Return: 0 no value
*/
int main(void)
{
	int i;
	unsigned long f1;
	unsigned long f2;
	unsigned long fibo = 0;
	unsigned long head1, head2, tail1, tail2, cat1, cat2;

	f1 = 0;
	f2 = 1;
	for (i=0; i < 99; i++)
	{
		if (i <= 91)
		{
			fibo = f2 + f1;
			cat2 = fibo;
			cat1 = f2;

			head2 = cat2 / 1000;
			tail2 = cat2 % 1000;
			head1 = cat1 / 1000;
			tail1 = cat1 % 1000;
			printf("%lu, ", fibo);
			f1 = f2;
			f2 = fibo;
		 }
		else
		{
			cat2 = head2 + head1;
			cat1 = tail2 + tail1;
			cat2 = cat2 + (cat1/1000);
			cat1 = cat1 % 1000;
			printf(i==98 ? "%lu%03lu" : "%lu%03lu, ", cat2, cat1);
			head1 = head2;
			head2 = cat2;
			tail1 = tail2;
			tail2 = cat1;
		}
	}
	printf("\n");
	return (0);
}
