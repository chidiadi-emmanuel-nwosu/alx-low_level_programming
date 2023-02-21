/*
 * File: 3-islower.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"

/**
 * _islower - checks for lowercase character.
 * @c: input character
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);

	return (0);
}
