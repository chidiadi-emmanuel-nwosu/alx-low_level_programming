/*
 * File: 8-print_array.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: array
 * @n: number of elements to printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i", a[i]);

		if (i < (n - 1))
			printf(", ");
	}
	printf("\n");
}
