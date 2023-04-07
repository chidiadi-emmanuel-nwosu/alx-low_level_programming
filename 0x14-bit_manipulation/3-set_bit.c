/*
 * File: 3-set_bit.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"



/**
 * set_bit - sets the value of a bit to 0 at a given index.
 * @n: number input pointer
 * @index: index starting from 0
 *
 * Return: 1 on success, -1 if an error occured
 */


int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(*n) * 8)
		return (-1);

	if (!(*n & (1 << index)))
		*n = *n | (1 << index);

	return (1);
}
