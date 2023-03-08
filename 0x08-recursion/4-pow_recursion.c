/*
 * File: 4-pow_recursion.c
 * Author: Chidiadi Nwosu
 */

#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: mantissa
 * @y: power
 *
 * Return: x^y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);

	y--;
	return (x * _pow_recursion(x, y));
}
