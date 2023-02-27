/*
 * File: 2-strlen.c
 * Author: Chidiadi E. Nwosu
 */

#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string length to return
 *
 * Return: void
 */
int _strlen(char *s)
{
	int count = 0;

	while ((*(s++) != '\0'))
		count++;

	return (count);
}
