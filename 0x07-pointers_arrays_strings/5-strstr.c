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
	char *b, *a;

	while (*haystack)
	{
		for (b = needle; *b; b++)
		{
			if (*haystack == *b)
				break;
		}
		if (*b == '\0')
			break;
		haystack++;
	}
	a = &haystack
	return (a);
}
