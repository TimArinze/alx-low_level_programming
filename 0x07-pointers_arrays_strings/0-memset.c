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
	unsigned char *ptr = s;

	while (n-- > 0)
		(*ptr)++ = b;
	return (s);
}
