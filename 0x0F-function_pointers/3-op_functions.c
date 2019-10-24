#include "3-calc.h"
/**
 *op_add - add two numbers
 *@a: number 1 given by user
 *@b: number 2 given by user
 *
 *Return: result of operation
 */
int op_add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}

/**
 *op_sub - difference of two numbers
 *@a: number 1 given by user
 *@b: number 2 given by user
 *
 *Return: result of operation
 */
int op_sub(int a, int b)
{
	int sub;

	sub = a - b;
	return (sub);
}

/**
 *op_mul - add two numbers
 *@a: number 1 given by user
 *@b: number 2 given by user
 *
 *Return: result of operation
 */
int op_mul(int a, int b)
{
	int mul;

	mul = a * b;
	return (mul);
}

/**
 *op_div - add two numbers
 *@a: number 1 given by user
 *@b: number 2 given by user
 *
 *Return: result of operation
 */
int op_div(int a, int b)
{
	int div;

	div = a / b;
	return (div);
}

/**
 *op_mod - add two numbers
 *@a: number 1 given by user
 *@b: number 2 given by user
 *
 *Return: result of operation
 */
int op_mod(int a, int b)
{
	int mod;

	mod = a % b;
	return (mod);
}
