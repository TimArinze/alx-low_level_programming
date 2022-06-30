#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - A function that concatenates all the arguments
 * of your program
 * @ac: argument counter
 * @av: argument vector
 * Return: char
 */
char *argstostr(int ac, char **av)
{
	unsigned int i, j, nc = 0, cmpt = 0;
	char *all_args;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++, nc++)
	{
		nc += strlen(av[i]);
	}
	all_args = malloc(nc + 1);
	if (all_args == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, cmpt++)
		{
			all_args[cmpt] = av[i][j];
		}
		all_args[cmpt] = '\n';
		cmpt++;
	}
	all_args[cmpt] = '\0';
	return (all_args);
}
