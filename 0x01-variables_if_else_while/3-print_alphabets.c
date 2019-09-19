#include <stdio.h>

/**
 *main - prints alphabet in lowecase and uppercase
 *
 *Return: Always (Success)
 */
int main(void)
{
	char a = 'a';
	char A = 'A';

	while (a <= 'z')
	{	putchar(a);
		a++;
	}
	while (A <= 'Z')
	{
		putchar(A);
		A++;
	}
	putchar('\n');
	return (0);
}
