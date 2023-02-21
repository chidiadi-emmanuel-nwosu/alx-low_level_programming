/*
 * File: 7-print_last_digit.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: input parameter
 *
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int m = n % 10;

	if (m < 0)
		m *= -1;

	_putchar(m + '0');
	return (m);
}
