/*
 * File: 1-alphabet.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"

/**
 * print_alphabet - prints lowercase alphabets
 *
 * Return: void
 */

void print_alphabet(void)
{
	char i = 'a';

	while (1)
	{
		_putchar(i++);
		if (i > 'z')
			break;
	}
	_putchar('\n');
}
