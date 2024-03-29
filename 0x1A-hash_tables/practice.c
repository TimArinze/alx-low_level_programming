#include "hash_tables.h"
#define TABLE_SIZE 100000

unsigned int hash(const char *key)
{
	unsigned long int value = 0;
	unsigned int i = 0;
	unsigned int key_len = strlen(key);

	//do several rounds of multiplication
	for (; i < key_len; ++i)
		value = value * 37 + key[i];
	// make sure value is 0 <= value < TABLE_SIZE
	value = value % TABLE_SIZE;

	return value;
}

typedef struct entry_s
{
	char *key;
	char *value;
	struct entry_s *next;
} entry_t;

typedef struct
{
	entry_t **entries;
} ht_t;

entry_t *ht_pair(const char *key, const char *value)
{
	entry_t *entry = malloc(sizeof(entry));
	entry->key = malloc(strlen(key) + 1);
	entry->value = malloc(strlen(value) + 1);
	//copy the key and value in place
	strcpy(entry->key, key);
	strcpy(entry->value, value);

	//next starts out null but may be set later on
	entry->next = NULL;

	return entry;
}

ht_t *ht_create(void)
{
	// allocate table
	ht_t *hashtable = malloc(sizeof(ht_t));

	// allocate table entries
	hashtable->entries = malloc(sizeof(entry_t *) * TABLE_SIZE);

	// set each to null (needed for proper operation)
	int i = 0;
	for (; i < TABLE_SIZE; ++i)
	{
		hashtable->entries[i] = NULL;
	}
	return hashtable;
}

void ht_set(ht_t *hashtable, const char *key, const char *value)
{
	unsigned int slot = hash(key);

	entry_t *entry = hashtable->entries[slot];
	// no entry means slot empty, insert immediately
	if (entry == NULL)
	{
		hashtable->entries[slot] = ht_pair(key, value);
		return;
	}
	entry_t *prev;
	//walk through each entry until either the end is
	//reached or a matching key is found
	while (entry != NULL)
	{
		//check key
		if (strcmp(entry->key, key) == 0)
		{
			//match found, replace value
			free(entry->value);
			entry->value = malloc(strlen(value) + 1);
			strcpy(entry->value, value);
			return;
		}
		//walk to next
		prev = entry;
		entry = prev->next;
	}
	//end of chain reached without a match, add new
	prev->next = ht_pair(key, value);
}

char *ht_get(ht_t *hashtable, const char *key)
{
	unsigned int slot = hash(key);

	//try to find a valid slot
	entry_t *entry = hashtable->entries[slot];

	//no slot means no entry
	if (entry == NULL)
	{
		return NULL;
	}
	// walk through each entry in the slot, which could just be a single thing
	while (entry != NULL)
	{
		//return value if found
		if (strcmp(entry->key, key) == 0)
		{
			return entry->value;
		}

		//proceed to next key if available
		entry = entry->next;
	}
	//reaching here means there were >= 1 entries but no key match
	return NULL;
}

void ht_dump(ht_t *hashtable)
{
	for (int i = 0; i < TABLE_SIZE; ++i)
	{
		entry_t *entry = hashtable->entries[i];

		if (entry == NULL)
			continue;
		printf("slot[%4d]: ", i);

		for (;;)
		{
			printf("%s=%s", entry->key, entry->value);

			if (entry->next == NULL)
				break;
			entry = entry->next;
		}
		printf("\n");
	}
}

int main(int argc, char **argv)
{
	ht_t *ht = ht_create();

	ht_set(ht, "name1", "em");
	ht_set(ht, "name2", "russian");
	ht_set(ht, "name3", "doge");

	ht_dump(ht);

	return 0;
}
