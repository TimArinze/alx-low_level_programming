#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - A function that allocates memory
 * @b: int
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	int *m;

	m = malloc(sizeof(b));
	if (m == 0)
		exit(98);
	return (m);
}
