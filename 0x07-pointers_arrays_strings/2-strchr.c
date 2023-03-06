/*
 * File: 2-strchr.c
 * Author: Chidiadi E. Nwosu
 */
#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string input
 * @c: character to locate
 *
 * Return: pointer to first occurence a c
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	do {
		if (*(s + i) == c)
			return (s + i);
		i++;
	} while (s[i] != '\0');

	return ('\0');
}
