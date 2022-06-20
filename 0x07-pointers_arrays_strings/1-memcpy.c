#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: parameter
 * @src: parameter
 * @n: number
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++, n--)
	{
		dest[i] = src[i];
	}
	return (dest);
}
