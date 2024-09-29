#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: the counts
 * @av: array of arguments
 * Return: a pointer to a new string or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, wordcount, sumlen;
	long unsigned int k;
	char *words;

	if (ac == 0 || av == NULL)
		return NULL;
	for (i = 0; i < ac; i++)
	{
		sumlen = strlen(av[i]) + sumlen;
	}
	words = malloc((sizeof(char) * sumlen) + ac + 1);
	wordcount = 0;
	for (j = 0; j < ac; j++ )
	{
		for (k = 0; av[j][k] != '\0'; k++)
		{
			words[wordcount] = av[j][k];
			wordcount++;
		}
		words[wordcount] = '\n';
		wordcount++;
	}
	words[wordcount + 1] = '\0';
	return words;
}
