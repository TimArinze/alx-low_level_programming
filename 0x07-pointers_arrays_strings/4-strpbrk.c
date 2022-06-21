#include "main.h"
/**
 * _strpbrk - function that searches a string
 * for any of a set of bytes
 * @s: string pointed to
 * @accept: string searched for
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] >= '\0'; i++)
	{
		for (j = 0; accept[j] >= '\0'; j++)
		{
			if (*s == *accept)
				return (*s);
		}
	}
	return ('\0');
}
