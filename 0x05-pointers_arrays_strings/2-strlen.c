#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: string to be counted
 * Return: int
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a]; a++);
	return (a);
}
