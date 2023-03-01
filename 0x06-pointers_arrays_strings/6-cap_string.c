/*
 * File: 6-cap_string.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"
#include <stdio.h>
/**
 * cap_string - capitalize all words of a string
 * @str: input string
 *
 * Return: str
 */
char *cap_string(char *str)
{
	int i;

	if (str[0] >= 97 && str[0] <= 122)
		str[0] -= 32;

	for (i = 0; str[i] != '\0'; i++)
	{

		if (str[i] >= 97 && str[i] <= 122)
		{
			switch (str[i - 1])
			{
				case ' ': case '\t': case '\n': case ',':
				case ';': case '.': case '!': case '?':
				case '"': case '(': case ')': case '{':
				case '}':
					str[i] -= 32;
			}
		}
	}

	return (str);
}
