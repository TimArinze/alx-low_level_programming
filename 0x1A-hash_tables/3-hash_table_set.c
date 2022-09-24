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
	hash_node_t *node;
	hash_node_t *new_node;

	if (ht == NULL || *key == '\n' || *value == '\n')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	if (node == NULL)
	{
		new_node = create_new_node(key, value);
		if (new_node == NULL)
			return (0);
		ht->array[index] = new_node;
		return (1);
	}
	/* if key exists, replace value */
	while (node != NULL)
	{
		if (strcmp(key, node->key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}
	/* if key doesn't exist, create new node */
	new_node = create_new_node(key, value);
	if (new_node == NULL)
		return (0);

	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}

/**
 * create_new_node - create a new node
 * @key: is the key. key can not be an empty string
 * @value: value of the key
 * value must not be duplicated. value can be an empty string
 * Return: pointer to the new node
 */
hash_node_t *create_new_node(const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (NULL);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;

	return (new);
}
