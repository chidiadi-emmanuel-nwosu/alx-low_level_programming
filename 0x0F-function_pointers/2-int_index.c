/*
 * File: 2-int_index.c
 * Author: Chidiadi E. Nwosu
 */

#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: input array.
 * @size: size of the input array.
 * @cmp: pointer to the needed function to compare values.
 *
 * Return: index of the first element for which the cmp
 *         function does not return 0, -1 otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
