/*
 * File: 5-strstr.c
 * Author: Chidiadi E. Nwosu
 */
#include "main.h"

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
	int i = 0;
	int j = 0;
	int index = 0;

	while (haystack[j] != '\0')
	{
		if (needle[i] == haystack[j])
		{
			index = j;
			break;
		}
		j++;
	}

	while (needle[i] != '\0')
	{
		if (needle[i++] != haystack[j++])
			return (haystack = 0);
	}

	return (haystack + index);
}
