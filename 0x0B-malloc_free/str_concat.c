#include <stdlib.h>
#include <string.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: the pointer to the new allocated place
 */
char *str_concat(char *s1, char *s2)
{
	int x, y, i;
	char *concat;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	x = strlen(s1);
	y = strlen(s2);

	concat = malloc(x + y + 1);
	i = 0;
	while (*s1 != '\0')
	{
		concat[i] = *s1;
		s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		concat[i] = *s2;
		s2++;
		i++;
	}
	concat[i] = '\0';

	return (concat);
}
