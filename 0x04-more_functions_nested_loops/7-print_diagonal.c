/*
 * File: 7-print_diagonal.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of diagonal lines to be drawn
 *
 * Return: void
 */
void print_diagonal(int n)
{
	if (!(n <= 0))
	{
		int i = 0;

		while (i < n)
		{
			int j = 0;

			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
