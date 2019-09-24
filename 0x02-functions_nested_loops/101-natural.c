#include <stdio.h>

/**
 *main - print the sumatory of multiple numbers
 *
 *Return: 0
 */
int main(void)
{
	int number = 0;
	int i, j;

	for (i = 3 ; i < 1024 ; i++)
	{
		for (j = 3; j <= i; j++)
		{
			if ((j % 3 == 0) || (j % 5 == 0))
			{
				number = number + j;
			}
		}
		if (i == 1023)
			printf("%d\n", number);
		number = 0;
	}
	return (0);
}
