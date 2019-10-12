#include "holberton.h"
int _atoi(char *s);
int calc_coins(int cash, int coins);

/**
 *main - prints the minimum number of coins to make change
 *for an amount of money.
 *@argc: count entry arguments
 *@argv: vector with arguments
 *
 *Return: 0 succes
 */
int main(int argc, char *argv[])
{
	int coins, cash;

	if (argc == 2)
	{
		cash = _atoi(argv[1]);
		if (cash <= 0)
		{
			printf("0\n");
			return (0);
		}
		else
		{
			coins = calc_coins(cash, 0);
			printf("%d\n", coins);
			return (0);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
/**
 *calc_coins - calc how many coins need to cash back
 *@cash: money to divide
 *@coins: number of coins to give back
 *
 *Return: the number of coins needed
 */
int calc_coins(int cash, int coins)
{
	if (cash / 25 != 0)
	{
		if (cash % 25 == 0)
			return (coins + (cash / 25));
		else
			return (calc_coins((cash % 25), (coins + (cash / 25))));
	}
	else if (cash / 10 != 0)
	{
		if (cash % 10 == 0)
			return (coins + (cash / 10));
		else
			return (calc_coins((cash % 10), (coins + (cash / 10))));

	}
	else if (cash / 5 != 0)
	{
		if (cash % 5 == 0)
			return (coins + (cash / 5));
		else
			return (calc_coins((cash % 5), (coins + (cash / 5))));
	}
	else if (cash / 2 != 0)
	{
		if (cash % 2 == 0)
			return (coins + (cash / 2));
		else
			return (calc_coins((cash % 2), (coins + (cash / 2))));
	}
	else
		return (coins + cash);
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
