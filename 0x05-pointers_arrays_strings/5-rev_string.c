/*
 * File: 5-rev_string.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int count = 0;
	int i;

	while ((s[count] != '\0'))
		count++;

	for (i = 0; i < count / 2; i++)
	{
		char tmp = *(s + i);
		*(s + i) = *(s + (count - 1 - i));
		*(s + (count - 1 - i)) = tmp;
	}
}

