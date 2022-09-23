#include "hash_tables.h"
/**
 * hash_table_create - A function that creates a hash table
 * @size: Size of the array
 * Return: A pointer to the newly created hash table
 * Return NULL if anything wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;

	if (size == 0)
		return (NULL);

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);

	new->size = size;
	new->array = calloc(size, sizeof(hash_node_t *));
	if (new->array == NULL)
	{
		free(new);
		return (NULL);
	}
	return (new);
}
