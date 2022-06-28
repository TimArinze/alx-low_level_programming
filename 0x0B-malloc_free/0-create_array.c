#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars and initializes
 * it with a specific char
 * @size: size of memory allocation
 * @c: the char
 * Return: char
 */
char *create_array(unsigned int size, char c)
{

	char *m = malloc(size);

	if (size == 0|| m == 0)
		return (NULL);

	while (size--)
	{
		m[size] = c;
	}
	return (m);
}
