#include "search_algos.h"
#include <math.h>

/**
 * jump_list - function that searches for a value in a linked list
 *              of integers using the jump search algorithm
 *
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in the list
 * @value: value to search for
 *
 * Return: pointer to the first node where value is located.
 *         NULL if value is not present the list or head is NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *prev, *cur, *tmp;
	size_t step, x;

	if (!list || !size)
		return (NULL);

	cur = list;
	step = (size_t)sqrt(size);
	while (cur && cur->n < value)
	{
		prev = cur;
		x = 0;
		while (x < step && cur)
		{
			tmp = cur;
			cur = cur->next;
			x++;
		}
		printf("Value checked at index[%lu] = [%i]\n",
				cur ? cur->index : tmp->index,
				cur ? cur->n : tmp->n);
	}

	cur = cur ? cur : tmp;
	printf("Value found between indexes [%lu] and [%lu]\n", prev->index, cur->index);

	x = prev->index;
	for (; x <= cur->index && x < size; x++)
	{
		printf("Value checked at index[%lu] = [%i]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	return (NULL);
}
