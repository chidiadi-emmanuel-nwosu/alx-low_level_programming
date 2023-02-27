/*
 * File: 1-swap.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: integer to be swaped
 * @b: integer to be swapped
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
