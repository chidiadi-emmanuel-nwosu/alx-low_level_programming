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
	int j = 0;

	while (haystack[j] >= '\0')
	{
		if (needle[0] == haystack[j])
		{
			return (haystack + j);
		}
		j++;
	}

	return ('\0');

}
