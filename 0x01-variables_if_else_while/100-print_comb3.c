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

	while (unidad < 58)
	{
		decimal = unidad + 1;
		while (decimal < 58)
		{
			putchar(unidad);
			putchar(decimal);
			if (decimal != 57 || unidad != 57)
			{
				putchar(',');
				putchar(' ');
			}
				decimal++;
		}
		unidad++;
	}

	putchar('\n');
	return (0);
}
