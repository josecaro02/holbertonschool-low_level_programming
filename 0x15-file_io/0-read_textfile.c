#include "holberton.h"

/**
 *read_textfile - read a file and prints the letters given
 *@filename: name of the file to read
 *@letters: quantity of letters to print
 *
 *Return: size of the letters to print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t read_x;

	if (filename == NULL)
		return (0);
	buf = malloc(letters + 1);
	if (buf == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	read_x = read(fd, buf, letters);
	if (read_x < 0)
		return (0);
	write(1, buf, read_x);
	free(buf);
	return (read_x);
}
