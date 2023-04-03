/*
 * File: 2-add_nodeint.c
 * Author: Chidiadi E. Nwosu
 */

#include "lists.h"

/**
 * add_nodeint - add a new_node the beginning of a linked listint_t list
 * @head: pointer to the head node
 * @n: data of the new_node
 *
 * Return: pointer to the head node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
