#include "holberton.h"

/**
 *print_number - print any number with putchar
 *@n: number given by user
 *
 *Return: no return it is a void
 */
void print_number(int n)
{
	unsigned int digito, res_digito, i, nro;

	n < 0 ? _putchar('-') : 1;
	n = (n < 0) ? n * -1 : n * 1;
	nro = n;
	res_digito = nro;
	digito = 1;
	while (res_digito >= 10)
	{
		digito = digito * 10;
		res_digito = nro / digito;
	}
	nro = n;
	for (i = digito; i >= 1; i = i / 10)
	{
		_putchar(nro / i + '0');
		nro = nro % i;
	}
}
