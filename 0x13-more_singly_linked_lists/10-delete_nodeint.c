/*
 * File: 10-delete_nodeint.c
 * Author: Chidiadi E. Nwosu
 */

#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a new node at a given position.
 * @head: pointer to the head node
 * @idx: index of the node, starting at 0
 *
 * Return: the head node on success, NULL on failure.
 */
int delete_nodeint_at_index(listint_t **head, __attribute__((unused)) unsigned int index)
{
	listint_t *tmp = *head;
	unsigned int len = 0;

	if (*head == NULL)
		return (-1);

	while (tmp)
	{
		tmp = tmp->next;
		len += 1;
	}
	if (index >= len)
		return (-1);

	tmp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
	}
	else
	{
		listint_t *tmp_next;
		unsigned int i = 1;

		for (; i < index; i++)
			tmp = tmp->next;

		tmp_next = tmp->next;
		tmp->next = tmp_next->next;
		free(tmp_next);
	}

	return (1);
}
