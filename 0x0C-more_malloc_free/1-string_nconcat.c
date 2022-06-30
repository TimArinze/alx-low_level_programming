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
	unsigned int index;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";

	for (index = 0; s1[index]; index++)
		n++;
	m = malloc((n + 1) * sizeof(char));

	if (m == 0)
		return (NULL);
	n = 0;

	for (index = 0; s1[index]; index++)
		m[n++] = s1[index];

	for (index = 0; s2[index]; index++)
		m[n++] = s2[index];
	m[n] = '\0'
	return (m);
}
