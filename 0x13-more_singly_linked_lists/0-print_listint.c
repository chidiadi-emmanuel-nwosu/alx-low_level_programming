/*
 * File: 0-print_listint.c
 * Author: Chidiadi E. Nwosu
 */

#include "lists.h"

/**
 * print_listint - prints all the elements of listint_t list
 * @h: pointer to the head node
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h)
	{
		while (h)
		{
			printf("%i\n", h->n);
			h = h->next;
			count += 1;
		}
	}

	return (count);
}
