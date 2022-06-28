#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function that returns a pointer to a new string
 * @str: string
 * Return: char
 */
char *_strdup(char *str)
{
	int len;
	char *copy;

	len = strlen(str) + 1;
	copy = malloc(len);

	if (copy == NULL)
		return (NULL);
	return (char *);
