/*
 * File: 5-free_listint2.c
 * Author: Chidiadi E. Nwosu
 */

#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and set the pointer to NULL
 * @head: pointer to pointer to the head node
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}

	*head = NULL;
}
