#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table
 *
 * @ht: the hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *current;
	int first_item;

	if (!ht)
		return;

	printf("{");
	first_item = 1;
	for (idx = 0; idx < ht->size; idx++)
	{
		current = ht->array[idx];
		while (current)
		{
			if (!first_item)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			first_item = 0;

			current = current->next;
		}
	}
	printf("}\n");
}
