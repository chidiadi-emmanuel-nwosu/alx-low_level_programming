/*
 * File: 1-array_iterator.c
 * Author: Chidiadi E. Nwosu
 */

#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 *                  on each element of an array.
 * @array: input array
 * @size: size of the input array
 * @action: pointer to the needed function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
