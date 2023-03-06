/*
 * File: 8-print_diagsums.c
 * Author: Chidiadi E. Nwosu
 */
#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 *                  of a square matrix of integers
 * @a: input array
 * @size: size of the square matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = size * size;
	int diag1 = 0;
	int diag2 = 0;

	while (i < j)
	{
		if (i % (size + 1) == 0)
			diag1 += *(a + i);
		if (i > 0 && i < (j - 1) && i % (size - 1) == 0)
			diag2 += *(a + i);
		i++;
	}

	printf("%i, %i\n", diag1, diag2);
}
