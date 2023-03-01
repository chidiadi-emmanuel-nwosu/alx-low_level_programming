/*
 * File: 100-rot13.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: input string
 *
 * Return: str
 */
char *rot13(char *str)
{
	char *s1 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *s2 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		int j;

		for (j = 0; s1[j] != '\0'; j++)
		{
			if (str[i] == s1[j])
			{
				str[i] = s2[j];
				break;
			}
		}
	}

	return (str);
}
