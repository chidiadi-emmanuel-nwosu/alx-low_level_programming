/*
 * File: 0-print_dlistint.c
 * Author: Chidiadi E. Nwosu
 */

#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to the head node of the list
 *
 * Return: number of elements in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%i\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
