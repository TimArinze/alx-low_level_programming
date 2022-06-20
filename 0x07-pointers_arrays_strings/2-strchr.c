#include "main.h"
/**
 * _strchr - function that locates a
 * character in a string
 * @s: string
 * @c: char
 * Return: char
 */
char *_strchr(char *s, char c)
{
	int i;

	if (*s == c)
		return (NULL);

	for (i = 0; *s != '\0'; ++i, ++s)
		if (*s == c)
			return (s);
}
