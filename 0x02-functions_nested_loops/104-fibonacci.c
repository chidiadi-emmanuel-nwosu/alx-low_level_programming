/*
 * File: 104-fibonacci.c
 * Author: Chidiadi E. Nwosu
 */

#include <stdio.h>

/**
 * main - prints the first 98 fibonacci number
 *
 * Return: 0 (success)
 */
int main(void)
{
	unsigned long m = 1;
	unsigned long n = 2;
	int i = 1;

	while (i <= 98)
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
			unsigned long fib = m + n;

			m = n;
			n = fib;

			if (i < 98)
				printf("%li, ", fib);
			else
				printf("%li\n", fib);
		}
		i++;
	}

	return (0);
}
