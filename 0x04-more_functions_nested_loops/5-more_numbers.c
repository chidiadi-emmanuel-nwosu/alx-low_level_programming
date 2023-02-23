/*
 * File: 5-more_numbers.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 0;

		while (j <= 14)
		{
			int m = j / 10;
			int n = j % 10;

			if (j >= 10)
				_putchar(m + '0');
			_putchar(n + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
