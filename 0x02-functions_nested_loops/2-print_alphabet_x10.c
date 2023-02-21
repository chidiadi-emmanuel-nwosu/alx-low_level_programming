/*
 * File: 2-print_alphabet_x10.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char j = 'a';

		while (j <= 'z')
		{
			_putchar(j++);
		}
		_putchar('\n');
		i++;
	}
}
