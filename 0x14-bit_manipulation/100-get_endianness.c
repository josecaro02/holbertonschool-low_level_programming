#include "holberton.h"

/**
 *get_endianness - checks if a pc is little or big endian
 *
 *Return - return 0 if big endian or 1 if little
 */
int get_endianness(void)
{
	int endian;
	unsigned int x;

	x = 1;
	endian = (int) (((char *)&x)[0]);
	return (endian);
}
