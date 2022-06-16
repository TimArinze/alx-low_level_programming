#include "main.h"
#include <stdlib.h>
/**
 * _strcmp - function that compares two strings
 * @s1: strings to be compared
 * @s2: strings to be compared
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int x, y;

	x = atoi(s1);
	y = atoi(s2);

	return (x - y);
}
