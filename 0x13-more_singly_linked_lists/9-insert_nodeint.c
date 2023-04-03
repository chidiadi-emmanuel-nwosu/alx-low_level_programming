/*
 * File: 9-insert_nodeint.c
 * Author: Chidiadi E. Nwosu
 */

#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the head node
 * @idx: index of the node, starting at 0
 * @n: data to the new node
 *
 * Return: the head node on success, NULL on failure.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1;
	listint_t *tmp, *new_node;

	tmp = *head;

	for (; i < idx; i++)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
	}

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = tmp->next;
	tmp->next = new_node;

	return (new_node);
}