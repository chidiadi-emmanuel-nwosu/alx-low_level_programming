/*
 * File: 4-print_rev.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: string to be reversed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;

	while (length--)
		_putchar(s[length]);

	_putchar('\n');
}
