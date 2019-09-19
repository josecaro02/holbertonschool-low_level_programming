#include <stdio.h>

/**
 *main - print base 16 numbers with putchar
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int decimal = 48;
	int hexa = 97;

	while (decimal < 58)
	{
		putchar(decimal);
		decimal++;
	}
	while (hexa < 103)
	{
		putchar(hexa);
		hexa++;
	}
	putchar('\n');
	return (0);
}
