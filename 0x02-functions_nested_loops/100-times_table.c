/*
 * File: 100-times_table.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n: n times table
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		int j;

		for (j = 0; j <= n; j++)
		{
			if (j == 0)
			{
				_putchar((i * j) + '0');
			}
			else if ((i * j) < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar((i * j) + '0');
			}
			else if ((i * j) >= 10 && (i * j) < 100)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(((i * j) / 10) + '0');
				_putchar(((i * j) % 10) + '0');
			}
			else if ((i * j) >= 100)
			{
				_putchar(' ');
				_putchar(((i * j) / 100) + '0');
				_putchar((((i * j) / 10) % 10) + '0');
				_putchar(((i * j) % 10) + '0');
			}
			if (j != n)
				_putchar(',');
		}
		_putchar('\n');
	}
}
