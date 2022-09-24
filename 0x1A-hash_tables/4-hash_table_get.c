#include "hash_tables.h"
/**
 * hash_table_get - get item from hash table
 * @ht: hash table
 * @key: the key to use to search for value
 * Return: a string or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index, i;
	hash_node_t *current;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			return (ht->array[i]->value);
		}
	}

	current = ht->array[index];

	while (current && current->next)
	{
		current = current->next;

		if (strcmp(current->key, key) == 0)
			return (current->value);
	}

	return (NULL);
}
