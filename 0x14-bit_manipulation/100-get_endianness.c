/*
 * File: 100-get_endianness.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"
#include <stdio.h>


/**
 * get_endianness - checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian.
 */


int get_endianness(void)
{
	int tmp = 1;
	char *check = (char *)&tmp;

	if (*check)
		return (1);

	return (0);
}
