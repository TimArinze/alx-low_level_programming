#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * new_dog - new dog
 * @name: name of the new dog
 * @age: the age
 * @owner: owner of the dog
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len_name, len_owner;
	dog_t *bingo;
	/* the new dog name is bing*/

	bingo = malloc(sizeof(dog_t));
	if (bingo == NULL)
		return (NULL);

	len_name = strlen(name);
	bingo->name = malloc(sizeof(char) * len_name + 1);

	if (bingo->name == NULL)
	{
		free(bingo);
		return (NULL);
	}
	bingo->name = strcpy(bingo->name, name);

	len_owner = strlen(owner);
	bingo->owner = malloc(sizeof(char) * len_owner + 1);
	if (bingo->owner == NULL)
	{
		free(bingo->name);
		free(bingo);
		return (NULL);
	}
	bingo->owner = strcpy(bingo->owner, owner);

	bingo->age = age;

	return (bingo);
}
