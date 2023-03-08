/*
 * File: 101-wildcmp.c
 * Author: Chidiadi Nwosu
 */

#include "main.h"
#include <stdio.h>
/**
 * wildcmp - compares two strings
 * @s1: first input string
 * @s2: second input string
 *
 * Return: 1 if s1 and s2 are identical. 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == 0 && *s2 == '*' && *(s2 + 1) != 0)
		return (0);
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	return (0);
}
