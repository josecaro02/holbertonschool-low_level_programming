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
	int i, space, word;

	space = 0;
	word = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			space = 0;
			continue;
		}
		else if (space == 0)
		{
			word++;
			space = 1;
		}
	}
	return (word);
}
/**
 *strtow - converts an string into a array oy strings
 *@str: string to convert
 *
 *Return: array of strings
 */
char *pal[2];
char **strtow(char *str)
{
	int i, j, k, pos_word, words, c_letter;
	char **palabra;

	pal[0]="hola";
	pal[1]="jose";
	c_letter = pos_word = words = k = 0;
	words = q_words(str);
	printf("num palabras: %d\n",words);
	palabra = malloc((words + 1) * sizeof(char *));
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			j = i;
			while (str[j] != ' ')
			{
				c_letter++;
				j++;
			}
			palabra[pos_word] = malloc(c_letter * sizeof(char));
			j = i;
			while (str[j] != ' ')
			{
				palabra[pos_word][k] = str[j];
				k++;
				j++;
			}
			palabra[pos_word][k] = '\0';
			i = j - 1;
			k = 0;
			pos_word++;
			c_letter = 0;
		}
	}
	palabra[words] = NULL;
	return (pal);
}
