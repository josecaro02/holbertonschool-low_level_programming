#include <stdio.h>

/**
 *main - print base 16 numbers with putchar
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int decimal;
	int unidad = 48;
	int centena;

	while (unidad < 58)
	{
		decimal = unidad + 1;
		while (decimal < 58)
		{
			centena = decimal + 1;
			while (centena < 58)
			{
				putchar(unidad);
				putchar(decimal);
				putchar(centena);
				if (decimal != 56 || unidad != 55 || centena != 57)
				{
					putchar(',');
					putchar(' ');
				}
				centena++;
			}
			decimal++;
		}
		unidad++;
	}

	putchar('\n');
	return (0);
}
