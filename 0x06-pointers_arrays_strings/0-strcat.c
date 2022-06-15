#include "main.h"
/**
 * _strcat - function that concatenates
 * two strings
 * @dest: string to be return
 * @src: String to be copied from
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; src == '\0'; i++)
		dest[i] = '\0';
	return (dest);
