/*
 * File: 7-leet.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"

/**
 * leet - encodes a function into 1337
 * @str: input string
 *
 * Return: str
 */
char *leet(char *str)
{
	char *s1 = "AEOTL";
	char *s2 = "aeotl";
	char *s3 = "43071";
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		int j;

		for (j = 0; j < 5; j++)
		{
			if (str[i] == s1[j] || str[i] == s2[j])
				str[i] = s3[j];
		}
	}

	return (str);
}
