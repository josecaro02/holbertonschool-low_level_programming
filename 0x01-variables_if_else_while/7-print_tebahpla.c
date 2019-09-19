#include <stdio.h>

/**
 *main - prints reverse alphabet with putchar
 *
 *Return= Always 0 (Success)
 */
int main(void)
{
	int alpha = 122;

	while (alpha > 96)
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}
