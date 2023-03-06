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
	int i;

	if (*needle == 0)
		return ('\0');

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (needle[0] == haystack[i])
		{
			int index = i;
			int j;

			for (j = 0; needle[j] == haystack[i]; j++)
			{
				if (needle[j] == '\0')
					return (haystack + index);
				i++;
			}
		}
	}

	return ('\0');
}
