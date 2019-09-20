#include <stdio.h>

/**
 *main - print 2 combinations of numbers without repetitions
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int a = 48;
	int b = 48;
	int c;
	int d;

	while (a < 58)
	{
		while (b < 58)
		{
			c = (b < 57) ? a : a + 1;
			d = (b < 57) ? b + 1 : 48;
			while (c < 58)
			{
				d = 48;
				while (d < 58)
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					if (a != 57 || b != 56 || c != 57 || d != 57)
					{
						putchar(',');
						putchar(' ');
					}
					d++;
				}
				c++;
			}
			b++;
		}
		b = 48;
		a++;
	}
	putchar('\n');
	return (0);
}
