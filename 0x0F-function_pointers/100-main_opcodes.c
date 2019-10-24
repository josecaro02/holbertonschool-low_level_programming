#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints opcodes
 *@argc: number of entry arguments
 *@argv: vector with arguments
 *
 *Return: 0 sucess
 */
int main(int argc, char *argv[])
{
	int bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}
