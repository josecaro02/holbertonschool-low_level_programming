#include "holberton.h"

/**
 *print_sign - check if a num es positive or negative and prints sign
 *@num: take the value of the number given by the user
 *
 *Return: 1 if positive or -1 if negative
 */
int print_sign(int num)
{
	if (num > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (num == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}

}
