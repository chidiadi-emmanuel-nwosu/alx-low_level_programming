/*
 * File: 2-add_node.c
 * Author: Chidiadi E. Nwosu
 */

#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to the head node
 * @str: string to be added to the list
 *
 * Return: the head pointer
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int len = 0;

	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);

	for (; str[len]; len++)
		;


	new->str = strdup(str);
	new->len = len;
	new->next = *head;

	*head = new;


	return (*head);
}
