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
	int i;

	for (i = 0; n > 0; n--, i++)
		s[i] = b;
	return (s);
}
