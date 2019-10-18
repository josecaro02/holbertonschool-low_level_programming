#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

void _puts_recursion(char *s);
int check_char(char *s);
void rev_string(char *s);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
int size_str(char *str);
int _strcmp(char *s1, char *s2);
char *_memcpy(char *dest,  char *src, unsigned int n);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

/**
 *main - multiplies two numbers
 *@argc: count of arguments
 *@argv: vector of arguments
 *
 *Return: nothing, it's a void
 */
int main(int argc, char *argv[])
{
	char *mul;
	char *add;
	int sz_mul, sz2, i;
	char uno[] = "1";

	if (argc != 3 || check_char(argv[1]) == 0 || check_char(argv[2]) == 0)
	{
		_puts_recursion("Error");
		exit(98);
	}
	else
	{
		sz_mul = size_str(argv[1]);
		sz2 = size_str(argv[2]);
		printf("size arg1: %d, size2= %d\n",sz_mul, sz2);
		mul = malloc((sz_mul + 1) * sizeof(char));
		add = malloc((sz2 + 1) * sizeof(char));
		for (i = 0; i < sz2; i++)
		{
			if(i < (sz2 - 1))
				add[i] = '0';
			else
				add[i] = '1';
		}
		add[sz2] = '\0';
		printf("add = %s\n",add);
		printf("mul= %s\n", mul);
		mul = infinite_add(argv[1], uno, mul, 2);
		printf("result: %s\n", mul);
		_puts_recursion("funciona");
	}
		return (0);
}

/**
 *_strcmp - compare two strings
 *@s1: first string
 *@s2: string to compare
 *
 *Return: 0 if strings are the same, otherwise strings are different
 */
int _strcmp(char *s1, char *s2)
{
	int compare, i;

	for (i = 0; s2[i] != '\0'; i++)
	{
		compare = s1[i] - s2[i];
		if (compare != 0)
			break;
	}
	return (compare);
}

/**
 *size_str - calc size of a string
 *@str: string to calculate
 *
 *Return: int with size of the string
 */
int size_str(char *str)
{
	int sz;

	for (sz = 0; str[sz] != '\0'; sz++)
	{}
	return (sz);
}
/**
 *_puts_recursion - prints a string followed by a new line
 *@s: string given by user
 *
 *Return: nothing, it's a void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
/**
 *check_char - checks if an arguments has a char
 *@s: string with the argument
 *
 *Return: 1 if the argument only has numbers, 0 if not
 */
int check_char(char *s)
{
	if (*s == '\0')
		return (1);
	else if (*s <= 47 || *s >= 58)
		return (0);
	else
		return (check_char(s + 1));
}
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
/**
 *_memcpy - copies memory area
 *@dest: string destiny
 *@src: string to copy
 *@n: number of characters to change
 *
 *Return: string destino
 */

char *_memcpy(char *dest,  char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = src[i];
	}
	return (dest);
}

/**
 *_realloc - realloc a pointer
 *@ptr: pointer to realloc memory
 *@old_size: old size of the pointer
 *@new_size: new size of the pointer
 *
 *Return: pointer with the new allocation memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr_cpy;
	unsigned int i, size;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		else
			return (ptr);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	ptr_cpy = malloc(new_size);
	if (ptr_cpy == NULL)
		return (NULL);
	if (new_size < old_size)
		size = new_size;
	else
		size = old_size;
	for (i = 0; i < size; i++)
	{
		_memcpy(ptr_cpy, ptr, size);
	}
	free(ptr);
	return (ptr_cpy);

}
