#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function that duplicates a string.
 * @str: string to be dubplicated
 * Return: returns a pointer to a new string that is a duplicate of str
 */
char *_strdup(char *str)
{
	char *dup;
	int i;

	if (str == NULL)
		return (NULL);
	dup = malloc(strlen(str) + 1);
	if (dup == 0)
		return NULL;
	for (i = 0; *str != '\0'; i++, str++)
		dup[i] = *str;
	return (dup);
}
