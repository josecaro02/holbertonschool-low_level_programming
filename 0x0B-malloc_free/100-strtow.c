#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *q_words - calc the quantity of words
 *@str: string to calculate
 *
 *Return: int with the quantity of words
 */
int q_words(char *str)
{
	int i, space, words;

	space = 0;
	words = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			space = 0;
			continue;
		}
		else if (space == 0)
		{
			words++;
			space = 1;
		}
	}
	return (words);
}
/**
 *strtow - converts an string into a array oy strings
 *@str: string to convert
 *
 *Return: array of strings
 */
char **strtow(char *str)
{
	int i, j, k, pos_word, words, c_letter;
	char **palabra;

	words = c_letter = pos_word = 0;
	words = q_words(str);
	palabra = malloc((words + 1) * sizeof(char *));
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			continue;
		else
		{
			j = i;
			while (str[j] != ' ')
			{
				c_letter++;
				j++;
			}
			palabra[pos_word] = malloc(c_letter * sizeof(char));
			j = i;
			k = 0;
			while (str[j] != ' ')
			{
				palabra[pos_word][k] = str[j];
				k++;
				j++;
			}
			i = j;
			pos_word++;
			c_letter = 0;
		}
	}
	palabra[words] = NULL;
	return (palabra);
}
