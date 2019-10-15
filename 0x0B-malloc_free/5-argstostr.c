#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *argstostr - contatenate argv
 *@ac: counter of argumets
 *@av: vector with arguments
 *
 *Return: pointer with the string
 */
char *argstostr(int ac, char **av)
{
	int i, j, size_str, sum, cnt;
	char *str;

	size_str = 0;
	sum = 0;
	cnt = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			size_str++;
		}
		sum = sum + size_str;
		size_str = 0;
	}
	sum = sum + ac + 1;
	str = malloc(sum * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[cnt] = av[i][j];
			cnt++;
		}
		str[cnt] = '\n';
		cnt++;
	}
	return (str);
}
