/*
 * File: 102-free_listint_safe.c
 * Author: Chidiadi E. Nwosu
 */

#include "lists.h"

size_t check_loop2(listint_t *head);
/**
 * free_listint_safe - prints a listint_t linked list.
 * @h: pointer to the head node
 *
 * Return: the number of node in the list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0, i = 0;
	listint_t *tmp;


	count = check_loop2(*h);

	if (count)
	{
		for (; i < count; i++)
		{
			tmp = *h;
			*h = (*h)->next;
			free(tmp);
		}
		*h = NULL;
	}
	else
	{
		while (*h)
		{
			tmp = *h;
			*h = (*h)->next;
			count += 1;
			free(tmp);
		}
	}

	h = NULL;
	return (count);
}



/**
 * check_loop2 - checks for loop in a linked listint_t.
 * @head: head node input.
 *
 * Return: the number of node in the list
 */
size_t check_loop2(listint_t *head)
{
	size_t count = 1, check = 0;
	listint_t *slow, *fast;

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
		slow = head;

		while (slow != fast)
		{
			count += 1;
			slow = slow->next;
			fast = fast->next;
		}
		slow = slow->next;
		while (fast != slow)
		{
			count += 1;
			slow = slow->next;
		}
	}

	return (count);
}
