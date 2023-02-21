/*
 * File: 6-abs.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: integer to be computed
 *
 * Return: absolute n value
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
