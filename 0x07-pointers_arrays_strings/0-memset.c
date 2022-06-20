#include "main.h"
/**
 * _memset - function that fills memory with constant byte
 * @s: string pointer
 * @b: char
 * @n: the number of bytes that fill the space
 * Return: char( *s)
 */
char *_memset(char *s, char b, unsigned int n)
{


	if (s == NULL)
		return (NULL);


	while (*s && n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (s);
}
