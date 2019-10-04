#include "holberton.h"
#include <stdio.h>

/**
  *rev_string - reverse an string
 *@s: string given by user
 *
 *Return: char with the result
 */
void rev_string(char *s)
{
	int len, i;
	char *rev, *beg, value;

	rev = s;
	beg = s;
	len = 0;
	while (*rev != '\0')
	{
		rev++;
		len++;
	}
	rev--;
	for (i = 0; i < len / 2; i++)
	{
		value = *rev;
		*rev = *beg;
		*beg = value;
		beg++;
		rev--;
	}
}
/**
 *infinite_add -  add two numbers
 *rev_string - reverse an string
 *@n1: number1 given by user
 *@n2: number2 given by user
 *@r: size char of result
 *@size_r: size int of result
 *
 *Return: char with the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, pos_r, sizen1, sizen2, acum, num1, num2, add, addchar;

	pos_r = 0;
	acum = 0;
	for (i = 0; i < size_r; i++)
		r[i] = '\0';
	for (sizen1 = 0; (n1[sizen1] != '\0'); sizen1++)
	{}
	for (sizen2 = 0; n2[sizen2] != '\0'; sizen2++)
	{}
	j = sizen2;
	for (i = sizen1 - 1; i >= 0 ; i--)
	{
		num1 = n1[i] - '0';
		if (j - 1 >= 0)
		{
			num2 = n2[j - 1] - '0';
			j--;
		}
		else
			num2 = 0;
		add = num1 + num2 + acum;
		if (add > 9)
		{
			acum = 1;
			add = add % 10;
		}
		else
			acum = 0;
		addchar = add + '0';
		r[pos_r] = addchar;
		pos_r++;
	}
	if (acum == 1)
		r[pos_r] = 1 + '0';
	rev_string(r);
	if (pos_r + 1 >= size_r)
		return (0);
	else
		return (r);
}
