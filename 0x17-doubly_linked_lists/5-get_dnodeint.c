/*
 * File: 4-free_dlistint.c
 * Author: Chidiadi E. Nwosu
 */

#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t list.
 * @head: pointer to the head node of the list
 * @index: index of the node starting from zero
 *
 * Return: list value at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int i = 0;

	if (!tmp)
		return (NULL);
	if (!index)
		return (head);

	while (tmp)
	{
		tmp = tmp->next;
		i++;

		if (i == index)
			break;
	}

	if (i != index)
		return (NULL);

	return (tmp);
}
