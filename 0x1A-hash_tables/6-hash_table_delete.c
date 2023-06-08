/*
 * File: 6-hash_table_delete.c
 * Author: Chidiadi E. Nwosu
 */

#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp = NULL, *tmp2 = NULL;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			tmp2 = tmp;
			tmp = tmp->next;
			free(tmp2->key);
			free(tmp2->value);
			free(tmp2);
		}
	}
	free(ht->array);
	free(ht);
}
