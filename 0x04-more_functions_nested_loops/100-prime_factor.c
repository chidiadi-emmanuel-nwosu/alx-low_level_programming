/*
 * File: 100-prime_factor.c
 * Author: Chidiadi E. Nwosu
 */
#include <stdio.h>
#include <math.h>

/**
 * main - finds and print the largest prime factor
 *
 * Return: 0 (success)
 */

int main(void)
{
	long number = 612852475143;
	int i = 0;

	while (1)
	{
		if ((number % 2) == 0)
			number = number / 2;
		else
			break;
	}
	while (1)
	{
		if ((number % 3) == 0)
			number = number / 3;
		else
			break;
	}
	while (++i)
	{
		int m = 6 * i - 1, n = 6 * i + 1;

		while (1)
		{
			if ((number % m) == 0)
				number = number / m;
			else
				break;
		}
		while (1)
		{
			if ((number % n) == 0)
				number = number / n;
			else
				break;
		}
		if (m > sqrt(number))
			break;
	}
	printf("%li\n", number);
	return (0);
}
