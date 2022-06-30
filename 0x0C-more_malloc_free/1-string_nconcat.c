#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: string1
 * @s2: string2
 * @n: int
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *m;
	int i = 0, j = 0, size;

	if (s2 == NULL)
		s2 = "\0";
	if (s1 == NULL)
		s1 = "\0";
	for (i = 0; i < n; i++)
		;
	for (j = 0; s1[j]; j++)
		;
	m = malloc((i + j) * sizeof(char) + 1);
	if (m == 0)
		return (NULL);
	for (i = 0; i < n && s1[i]; i++)
		m[i] = s1[i];
	for (j = 0; s2[j]; j++, i++)
		m[i] = s2[j];
	m[i] = '\0';
	return (m);
}
