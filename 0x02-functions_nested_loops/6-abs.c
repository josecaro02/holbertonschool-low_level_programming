#include "holberton.h"

/**
 * _abs - computes the absolute value of num
 *@num: take the value given by the user
 *
 *Return: num * -1 to get the posirive value otherwise only num
 */
int _abs(int num)
{
	int valor;

	if (num >= 0)
		valor = num;
	else
	{
		valor = num * -1;
		return (valor);
	}
	return (valor);
}
