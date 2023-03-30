/*
 * File: 2-add_node.c
 * Author: Chidiadi E. Nwosu
 */

#include "lists.h"

/**
 * add_node - adds a new node at the end of a list_t list.
 * @head: pointer to the head node
 * @str: string to be added to the list
 *
 * Return: the head pointer
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tmp;
	int len = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (; str[len]; len++)
		;


	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		tmp = *head;

		while (tmp->next != NULL)
			tmp = tmp->next;
	}
	tmp->next = new;

	return (*head);
}
