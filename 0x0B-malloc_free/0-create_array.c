#include "main.h"
#include <stddef.h>
/**
 * create_array - function that creates an array of chars and initializes
 * it with a specific char
 * @size: size of memory allocation
 * @c: the char
 * Return: char
 */
char *create_array(unsigned int size, char c)
{

	size = sizeof(char) * 1;
	if (size == 0)
		return (NULL);
	else
		return (c);
}
