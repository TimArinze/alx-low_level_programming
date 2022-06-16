#include "main.h"
/**
 * _strncpy - a function that copies a string
 * @dest: string returned
 * @src: String copied
 * @n: memory allocation
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; src[i] == '\0'; i++)
		dest[i] = '\0';
	return (dest);
}
