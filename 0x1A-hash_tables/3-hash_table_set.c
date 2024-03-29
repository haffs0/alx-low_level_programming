#include "hash_tables.h"
/**
 * hash_table_set - insert into hash table
 * @ht: hash table
 * @key: a key in hash table
 * @value: value of key in hash table
 * Return: 1 on success or 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	char *value_copy;
	unsigned long int index, i;

	if (ht == NULL || !ht->size || !strlen(key))
		return (0);
	value_copy = strdup((char *)value);
	if (value_copy == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_copy;
			return (1);
		}
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(value_copy);
		return (0);
	}
	node->key = strdup((char *)key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = value_copy;
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
