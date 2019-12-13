#include "holberton.h"

/**
 *append_text_to_file - append a text to existed file
 *@filename: file name to add the thext
 *@text_content: text to add to the file
 *
 *Return: 1 success, -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, c;
	ssize_t write_num;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY, 0600);
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
