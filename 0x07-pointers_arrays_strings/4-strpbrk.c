/*
 * File: 4-strpbrk.c
 * Author: Chidiadi E. Nwosu
 */
#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string input1
 * @accept: string input2
 *
 * Return: pointer to the byte in s that matches one of the
 *         bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (s[i] != '\0')
	{
		int j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}
	return (s = 0);
}
