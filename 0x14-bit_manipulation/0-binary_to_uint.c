/*
 * File: 0-binary_to_uint.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number inputted as string
 *
 * Return: converted number
 */


unsigned int binary_to_uint(const char *b)
{
	int idx, len = 0, power = 1;
	unsigned int res = 0;

	if (b == NULL)
		return (0);


	/*checks for string length and chars not 0 and 1*/
	for (; b[len]; len++)
	{
		if ((b[len] - '0') > 1)
			return (0);
	}

	for (idx = len - 1; idx >= 0; idx--)
	{
		res += (b[idx] - '0') * power;
		power *= 2;
	}

	return (res);
}
