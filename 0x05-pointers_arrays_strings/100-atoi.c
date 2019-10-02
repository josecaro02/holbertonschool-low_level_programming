#include "holberton.h"
#include <stdio.h>

/**
 *_atoi - convert a string to an integer.
 *
 *Return: int with the number of the string
 */
int _atoi(char *s)
{
	int dig_n, sign, var_dig, var_salida;
	char cara;

	dig_n = 0;
	sign = 1;
	var_dig = 0;
	var_salida = 0;
	while(*s != '\0')
	{
		cara = *s;
		if( cara == '-')
			sign = sign * -1;
		if((cara >= '0') && (cara <= '9'))
		{
			dig_n = dig_n * 10 + cara - '0';
			var_dig = 1;
			var_salida = 1;
		}
		else
			var_salida = 0;
		if( var_dig ==1 && var_salida ==0)
			break;
		s++;
	}
	return (dig_n * sign);
}
