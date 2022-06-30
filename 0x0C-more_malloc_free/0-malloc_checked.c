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
	if (b == 0 || m == 0)
		return (98);
	else
		return (m);
}
