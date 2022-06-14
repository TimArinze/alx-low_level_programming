#include <stdio.h>
#include "main.h"
/**
 * _atoi - function that converts
 * a string to an interger
 * @s: string parameter
 * Return: 0
 */
int _atoi(char *s)
{
	int a = 0, i;

	for (i = 0; s[i] != '\0'; ++i)
		a = a * 10 + s[i] - '0';
	return (a);
}
