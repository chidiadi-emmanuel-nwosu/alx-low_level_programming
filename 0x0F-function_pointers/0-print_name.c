/*
 * File: 0-print_name.c
 * Author: Chidiadi E. Nwosu
 */

#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: function pointer to another function printing name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if(name)
		f(name);
}
