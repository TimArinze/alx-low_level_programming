#include "main.h"
#include <string.h>
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
	int i, dest_len;

	dest_len = strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
