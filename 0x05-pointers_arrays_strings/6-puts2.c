/*
 * File: 6-puts2.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"

/**
 * puts2 - prints every other character of a string,
 *         starting with the first character
 * @str: string to be printed
 *
 * Return: void
 */
void puts2(char *str)
{
	int count = 0;
	int i;

	while ((str[count] != '\0'))
		count++;

	for (i = 0; i < count; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

