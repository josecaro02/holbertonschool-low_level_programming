#include <stdio.h>

/**
 *main  - prints all base 10 numbers
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	while (n<10)
	{
		printf("%d",n);
		n++;
	}
	putchar('\n');
	return (0);
}
