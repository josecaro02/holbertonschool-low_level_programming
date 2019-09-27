#include <stdio.h>

/**
 *main - print largest prime factor of a num
 *
 *Return: 0 success
 */
int main(void)
{
	int i;
	long number, res;

	i = 2;
	number = 612852475143;
	res = number;
	while (res != 1)
	{
		if ((res % i) == 0)
			res = res / i;
		else
			i++;
	}
		printf("%d\n", i);
	return (0);
}
