#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function that allocates memory to array
 * @nmemb: element
 * @size: of byte
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	char *m;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = malloc(size * nmemb);
	if (m == 0)
		return (NULL);
	else
	{
		for (i = 0; i < (size * nmemb); i++)
			m[i] = 0;
		return (m);
	}
}
