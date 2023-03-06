/*
 * File: 100-set_string.c
 * Author: Chidiadi E. Nwosu
 */
#include "main.h"
#include <stdio.h>
/**
 * set_string - sets the value of a pointer to a char
 * @s: input string
 * @to: pointer to set value to
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
