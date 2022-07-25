#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>
/**
 * create_file - function that creates a file
 * @filename: for the file name
 * @text_content: is NULL
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i, filestatus;


	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 00600);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		filestatus = write(fd, text_content, i);
		if (filestatus == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
