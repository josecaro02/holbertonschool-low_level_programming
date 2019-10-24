#include "3-calc.h"
#include <stdio.h>
#include <string.h>
/**
 *get_op_func - search for the correct function based in char
 *@s: char with the operator
 *
 *Return: pointer with the correct function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if (*ops[i].op == *s)
		{
			return (ops[i].f);
		}
		i++;
	}
		printf("Error\n");
		exit(99);
}
