#include "holberton.h"

/**
 *create_file - create a file and inster text
 *@filename: name of the file to create
 *@text_content: text to add in the file
 *
 *Return: 1 success, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fd, c;
	ssize_t write_num;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	for (c = 0; text_content[c] != '\0'; c++)
	{}
	write_num = write(fd, text_content, c);
	close(fd);
	if (write_num == -1)
		return (-1);
	return (1);
}
