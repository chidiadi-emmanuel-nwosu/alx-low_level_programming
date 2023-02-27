/*
 * File: 3-puts.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"

/**
 * _puts - prints a string
 * @str: string to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while ((*(str + i) != '\0'))
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
