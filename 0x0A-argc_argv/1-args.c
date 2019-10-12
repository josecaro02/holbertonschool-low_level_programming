#include "holberton.h"

/**
 *main -  prints number of parameters passed into it
 *@argc: argument counter
 *@argv: argument vector
 *
 *Return: 0, it's a void
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
