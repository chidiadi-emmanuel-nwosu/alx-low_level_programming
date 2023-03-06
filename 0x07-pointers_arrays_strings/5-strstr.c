/*
 * File: 5-strstr.c
 * Author: Chidiadi E. Nwosu
 */
#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring to locate
 *
 * Return: pointer to the beginning of the located subtring,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (needle[0] == haystack[i])
		{
			int k = i;

			for (j = 0; needle[j] != '\0'; j++)
			{
				if (needle[j] != haystack[i])
					return ('\0');
				i++;
			}
			return (haystack + k);
		}
	}

	return ('\0');
}
