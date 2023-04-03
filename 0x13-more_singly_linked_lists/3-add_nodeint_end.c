/*
 * File: 3-add_nodeint_end.c
 * Author: Chidiadi E. Nwosu
 */

#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the head node
 * @n: data to be added
 *
 * Return: pointer to the head node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *tmp;

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	tmp = *head;

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = new_node;

	return (*head);
}
