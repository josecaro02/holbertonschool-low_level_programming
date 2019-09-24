#include "holberton.h"

/**
 *_islower - Test if int l is in lowercase, otherwise print 0
 *@l: l is a num giving by the user
 *
 *Return: _islower is 1 if l is lowercase , 0 if uppercase
 */
int _islower(int l)
{
	if (l > 96 && 123 < l)
		return (1);
	else
		return (0);
}
