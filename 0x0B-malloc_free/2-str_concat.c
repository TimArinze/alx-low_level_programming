#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, size;

	if (s2 == NULL)
		return (NULL);

	for (size = 0; s1[size] != '\0'; size++)
		;
	s1 = malloc(size * sizeof(*s2) + 1);
	if (s1 == 0)
		return (NULL);
	for (i = 0; i < size && s2[i] != '\0'; i++)
		s1[size + i] = s2[i];
	s1[size + i] = '\0';
	return (s1);
}
