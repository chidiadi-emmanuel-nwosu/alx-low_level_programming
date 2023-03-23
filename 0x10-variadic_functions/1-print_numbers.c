/*
 * File: 1-print_numbers.c
 * Author: Chidiadi E. Nwosu
 * Date: March 23, 2023
 */

#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints all numbers entered as input.
 * @separator: string to be printed between numbers
 * @n: number of parameters passed in.
 *
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i, j;

	va_start(ptr, n);

	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			printf("%i", va_arg(ptr, int));
			if (separator && (i != n - 1))
			{
				for (j = 0; separator[j] != '\0'; j++)
					printf("%c", separator[j]);
			}
		}
		printf("\n");
	}

	va_end(ptr);
}
