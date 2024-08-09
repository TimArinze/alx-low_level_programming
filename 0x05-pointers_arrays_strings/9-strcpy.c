#include "main.h"
#include <stdio.h>
/**
 * _strcpy - function that copies string to another location in the memory
 * @dest: destination parameter
 * @src: source parameter
 * Return: a string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (*src != '\0')
	{
		dest[i] = *src;
		src++;
		i++;
	}
	return (dest);
}
