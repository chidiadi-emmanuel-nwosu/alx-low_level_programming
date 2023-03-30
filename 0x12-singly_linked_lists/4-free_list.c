/*
 * File:  4-free_list.c
 * Author: Chidiadi E. Nwosu
 */

#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: pointer to the head node
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
	free(head);
}
