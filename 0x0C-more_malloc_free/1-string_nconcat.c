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
	int i = 0, size1, size2;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";
	for (size2 = 0; s2[size2]; size2++)
		;
	for (size1 = 0; s1[size1]; size1++)
		;
	m = malloc((size1 + n + 1) * sizeof(char));

	if (m == 0)
		return (NULL);

	for (size1 = 0; s1[size1]; size1++)
		m[i++] = s1[size1];

	for (size2 = 0; s2[size2]; size2++)
		m[i++] = s2[size2];
	return (m);
}
