#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: string to be counted
 * Return: int
 */
int _strlen(char *s)
{
	int a, length;

	a = 0;
	while (a < (s[a] == '\0'))
	{
		length = a;
		++a;
	}
	return (length);
}
