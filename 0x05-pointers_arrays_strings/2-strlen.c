#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: string to be counted
 * Return: int
 */
int _strlen(char *s)
{
	int a;
	a = 0;

	while (s[a] != '\0')
		a++;
	return (a);
}
