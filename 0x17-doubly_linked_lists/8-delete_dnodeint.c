/*
 * File: 8-delete_dnodeint.c
 * Author: Chidiadi E. Nwosu
 */

#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 *                            of a dlistint_t linked list.
 * @h: pointer to the head node of the list
 * @index: index of the list where the new node should be deleted, starts at 0
 *
 * Return: the address of the new node, or NULL if it failed
 */
int delete_dnodeint_at_index(dlistint_t **h, unsigned int index)
{
	dlistint_t *tmp, *next, *prev;
	unsigned int i = 0;

	if (!(*h) || !h)
		return (-1);

	if (*h && !index)
	{
		tmp = *h;
		*h = (*h)->next;
		if (*h)
			(*h)->prev = NULL;
		free(tmp);
		return (1);
	}

	tmp = *h;
	while (tmp)
	{
		if (i == index)
			break;
		i++;
		tmp = tmp->next;
	}

	if (tmp && i == index)
	{
		prev = tmp->prev;
		next = tmp->next;

		if (prev)
			prev->next = next;
		if (next)
			next->prev = prev;

		free(tmp);
		return (1);
	}

	return (-1);
}
