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
	unsigned int nro, i;

	if (n < 0)
	{
		n = n * (-1);
		_putchar('-');
	}
	nro = n;
	res_digito = nro;
	digito = 1;
	while (res_digito != 0)
	{
		digito = digito * 10;
		res_digito = nro / digito;
	}
	digito = digito / 10;
	if (nro == 0)
		_putchar('0');
	else
	{
		for (i = digito; i >= 1; i = i / 10)
		{
			_putchar(nro / i + '0');
			nro = nro % i;
		}
	}
}
