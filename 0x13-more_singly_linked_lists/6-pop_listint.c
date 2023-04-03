/*
 * File: 6-pop_listint.c
 * Author: Chidiadi E. Nwosu
 */

#include "lists.h"

/**
 * free_listint - deletes the head node of a listint_t linked list.
 * @head: pointer to the head node
 *
 * Return: the head node's data(n)
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n = 0;

	if (*head)
	{
		tmp = *head;
		n = tmp->n;
		*head = (*head)->next;
		free(tmp);
	}

	return (n);
}
