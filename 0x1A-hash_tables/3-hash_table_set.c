/*
 * File: 3-hash_table_set.c
 * Author: Chidiadi E. Nwosu
 */

#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: the key
 * @value: value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = NULL, *tmp = NULL;
	unsigned long int index;

	if (!ht || !key)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	tmp = ht->array[index];
	for (; tmp; tmp = tmp->next)
	{
		if (!strcmp(tmp->key, key))
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
	}

	new = new_node(key, value);
	if (!new)
		return (0);
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}


/**
 * new_node - creates a hash table node
 * @key: key
 * @value: value associated with the key
 *
 * Return: the newly created node
 */
hash_node_t *new_node(const char *key, const char *value)
{
	hash_node_t *new = NULL;

	if (!key || !value)
		return (NULL);

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;

	return new;
}
