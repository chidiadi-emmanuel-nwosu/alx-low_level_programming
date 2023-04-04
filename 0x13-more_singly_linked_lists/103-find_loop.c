/*
 * File: 103-find_loop.c
 * Author: Chidiadi E. Nwosu
 */

#include "lists.h"

size_t check_loop3(listint_t *head);
/**
 * find_listint_loop - find the loop in a linked list.
 * @head: pointer to the head node
 *
 * Return: the address of the node where the loop starts
 *         or NULL if there is no loop'
 */
listint_t *find_listint_loop(listint_t *head)
{
	size_t count = 0, i = 0;

	count = check_loop3(head);

	if (count == 0)
		return (NULL);

	for (; i < count; i++)
		head = head->next;
	return (head);
}



/**
 * check_loop3 - checks for loop in a linked listint_t.
 * @head: head node input.
 *
 * Return: the number of node in the list
 */
size_t check_loop3(listint_t *head)
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
