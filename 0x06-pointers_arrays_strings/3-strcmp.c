#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strcmp - function that compares two strings
 * @s1: strings to be compared
 * @s2: strings to be compared
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	for (; *s1 == *s2; s1++, s2++)
		if (*s1 == '\0')
			return (0);
	return (*s1 - *s2);
}
