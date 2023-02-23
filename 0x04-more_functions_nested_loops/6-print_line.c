/*
 * File: 6-print_line.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: length of line
 *
 * Return: void
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
