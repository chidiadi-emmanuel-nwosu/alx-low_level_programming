/*
 * File: 3-print_numbers.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"

/**
 * print_numbers - prints the numbers from 0 t0 9
 *
 * Return: void
 */
void print_numbers(void)
{
	char c = '0';

	while (c <= '9')
		_putchar(c++);
	_putchar('\n');
}
