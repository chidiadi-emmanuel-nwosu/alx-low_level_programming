/*
 * File: 0-sum_them_all.c
 * Author: Chidiadi E. Nwosu
 * Date: March 23, 2023
 */

#include "variadic_functions.h"

/**
 * sum_them_all - sum of all parameters entered as input.
 * @n: number of parameters passed in.
 *
 * Return: sum of the input parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	int sum = 0;
	unsigned int i;

	va_start(ptr, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(ptr, int);

	va_end(ptr);

	return (sum);
}
