/*
 * File: 0-puts_recursion.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: input string
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (!(*s))
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
