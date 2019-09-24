#include "holberton.h"

/**
 *main - prints the string holberton
 *
 *Return: always 0
 */
int main(void)
{
	char holberton[] = "Holberton";
	int loop = 9;
	int i = 0;

	while (i < loop)
	{
		_putchar(holberton[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
