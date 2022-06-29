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
	int i = 0, size1, size2;
	char *m;

	if (s2 == NULL)
		s2 = '\0';
	if (s1 == NULL)
		s1 = '\0';
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	for (size2 = 0; s2[size2]; size2++)
		;
	for (size1 = 0; s1[size1]; size1++)
		;
	m = malloc((size1 + size2) * sizeof(char) + 1);
	if (m == 0)
		return (NULL);
	for (size1 = 0; s1[size1]; size1++)
		m[i++] = s1[size1];
	for (size2 = 0; s2[size2]; size2++)
		m[i++] = s2[size2];
	return (m);
}
