/*
 * File: 9-times_table.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int i = 0;

	while (i <= 9)
	{
		int j = 0;

		while (j <= 9)
		{
			int a = i * j;
			int b = a / 10;
			int c = a % 10;

			if (j == 0)
			{
				_putchar(a + '0');
			}
			else if (a < 10 && j != 0)
			{
				_putchar(' ');
				_putchar(a + '0');
			}
			else
			{
				_putchar(b + '0');
				_putchar(c + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
