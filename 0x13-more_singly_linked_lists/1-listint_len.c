/*
 * File: 1-listint_len.c
 * Author: Chidiadi E. Nwosu
 */

#include "lists.h"

/**
 * listint_len - return number of elements in a linked listint_t list
 * @h: pointer to the head node
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h)
	{
		while (h)
		{
			h = h->next;
			count += 1;
		}
	}

	return (count);
}
