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
	dlistint_t *tmp, *new, *prev;
	unsigned int i = 0;

	tmp = *h;
	while (tmp)
	{
		if (i == idx)
			break;
		i++;
		tmp = tmp->next;
	}

	if (i == idx)
	{
		new = malloc(sizeof(*new));
		if (!new)
			return (NULL);
		new->n = n;

		if (tmp)
		{
			prev = tmp->prev;
			new->prev = prev;
			new->next = tmp;
			tmp->prev = new;

			if (prev)
				prev->next = new;
		}
		else
		{
			new->prev = NULL;
			new->next = NULL;
			*h = new;
		}
		return (new);
	}
	return (NULL);
}
