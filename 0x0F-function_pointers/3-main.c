#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 *main- man function of the calculator
 *@argc: number of entry arguments
 *@argv: vetor with the arguments
 *
 *Return: 0 success
 */
int main(int argc, char *argv[])
{
	int num1, num2, res;
	int (*op)(int, int);

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (argc < 4 || argc > 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	op = get_op_func(argv[2]);
	res = op(num1, num2);
	printf("%d\n", res);
	return (0);
}
