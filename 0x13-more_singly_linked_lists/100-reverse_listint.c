/*
 * File: 100-reverse_listint.c
 * Author: Chidiadi E. Nwosu
 */

#include "lists.h"

int check_node(listint_t *head, listint_t **node_list, size_t count);
/**
 * reverse_listint - reverse a listint_t linked list.
 * @head: pointer to the head node
 *
 * Return: the head node on success, NULL on failure.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL, *next_node = *head;

	if (*head == NULL)
		return (NULL);

	while (*head)
	{
		next_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = *head;
		*head = next_node;
	}

	*head = prev_node;

	return (*head);
}
