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
	for (;; ++s)
	{
		if (*s == c)
			return (s);
		if (*s == '\0')
			return (NULL);
	}
}
