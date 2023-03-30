/*
 * File: 2-add_node.c
 * Author: Chidiadi E. Nwosu
 */

#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to the head node
 * @str: string to be added to the list
 *
 * Return: the head pointer
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last;

	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	last = *head;

	while (last->next)
		last = last->next;

	last->next = new;

	return (*head);
}
