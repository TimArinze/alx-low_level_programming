#include "main.h"

void close_file(int fd);
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
	int input_fd, output_fd, istatus, ostatus;
	char buffer[1204];
	mode_t mode;

	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
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
	output_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (output_fd == -1)
	{
		dprintf(SE, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	do {
		istatus = read(input_fd, buffer, 1024);
		if (istatus == -1)
		{
			dprintf(SE, "Error:Can't read from file %s\n", argv[1]);
			exit(98);
		}
		ostatus = write(output_fd, buffer, 1024);
		if (ostatus == -1)
		{
			dprintf(SE, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	} while (istatus > 0);
	close_file(input_fd);
	close_file(output_fd);
	return (0);
}
