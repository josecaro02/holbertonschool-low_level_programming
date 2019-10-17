#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
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

	if (str == NULL || (strcmp(str, "") == 0))
		return (NULL);
	words = c_letter = pos_word = 0;
	words = q_words(str);
	if (words == 0)
		return (NULL);
	palabra = malloc((words + 1) * sizeof(char *));
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			j = i;
			while (str[j] != ' ' && str[j] != '\0')
			{
				c_letter++;
				j++;
			}
			palabra[pos_word] = malloc((c_letter + 1) * sizeof(char));
			j = i;
			k = 0;
			while (str[j] != ' ' && str[j] != '\0')
			{
				palabra[pos_word][k] = str[j];
				k++;
				j++;
			}
			palabra[pos_word][c_letter] = '\0';
			i = j - 1;
			pos_word++;
			c_letter = 0;
		}
	}
	palabra[words] = NULL;
	return (pal);
}
