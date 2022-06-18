#include <stdlib.h>
#include "main.h"
/**
 * infinite_add - a function that adds
 * two string numbers and returns string
 * @n1: number 1
 * @n2: number 2
 * @r: buffer that the function will use to store the result
 * @size_r: the result
 * Return: char
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	char a;
	int x, y, z;

	x = atoi(*n1);
	y = atoi(*n2);
	z = x + y;
	a = itoa(z, *r, size_z);
	return (a);
}
