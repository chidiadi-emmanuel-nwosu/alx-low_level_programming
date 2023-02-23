/*
 * File: 8-print_square.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int i = 0;

	while (i < size)
	{
		int j = 0;

		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
	if (size <= 0)
		_putchar('\n');
}
