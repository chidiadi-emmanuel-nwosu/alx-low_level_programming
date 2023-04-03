/*
 * File: 7-get_nodeint.c
 * Author: Chidiadi E. Nwosu
 */

#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the head node
 * @index: index of the node, starting at 0
 *
 * Return: the nth node of the list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 1;

	for (; n <= index; n++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
