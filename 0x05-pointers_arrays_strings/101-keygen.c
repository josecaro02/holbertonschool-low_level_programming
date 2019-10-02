#include "holberton.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
 *main - prints a correct password for crackme
 *
 *Return: nothing it's a void;
 */
int main(void)
{
	int value, checker;

	checker = 2772;
	value = 0;
	srand(time(0));
	while (checker != 0)
	{

		value = rand()%(125) + 1;
		if(checker - value == 0)
		{
			printf("%c", value);
			checker = checker - value;
		}
		else if (checker - value > 0)
		{
			checker = checker-value;
			printf("%c", value);
		}
	}
	return (0);
}
