/*
 * File: 3-array_range.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimun element of the array
 * @max: maximum element of the array
 *
 * Return: pointer to the allocated memory
 */
int *array_range(int min, int max)
{
	int *ptr = NULL;
	int range = max - min;
	int i;

	if (range < 0)
		return (NULL);

	ptr = malloc(sizeof(*ptr) * (range + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < range + 1; i++)
		*(ptr + i) = min++;

	return (ptr);
}
