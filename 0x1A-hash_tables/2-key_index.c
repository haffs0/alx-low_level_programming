#include "hash_tables.h"
/**
 * key_index - find key index
 * @key: the key to convert to index
 * @size: size of the array
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_key;

	hash_key = hash_djb2(key);

	return (hash_key % size);
}
