#include "holberton.h"
/**
 *print_times_table - print the times table of any number
 *@n: value given by user
 */
void print_times_table(int n)
{
	int time = 0, table = 0, mul;

	if (n > 0 && n < 15)
	{
		while (table <= n)
		{
			while (time <= n)
			{
				mul = table * time;
				if (mul > 99)
				{
					_putchar(mul / 100 + '0');
					_putchar((mul - 100) / 10 + '0');
					_putchar((mul - 100) % 10 + '0');
				}
				else if (mul < 10)
				{
					if (time != 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(mul + '0');
				}
				else
				{	_putchar(' ');
					_putchar(mul / 10 + '0');
					_putchar(mul % 10 + '0');
				}
				if (time != n)
				{	_putchar(',');
					_putchar(' ');
				}
				time++;
			}
			time = 0;
			_putchar('\n');
			table++;
		}
	}
}
