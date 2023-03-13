/*
 * File: 3-alloc_grid.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"
#include <stdlib.h>


/**
 * alloc_grid - creates a 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 *
 * Return: array pointer
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if ((width * height) <= 0)
		return (NULL);

	ptr = malloc(sizeof(int *) * height);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);

		if (ptr[i] == NULL)
		{
			for (; i >= 0; i--)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}
	}


	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}
