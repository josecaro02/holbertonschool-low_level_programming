#include "holberton.h"
int _atoi(char *s);
int check_char(char *s);

/**
 *main - adding two numbers
 *@argc: count entry arguments
 *@argv: vector with arguments
 *
 *Return: prints result of a multiplication
 */
int main(int argc, char *argv[])
{
	int i, check, sum, number;

	sum = 0;
	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			check = check_char(argv[i]);
			if (check == 1)
			{
				number = _atoi(argv[i]);
				sum = sum + number;
			}
			else
			{
				printf("Error\n");
				break;
			}
		}
		if (i == argc)
		{
			printf("%d\n", sum);
			return (0);
		}
		else
			return (1);
	}
}

/**
 *check_char - checks if an arguments has a char
 *@s: string with the argument
 *
 *Return: 1 if the argument only has numbers, 0 if not
 */
int check_char(char *s)
{
	if (*s == '\0')
		return (1);
	else if (*s <= 47 || *s >= 58)
		return (0);
	else
		return (check_char(s + 1));
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
