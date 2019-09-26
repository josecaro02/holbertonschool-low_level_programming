#include <stdio.h>

/**
 *fizzbuzz -  prints numbers from  1 to 100, if the number is multiple of 3
 *prints Fizz, if the number is multiple of 5 prints Buss, otherwhise prints
 *the number
 *
 *Return: no return it is a void
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (((i % 3) == 0) && ((i % 5) == 0))
			printf("FizzBuzz");
		else if ((i % 3) == 0)
			printf("Fizz");
		else if ((i % 5) == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
