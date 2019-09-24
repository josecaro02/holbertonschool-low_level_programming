#include "holberton.h"

/**
 *times_table - prints the 9 times table
 */
void times_table(void)
{
	int nine = 0;
	int time = 0;
	int mul;

	while (nine < 10)
	{
		while (time < 10)
		{
			mul = nine * time;
			if (mul < 10)
			{
				_putchar(' ');
				_putchar(mul + '0');
			}
			else
			{
				_putchar(mul / 10 + '0');
				_putchar(mul % 10 + '0');
			}
			if (time != 9)
			{	_putchar(',');
				_putchar(32);
			}
			time++;
		}
		_putchar('\n');
		time = 0;
		nine++;
	}

}
