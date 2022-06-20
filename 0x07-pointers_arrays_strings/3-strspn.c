#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * before the null value
 * @s: string
 * @accept: number of btyes
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	char *a = s;
	char *b;

	while (*s)
	{
		for (b = accept; *b; b++)
		{
			if (*s == *b)
				break;
		}
		if (*b == '\0')
			break;
		s++;
	}
	return (s - a);
}
