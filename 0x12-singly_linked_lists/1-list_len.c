/*
 * File: 1-list_len.c
 * Author: Chidiadi E. Nwosu
 */

#include "lists.h"

/**
 * list_len - function that prints all the elements of a list_t list.
 * @h: list_t head node pointer
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	for (; h; count++)
		h = h->next;

	return (count);
}
