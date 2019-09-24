#include "holberton.h"

/**
 *jack_bauer - print every minute of the day
 */
void jack_bauer(void)
{
	char h = 0;
	char m = 0;

	while (h < 24)
	{
		while (m < 60)
		{
			_putchar(h / 10 + '0');
			_putchar(h % 10 + '0');
			_putchar(':');
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			_putchar('\n');
			m++;
		}
		m = 0;
		h++;
	}
}
