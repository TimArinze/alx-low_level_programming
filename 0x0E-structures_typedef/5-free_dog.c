#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - the function
 * @d: the dog
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
