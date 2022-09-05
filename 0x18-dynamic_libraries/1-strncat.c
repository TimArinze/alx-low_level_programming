#include "main.h"
#include <string.h>
/**
 * _strncat - a function that concatenates two strings
 * @dest: string to be returned
 * @src: string to be copied from
 * @n: bytes allocation
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, dest_len;

	dest_len = strlen(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
