/*
 * File: 0-print_list.c
 * Author: Chidiadi E. Nwosu
 */

#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: list_t head node pointer
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	for (; h; count++)
	{
		if (h->str)
			printf("[%i] %s\n", h->len, h->str);
		else
			printf("[%i] %s\n", 0, "(nil)");
		h = h->next;
	}
	return (count);
}
