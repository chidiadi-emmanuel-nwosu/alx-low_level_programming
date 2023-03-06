/*
 * File: 3-strspn.c
 * Author: Chidiadi E. Nwosu
 */
#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string input1
 * @accept: string input2
 *
 * Return: number of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int count = 0;

	while (s[i] != '\0')
	{
		int j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
			break;
		i++;
	}
	return (count);
}
