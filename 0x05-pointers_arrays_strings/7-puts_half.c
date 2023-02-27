/*
 * File: 7-puts_half.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to be printed
 *
 * Return: void
 */
void puts_half(char *str)
{
	int count = 0;
	int i, n;

	while ((str[count] != '\0'))
		count++;

	if (count % 2 == 0)
		n = count / 2;
	else
		n = ((count - 1) / 2) + 1;

	for (i = n; i < count; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

