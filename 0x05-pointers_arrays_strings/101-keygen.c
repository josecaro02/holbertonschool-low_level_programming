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
	srand(time(NULL));
	while (checker > 0)
	{
		if (checker >= 65 && checker <= 90)
		{
			value = rand()%(90-65)+65;
			checker = checker - value;
			if(checker > 0 || checker < 0)
				checker = checker + value;
			else
			{
				printf("%c", value);
			}
		}
		else
		{
			value = rand()%(90-65)+65;
			checker = checker - value;
			printf("%c", value);
		}
	}
	return (0);
}
