/*
 * File: 10-print_triangle.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle to be printed
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i = 0;

	while (i < size)
	{
		int j = 0;
		int k = size - 1;

		while (k > i)
		{
			_putchar(' ');
			k--;
		}
		while (j <= i)
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
