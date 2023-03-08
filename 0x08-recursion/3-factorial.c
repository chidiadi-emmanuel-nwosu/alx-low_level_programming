/*
 * File: 3-factorial.c
 * Author: Chidiadi Nwosu
 */

#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: input integer
 *
 * Return: factorial of 1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else if (n == 1)
		return (1);

	return (n * factorial(n - 1));
}
