#include "main.h"
/**
 * _memset - function fills the first n byte of the memory area pointed to
 * by s with the constant byte b
 * @s: pointer to the memory area
 * @b: the constant byte
 * @n: the n byte to be filled
 * Returns: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}

