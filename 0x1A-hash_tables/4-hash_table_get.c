/*
 * File: 4-hash_table_get.c
 * Author: Chidiadi E. Nwosu
 */

#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 *
 * Return: value associated with the element,
 *         or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp = NULL;
	unsigned long int index;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	for (; tmp; tmp = tmp->next)
	{
		if (!strcmp(tmp->key, key))
			return (tmp->value);
	}

	return (NULL);
}
