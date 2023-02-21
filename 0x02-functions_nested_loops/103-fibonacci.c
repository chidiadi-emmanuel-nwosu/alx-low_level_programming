/*
 * File: 103-fibonacci.c
 * Author: Chidiadi E. Nwosu
 */

#include <stdio.h>

/**
 * main - a program that finds and prints the
 *        sum of the even-valued terms of fibonacci
 *        numbers up to 4,000,000
 *
 * Return: 0 (success)
 */
int main(void)
{
	int m = 1;
	int n = 2;
	int sum = 2;

	while (1)
	{
		int fib = m + n;

		m = n;
		n = fib;

		if (fib >= 4000000)
			break;
		if ((fib) % 2 == 0)
			sum += fib;
	}
	printf("%i\n", sum);

	return (0);
}
