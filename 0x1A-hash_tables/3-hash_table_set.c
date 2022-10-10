#include "hash_tables.h"
/**
 * hash_table_set - A function that adds an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 if it succeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new;

	if (ht == NULL || key == NULL)
		return (0);

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new;
		return (1);
	}
	if (ht->array[index] != NULL)
	{
		/**if (ht->array[index]->key == new->key)
		{
			free(ht->array[index]);
			ht->array[index] = new;
		}
		else**/
		new->next = (ht->array[index])->next;
		ht->array[index] = new;'
	}
	return (1);
}
