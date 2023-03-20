/*
 * File: 3-strcmp.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"
#include <stdio.h>
/**
 * _strcmp - compares two strings
 * @s1: string1
 * @s2: string2
 *
 * Return: 0 if s1 and s2 are the same, +ve or -ve value otherwise
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int sum;

	while (!(s1[i] == '\0' || s2[i] == '\0'))
	{
		sum = s1[i] - s2[i];

		if (sum != 0)
			break;
		i++;
	}
	return (sum);
}
