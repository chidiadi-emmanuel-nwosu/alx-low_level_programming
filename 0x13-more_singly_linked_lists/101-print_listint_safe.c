/*
 * File: 101-print_listint_safe.c
 * Author: Chidiadi E. Nwosu
 */

#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the head node
 *
 * Return: the number of node in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	listint_t *node_list[1024];
	listint_t *tmp;

	if (head == NULL)
		exit(98);

	printf("[%p] %i\n", (void *)head, head->n);
	tmp = head->next;

	while (tmp)
	{
		if (check_node(tmp, node_list, count))
		{
			printf("-> [%p] %i\n", (void *)tmp, tmp->n);
			return (count);
		}
		printf("[%p] %i\n", (void *)tmp, tmp->n);
		node_list[count] = tmp;
		count += 1;
		tmp = tmp->next;
	}
	return (0);
}



/**
 * check_node - checks for duplicate value in an array.
 * @head: input value to check for.
 * @node_list: array to be checked.
 * @count: number of times to iterate the array.
 *
 * Return: the number of node in the list
 */
int check_node(listint_t *head, listint_t **node_list, size_t count)
{
	size_t i = 0;

	for (; i < count; i++)
	{
		if (head == node_list[i])
			return (1);
	}

	return (0);
}
