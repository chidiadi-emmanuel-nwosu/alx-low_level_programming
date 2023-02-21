/*
 * File: 11-print_to_98.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting natural integer
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%i\n", n);
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			if (n < 98)
				printf("%i, ", n);
			else
				printf("%i", n);
			n++;
		}
		printf("\n");
	}
	else
	{
		while (n >= 98)
		{
			if (n > 98)
				printf("%i, ", n);
			else
				printf("%i", n);
			n--;
		}
		printf("\n");
	}
}
