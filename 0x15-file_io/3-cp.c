#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 *main - copies the content of a file into another file
 *@argv: entry arguments
 *@argc: quantity of arguments
 *
 *Return: nothing, it's a void
 */
int main(int argc, char *argv[])
{
	int fd, fw;
	char buf[1024];
	ssize_t read_num, write_num, close_num, close_new;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fw = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fw == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	while ((read_num = read(fd, buf, 1024)) > 0)
	{
		write_num = write(fw, buf, read_num);
		if (write_num == -1)
		{
			dprintf(1, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	close_new = close(fw);
	close_num = close(fd);
	if (close_num == -1 || close_new == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd -1\n");
		exit(100);
	}
	return (0);
}
