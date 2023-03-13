/*
 * File: 4-free_grid.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"
#include <stdlib.h>


/**
 * free_grid - frees a 2 dimensional grid of integers
 * @grid: array grid
 * @height: height of the array
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
