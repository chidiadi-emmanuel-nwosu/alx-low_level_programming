/*
 * File: 2-print_strings.c
 * Author: Chidiadi E. Nwosu
 * Date: March 23, 2023
 */

#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - prints all strings entered as input.
 * @separator: string to be printed between strings
 * @n: number of parameters passed in.
 *
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i, j;

	va_start(ptr, n);

	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			char *tmp = va_arg(ptr, char *);

			printf("%s", tmp == NULL ? "(nil)" : tmp);
			if (separator && (i != n - 1))
			{
				for (j = 0; separator[j] != '\0'; j++)
					printf("%c", separator[j]);
			}
		}
	}
	printf("\n");

	va_end(ptr);
}
