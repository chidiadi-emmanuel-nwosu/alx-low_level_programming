/*
 * File: 101-print_number.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"

/**
 * print_number - prints an integer
 * @n: input integer
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int m = n;

	if (n < 0)
	{
		_putchar('-');
		m = -m;
	}

	if ((m / 10) == 0)
	{
		_putchar(m + '0');
		return;
	}

	print_number(m / 10);

	_putchar((m % 10) + '0');
}
