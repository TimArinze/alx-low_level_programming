#include "main.h"

/**
 * close_file - to close the file
 *
 * @fd: file descriptor to be closed
 */
void close_file(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(SE, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - Entry function
 * @argc: the number
 * @argv: array of string
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int input_fd, output_fd, x, istatus, ostatus;
	char buffer[BUFSIZ];

	if (argc != 3)
	{
		dprintf(SE, "Usage: cp file_from file_to\n");
		exit(97);
	}
	input_fd = open(argv[1], O_RDONLY);
	if (input_fd == -1)
	{
		dprintf(SE, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	output_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((x = read(input_fd, buffer, BUFSIZ)) > 0)
	{
		if (output_fd < 0 || write(output_fd, buffer, x) != x)
		{
			dprintf(SE, "Error: Can't write to %s\n", argv[2]);
			close(input_fd);
			exit(99);
		}
	}
	if (x < 0)
	{
		dprintf(SE, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	istatus = close(input_fd);
	ostatus = close(output_fd);
	if (istatus < 0 || ostatus < 0)
	{
		if (istatus < 0)
			dprintf(SE, "Error: Can't close fd %d\n", input_fd);
		if (ostatus < 0)
			dprintf(SE, "Error: Can't close fd %d\n", output_fd);
		exit(100);
	}
	return (0);
}
