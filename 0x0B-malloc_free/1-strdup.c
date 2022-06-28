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
	int new_len, size;
	char *copy;

	if (str == NULL)
		return (NULL);
	for (size = 0; str[size] != 0; size++);

	copy = malloc(size * sizeof(*str) + 1);
	if (copy == 0)
		return (NULL);
	else
		for (new_len = 0; new_len < size; new_len++)
			copy[new_len] = str[size];
	return (copy);
}
