#include "main.h"
#include <stdlib.h>
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
	if (!(copy == malloc((unsigned int)len)))
		return (NULL);
	memcpy(copy, str, len);
	return (copy);
}
