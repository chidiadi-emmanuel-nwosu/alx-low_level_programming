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

	while (*haystack)
	{
		i = 0;

		if (needle[i] == haystack[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (needle[i] == haystack[i]);
		}
		haystack++;
	}
	return ('\0');
}
