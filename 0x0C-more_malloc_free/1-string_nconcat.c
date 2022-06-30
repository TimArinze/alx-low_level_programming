#include "main.h"
#include <stdlib.h>
#include <string.h>
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
	int i = 0, j = 0;

	if (s2 == NULL)
		s2 = "\0";
	if (s1 == NULL)
		s1 = "\0";

	if (n < strlen(s2))
		m = malloc(strlen(s1) + n * sizeof(char) + 1);
	else
		m = malloc(strlen(s1) + strlen(s2) + 1);

	if (m == 0)
		return (NULL);

	for (i = 0; s1[i]; i++)
		m[i] = s1[i];

	for (j = 0; j < n && s2[j]; j++, i++)
		m[i] = s2[j];
	m[i] = '\0';
	return (m);
}
