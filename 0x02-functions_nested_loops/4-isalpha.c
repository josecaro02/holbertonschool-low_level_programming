#include "holberton.h"

/**
 *_isalpha - check if a character is a leeter
 *@l: takes a value gived by user
 *
 *Return: 1 if letter 0 other cases
 */
int _isalpha(int l)
{
	if (l < 96 && l < 123)
		return (1);
	else if (l < 64 && l < 91)
		return (1);
	else
		return (0);
}
