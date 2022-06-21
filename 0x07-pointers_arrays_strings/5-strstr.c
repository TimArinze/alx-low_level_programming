#include "main.h"
/**
 * _strstr - A function that locates a substring
 * \0 is not compared
 * @haystack: string
 * @needle: string
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *a;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
		}		break;
		if (*needle == '\0')
			break;
	}
	a = &haystack[i];
	return (a);
}
