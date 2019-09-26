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
