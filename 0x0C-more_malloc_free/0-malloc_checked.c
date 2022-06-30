#include "main.h"
/**
 * malloc_checked - A function that allocates memory
 * @b: int
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	b = malloc(sizeof(int));
	if (b == 0)
		return (98);
	else
		return (b);
}
