#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#define SE STDERR_FILENO
/**
 * main - Entry function
 *
 * @argc: the number
 * @argv: array of string
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int input_fd, output_fd, istatus, ostatus;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(SE, "Usage: cp file_from file_to\n");
		/* SE is for standard error */
		exit(97);
	}
	input_fd = open(argv[1], O_RDONLY);
	if (input_fd == -1)
	{
		dprintf(SE, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	output_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 00664);
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
	}
	while (istatus > 0);


	istatus = close(input_fd);
	if (istatus == -1)
	{
		dprintf(SE, "Error: Can't close fd %d\n", input_fd);
		exit(100);
	}
	ostatus = close(output_fd);
	if (ostatus == -1)
	{
		dprintf(SE, "Error: Can't close fd %d\n", output_fd);
		exit(100);
	}

	return (0);
}
