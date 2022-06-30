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
	int i = 0, size;

	if (s2 == NULL)
		s2 = "\0";
	if (s1 == NULL)
		s1 = "\0";
	for (n = 0; s2[n]; n++)
		;
	for (size = 0; s1[size]; size++)
		;
	m = malloc((size + n) * sizeof(char) + 1);
	if (m == 0)
		return (NULL);
	for (n = 0; s1[n]; n++)
		m[i++] = s1[size];
	for (size = 0; s2[size]; size++)
		m[i++] = s2[size];
	return (m);
}
