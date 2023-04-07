/*
 * File: 5-flip_bits.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"



/**
 * flip_bits - checks the number of bits needed to flip to get m from n.
 * @n: number input
 * @m: number input
 *
 * Return: number of bits to be flipped.
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int tmp = n ^ m, count = 0;

	while (tmp)
	{
		if (tmp & 1)
			count += 1;
		tmp = tmp >> 1;
	}
	return (count);
}
