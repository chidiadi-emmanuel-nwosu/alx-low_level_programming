/*
 * File: 4-rev_array.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverse content of an array of integers
 * @a: array
 * @n: number of elements of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n / 2); i++)
	{
		int tmp = a[i];

		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
