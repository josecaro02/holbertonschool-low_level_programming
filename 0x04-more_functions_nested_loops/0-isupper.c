#include "holberton.h"

/**
 *_isupper - evaluate if a letter is uppercase or lowercase
 *@c: int given by user
 *
 *Return: 1 if uppercase, 0 if lowercase
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
