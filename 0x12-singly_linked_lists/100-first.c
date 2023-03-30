/*
 * File: 100-first.c
 * Author: Chidiadi E. Nwosu
 */

#include "lists.h"

/**
 * exec_before_main - function that executes before
 *                    the main function is executed
 *
 * Return: void
 */

void __attribute__((constructor)) exec_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
