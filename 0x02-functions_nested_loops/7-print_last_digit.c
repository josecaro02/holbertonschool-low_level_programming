#include "holberton.h"

/**
 *print_last_digit - module of a number to get last digit
 *@num: take the value given by user
 *
 *Return: ld with the last digit
 */
int print_last_digit(int num)
{
	int ld;

	ld = num % 10;
	if (ld < 0)
		ld = ld * -1;
	_putchar(ld + '0');
	return (ld);
}
