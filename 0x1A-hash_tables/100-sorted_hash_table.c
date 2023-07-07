#include "hash_tables.h"

/**
 * shash_table_create - a function that creates a sorted hash table
 *
 * @size: the size of the array
 *
 * Return: a pointer to the newly created hash table | NULL
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hash_table;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	hash_table = malloc(sizeof(shash_table_t));
	if (hash_table == NULL)
		return (NULL);

	hash_table->size = size;
	hash_table->array = malloc(size * sizeof(*hash_table->array));
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		hash_table->array[i] = NULL;
	hash_table->shead = NULL;
	hash_table->stail = NULL;

	return (hash_table);
}

/**
 * shash_table_set - adds an element to the hash table
 *
 * @ht: the hash table you want to add to or update the key/value of
 * @key: a given key
 * @value: the value associated with the key
 *
 * Return: 1 if it succeeded | 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *current, *new_node, *prev, *current2;

	if (!ht || !key || *key == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value), current->value = strdup(value);
			if (current->value == NULL)
				return (0);
			return (1);
		}
		current = current->next;
	}
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key), free(new_node);
		return (0);
	}
	prev = NULL, current2 = ht->shead;
	while (current2 != NULL && strcmp(current2->key, key) < 0)
		prev = current2, current2 = current2->snext;
	new_node->sprev = prev, new_node->snext = current2;

	if (prev == NULL)
		ht->shead = new_node;
	else
		prev->snext = new_node;
	if (current2 == NULL)
		ht->stail = new_node;
	else
		current2->sprev = new_node;
	new_node->next = ht->array[index], ht->array[index] = new_node;
	return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key
 *
 * @ht: the hash table
 * @key: a given key
 *
 * Return: the value associated with the element | NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *current;

	if (!ht || !key || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}

/**
 * shash_table_print - print the hash table using the sorted linked list
 *
 * @ht: the hash table
 *
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;
	int first_item = 1;

	if (!ht)
		return;

	printf("{");
	current = ht->shead;

	while (current)
	{
		if (!first_item)
			printf(", ");
		printf("'%s': '%s'", current->key, current->value);
		first_item = 0;

		current = current->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - print the hash tables key/value pairs in reverse
 *
 * @ht: the hash table
 *
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;
	int first_item = 1;

	if (!ht)
		return;

	printf("{");
	current = ht->stail;

	while (current != NULL)
	{
		if (!first_item)
			printf(", ");
		printf("'%s': '%s'", current->key, current->value);
		first_item = 0;

		current = current->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a hash table
 *
 * @ht: the hash table
 *
 * Return: void
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *current, *temp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			temp = current;
			current = current->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}

	free(ht->array);
	free(ht);
}
