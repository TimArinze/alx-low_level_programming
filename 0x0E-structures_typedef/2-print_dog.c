#include "dog.h"
#include <stdio.h>
/**
 * print_dog - function that prints struct dog
 * struct dog - the struct
 * @d: the instant
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "nil");
		printf("Age: %f\n", d->age ? d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "nil");
	}
}
