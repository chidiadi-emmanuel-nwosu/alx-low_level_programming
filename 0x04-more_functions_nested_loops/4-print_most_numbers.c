/*
 * File: 4-print_most_numbers.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9 except 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		if (!(c == '2' || c == '4'))
			_putchar(c);
		c++;
	}
	_putchar('\n');
}
