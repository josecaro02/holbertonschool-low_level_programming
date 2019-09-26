#include "holberton.h"

/**
 *print_number - print any number with putchar
 *@n: number given by user
 *
 *Return: no return it is a void
 */
void print_number(int n)
{
	unsigned int digito, res_digito;
	unsigned int i;

	if (n < 0)
	{
		n = n * (-1);
		_putchar('-');
	}
	res_digito = n;
	digito = 1;
	do {
		digito = digito * 10;
		res_digito = n / digito;
	} while (res_digito != 0);
	digito = digito / 10;
	for (i = digito; i >= 1; i = i / 10)
	{
		_putchar(n / i + '0');
		n = n % i;
	}
}
