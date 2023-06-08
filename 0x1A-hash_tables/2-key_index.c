/*
 * File: 2-key_index.c
 * Author: Chidiadi E. Nwosu
 */

#include "hash_tables.h"

/**
 * key_index - gives index of a key
 * @key: the key
 * @size: size of the array of the hash table
 *
 * Return: index at which the key/value pair should
 *         be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (!key)
		exit(EXIT_FAILURE);
	return (hash_djb2(key) % size);
}
