/*
 * File: 100-is_palindrome.c
 * Author: Chidiadi Nwosu
 */

#include "main.h"

int check_len(char *);
int check_pal(char *, int, int);

/**
 * is_palindrome - checks if a string is palindrome
 * @s: input string
 *
 * Return: 1 if s is palindrome, 0 therwise
 */
int is_palindrome(char *s)
{
	if (s == 0)
		return (1);
	return (check_pal(s, 0, check_len(s) - 1));
}


/**
 * check_len - find the length of a string
 * @s: input string
 *
 * Return: length of s
 */

int check_len(char *s)
{
	if (*s == 0)
		return (0);
	return (check_len(s + 1) + 1);
}


/**
 * check_pal - checks if a string is palindrome
 * @s: input string
 * @i: start s index
 * @j: end s index
 *
 * Return: 1 is s is palindrome, 0 otherwise
 */

int check_pal(char *s, int i, int j)
{
	if (*(s + i) != *(s + j))
		return (0);
	if (i >= j)
		return (1);
	return (check_pal(s, ++i, --j));
}
