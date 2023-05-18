/*
 * File: 7-insert_dnodeint.c
 * Author: Chidiadi E. Nwosu
 */

#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to the head node of the list
 * @idx: index of the list where the new node should be added, starts at 0
 * @n: value of the node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *prev, *tmp = *h;
	unsigned int i = 0;

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	while (tmp && (i < idx))
	{
		i++;
		prev = tmp->prev;
		tmp = tmp->next;
	}
	if (i != idx)
	{
		free(new);
		return (NULL);
	}
	if (i == 0)
	{
		new->next = *h;
		*h = new;
	}
	else if (!tmp)
	{
		new->prev = prev->next;
		prev->next->next = new;
	}
	else
	{
		prev = tmp->prev;
		new->prev = prev;
		new->next = tmp;
		tmp->prev = new;
		if (prev)
			prev->next = new;
	}
	return (new);
}
