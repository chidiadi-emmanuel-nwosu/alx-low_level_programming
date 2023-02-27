/*
 * File: 100-atoi.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert a string to an integer
 * @s: string to be converted
 *
 * Return: converted int value
 */
int _atoi(char *s)
{
	int c_nve = 0;
	int i = 0;
	unsigned int result = 0;

	while ((s[i] != '\0'))
	{
		if (s[i] >= '0' && s[i] <= '9')
			break;
		else if (s[i] == '-')
			c_nve++;

		i++;
	}

	while ((s[i] != '\0'))
	{
		if (!(s[i] >= '0' && s[i] <= '9'))
			break;

		result = result * 10 + s[i] - '0';
		i++;
	}

	if ((c_nve % 2) != 0)
		result = -result;

	return (result);
}
