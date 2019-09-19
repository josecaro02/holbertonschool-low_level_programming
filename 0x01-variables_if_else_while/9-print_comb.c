#include <stdio.h>

/**
 *main - print base 16 numbers with putchar
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int decimal = 48;

	while (decimal < 58)
	{
		putchar(decimal);
		if (decimal < 57)
		{
			putchar(',');
			putchar(' ');
		}
		decimal++;
	}

	putchar('\n');
	return (0);
}
