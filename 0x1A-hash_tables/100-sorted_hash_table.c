/*
 * File: 100-sorted_hash_table.c
 * Author: Chidiadi E. Nwosu
 */

#include "hash_tables.h"

/**
 * shash_table_create - creates a hash table.
 * @size: size of the array
 *
 * Return: a pointer to the newly created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table = NULL;
	unsigned long int i;

	table = malloc(sizeof(*table));
	if (!table)
		return (NULL);
	table->size = size;
	table->array = calloc(size, sizeof(shash_node_t *));
	if (!table->size)
		return (NULL);

	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	table->shead = NULL;
	table->stail = NULL;

	return (table);
}




/**
 * shash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int shash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}



/**
 * skey_index - gives index of a key
 * @key: the key
 * @size: size of the array of the hash table
 *
 * Return: index at which the key/value pair should
 *         be stored in the array of the hash table
 */
unsigned long int skey_index(const unsigned char *key, unsigned long int size)
{
	if (!key)
		exit(EXIT_FAILURE);
	return (hash_djb2(key) % size);
}



/**
 * shash_table_set - adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: the key
 * @value: value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new = NULL, *tmp = NULL, *tmp2 = NULL;
	unsigned long int index;

	if (!ht || !key)
		return (0);

	index = skey_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	return (insert(ht, index, (char *)key, (char *)value));
}


/**
 * snew_node - creates a hash table node
 * @key: key
 * @value: value associated with the key
 *
 * Return: the newly created node
 */
shash_node_t *snew_node(const char *key, const char *value)
{
	shash_node_t *new = NULL;

	if (!key || !value)
		return (NULL);

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;
	new->sprev = NULL;
	new->snext = NULL;

	return (new);
}



/**
 * insert - inserts a new node at index
 * @ht: the table
 * @index: index of the table
 * @key: the key, string
 * @value: the value corresponding to the key
 *
 * Return: 1 or 0 on success, -1 otherwise
 */
int insert(shash_table_t *ht, unsigned long int index, char *key, char *value)
{
	shash_node_t *new = NULL, *tmp = NULL, *tmp2 = NULL;

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
	new = snew_node(key, value);
	if (!new)
		return (0);
	new->next = tmp;
	tmp = new;

	tmp = ht->shead;
	if (tmp)
	{
		for (; tmp; tmp = tmp->snext)
		{
			if (strcmp(tmp->key, key) < 0)
			{
				new->snext = tmp;
				new->sprev = tmp->sprev;
				tmp->sprev->snext = new;
				tmp->sprev = new;
			}
			tmp2 = tmp;
		}
		ht->stail = tmp2;
	}
	else
	{
		tmp = new;
		ht->stail = new;
	}
	return (0);
}


char *shash_table_get(const shash_table_t *ht, const char *key)
{}


void shash_table_print(const shash_table_t *ht)
{}

void shash_table_print_rev(const shash_table_t *ht)
{}

void shash_table_delete(shash_table_t *ht)
{}
