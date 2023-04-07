/*
 * File: 1-print_binary.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"



/**
 * print_binary - prints binary representation of a number
 * @n: number input in decimal
 *
 * Return: void
 */


void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n > 1)
		print_binary(n >> 1);
	(n & 1) ? _putchar('1') : _putchar('0');
}
