/*
 * File: 1-dlistint_len.c
 * Author: Chidiadi E. Nwosu
 */

#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a dlistint_t list.
 * @h: pointer to the head node of the list
 *
 * Return: number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	for (; h; h = h->next)
		count++;

	return (count);
}
