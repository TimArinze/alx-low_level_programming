#include "main.h"
/**
 * _strcpy - function that copies
 * the string pointed to by src
 * including \0 to the buffer pointed to by dest.
 * @dest: to be copied from
 * @src: copied to
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int n;
	int i;


	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
