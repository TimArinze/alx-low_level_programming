#include "main.h"
#include <stdlib.h>
/**
 * _realloc - function that reallocates a memory block
 * using malloc and free
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 * Return: a pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *m;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	else if (ptr == NULL)
	{
		m = malloc(new_size);
		return (m);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		m = malloc(new_size);
		if (m == 0)
			return (NULL);
		for (i = 0; i < old_size; i++)
			*((char *)m + i) = *((char *)ptr + i);
		free(ptr);
		return (m);
	}
}
