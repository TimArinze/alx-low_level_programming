#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - the function
 * struct dog - the struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * @d: struct
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
