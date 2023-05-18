/*
 * File: 4-free_dlistint.c
 * Author: Chidiadi E. Nwosu
 */

#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to the head node of the list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = NULL;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
