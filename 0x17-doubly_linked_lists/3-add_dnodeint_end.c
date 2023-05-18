/*
 * File: 3-add_dnodeint_end.c
 * Author: Chidiadi E. Nwosu
 */

#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to the head node of the list
 * @n: value of the newly created list
 *
 * Return: address of the newly list or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	dlistint_t *tmp = *head;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (!(*head))
	{
		new->next = *head;
		*head = new;

		return (new);
	}

	for (; tmp->next; tmp = tmp->next)
		;

	tmp->next = new;
	new->prev = tmp;

	return (new);
}
