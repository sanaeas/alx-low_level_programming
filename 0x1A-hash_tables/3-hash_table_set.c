#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: the hash table you want to add to or update the key/value of
 * @key: a given key
 * @value: the value associated with the key
 *
 * Return: 1 if it succeeded | 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_n, *current;

	if (!ht || !key || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			/* Key already exists, update the value */
			free(current->value);
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
	}

	/* Key doesn't exist, add a new node */
	new_n = malloc(sizeof(*new_n));
	if (new_n == NULL)
		return (0);

	new_n->key = strdup(key);
	new_n->value = strdup(value);
	new_n->next = ht->array[index];
	ht->array[index] = new_n;

	return (1);
}
