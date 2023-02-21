/*
 * File: 102-fibonacci.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	long m = 1;
	long n = 2;
	int i;

	for (i = 1; i <= 50; i++)
	{
		if (i == 1)
		{
			printf("%i, ", i);
		}
		else if (i == 2)
		{
			printf("%i, ", i);
		}
		else
		{
			long fib = m + n;

			m = n;
			n = fib;

			if (i < 50)
			{
				printf("%li, ", fib);
			}
			else
			{
				printf("%li\n", fib);
			}
		}
	}

	return (0);
}
