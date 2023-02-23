/*
 * File: 101-print_number.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = num * -1;
	}
	if ((num / 10) == 0)
	{
		_putchar(num + '0');
		return;
	}
	print_number(num / 10);

	_putchar((num % 10) + '0');
}
