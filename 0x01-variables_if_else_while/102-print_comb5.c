#include <stdio.h>

/**
 *main - print 2 combinations of numbers without repetitions
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int a = 48;
	int b;
	int c;
	int d;

	b = a;
	while (a < 58)
	{
		while (b < 58)
		{
			if (b < 57)
				c = a;
			else
				c = a + 1;
			while (c < 58)
			{
				if (b < 57)
					d = b + 1;
				else
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
