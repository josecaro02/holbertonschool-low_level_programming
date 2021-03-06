#include "holberton.h"
int _atoi(char *s);

/**
 *main - multiplies two numbers
 *@argc: count entry arguments
 *@argv: vector with argouments
 *
 *Return: 0;
 */
int main(int argc, char *argv[])
{
	int num1, num2, suma;

	if (argc == 3)
	{
		num1 = _atoi(argv[1]);
		num2 = _atoi(argv[2]);
		suma = num1 * num2;
		printf("%d\n", suma);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

/**
 *_atoi - convert a string to an integer.
 *@s: string given by user
 *
 *Return: int with the number of the string
 */
int _atoi(char *s)
{
	unsigned int dig_n;
	int sign, var_dig, var_salida;
	char cara;

	dig_n = 0;
	sign = 1;
	var_dig = 0;
	var_salida = 0;
	while (*s != '\0')
	{
		cara = *s;
		if (cara == '-')
			sign = sign * -1;
		if ((cara >= '0') && (cara <= '9'))
		{
			dig_n = dig_n * 10 + cara - '0';
			var_dig = 1;
			var_salida = 1;
		}
		else
			var_salida = 0;
		if (var_dig == 1 && var_salida == 0)
			break;
		s++;
	}
	return (dig_n * sign);
}
