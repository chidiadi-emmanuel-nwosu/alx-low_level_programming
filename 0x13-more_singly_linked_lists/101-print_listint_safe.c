/*
 * File: 101-print_listint_safe.c
 * Author: Chidiadi E. Nwosu
 */

#include "lists.h"

size_t check_loop(const listint_t *head);
/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the head node
 *
 * Return: the number of node in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0, i = 0;
	const listint_t *tmp = head;


	count = check_loop(head);

	if (count)
	{
		for (; i < count; i++)
		{
			printf("[%p] %i\n", (void *)tmp, tmp->n);
			tmp = tmp->next;
		}
		printf("-> [%p] %i\n", (void *)tmp, tmp->n);
	}
	else
	{
		while (tmp)
		{
			printf("[%p] %i\n", (void *)tmp, tmp->n);
			count += 1;
			tmp = tmp->next;
		}
	}

	return (count);
}



/**
 * check_loop - checks for loop in a linked listint_t.
 * @head: head node input.
 *
 * Return: the number of node in the list
 */
size_t check_loop(const listint_t *head)
{
	size_t count = 1, check = 0;
	const listint_t *slow, *fast;

	if (head == NULL || head->next == NULL)
		return (0);

	slow = head->next;
	fast = head->next->next;

	while (slow && fast && fast->next)
	{
		if (slow == fast)
		{
			check = 1;
			break;
		}
		slow = slow->next;
		fast = fast->next->next;
	}

	if (check == 0)
	{
		return (0);
	}
	else
	{
		while (slow->next != fast)
		{
			count += 1;
			slow = slow->next;
		}
	}

	return (count + 2);
}
