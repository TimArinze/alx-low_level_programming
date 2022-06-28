#include "main.h"
/**
 * create_array - function that creates an array of chars and initializes
 * it with a specific char
 * @size: size of memory allocation
 * @c: the char
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char p;

	size = sizeof(char) * 1;
	p = &c;
	if (size == 0)
		return (NULL);
	else
		return (*p);
}
