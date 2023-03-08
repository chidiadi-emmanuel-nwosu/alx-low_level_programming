/*
 * File: 5-sqrt_recursion.c
 * Author: Chidiadi Nwosu
 */

#include "main.h"

int find_sqrt(int, int);
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input integer
 *
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (find_sqrt(n, 2));
}


/**
 * find_sqrt - find the square root of an integer
 * @n: input integer
 * @i: counter
 *
 * Return: square root of n
 */

int find_sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	if ((i * i) > n )
		return (-1);
	return (find_sqrt(n, i + 1));
}
